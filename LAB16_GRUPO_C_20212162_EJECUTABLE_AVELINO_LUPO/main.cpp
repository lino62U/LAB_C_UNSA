#include <iostream>
#include <string.h>

class WinFactory;
class MacFactory;

class GUIFactory {
    public:
        virtual WinFactory* CrearControlW() const = 0;
        virtual MacFactory* CrearControlM() const = 0;
};

//          CREAR PRODUCTO A
class WinFactory {
    public:
        virtual ~WinFactory() {};
        virtual std::string Draw() const = 0;
};

class WinButton : public WinFactory {
    public:
        std::string Draw() const override {
        return "Button Windows";
}
};

class WinCheckBox : public WinFactory {
    std::string Draw() const override {
        return "CheckBox Windows";
    }
};


//          CREAR PRODUCTO B
class MacFactory {
    public:
        virtual ~MacFactory() {};
        virtual std::string Draw() const = 0;
        virtual std::string draw(const WinFactory& colaborador) const = 0;
};

class MacButton : public MacFactory {
    public:
        std::string Draw() const override {
            return "Button Mac";
        }

        std::string draw(const WinFactory& colaborador) const override {
            const std::string result = colaborador.Draw();
            return "Button Mac con ayuda de " + result;
        }
};

class MacCheckBox : public MacFactory {
    public:
        std::string Draw() const override {
            return "CheckBox Mac";
        }

        std::string draw(const WinFactory& colaborador) const override {
            const std::string result = colaborador.Draw();
            return "CheckBox Mac " + result;
        }
};


// PRODUCTOS FINALES PRODUCIDOS
class Button : public GUIFactory {
    public:
        WinFactory* CrearControlW() const override {
            return new WinButton();
        }
        MacFactory* CrearControlM() const override {
            return new MacButton();
        }
};

class CheckBox : public GUIFactory {
    public:
        WinFactory* CrearControlW() const override {
            return new WinCheckBox();
        }

        MacFactory* CrearControlM() const override {
            return new MacCheckBox();
        }
};


void Aplication(const GUIFactory& f, int os) {
    const WinFactory* win = f.CrearControlW();
    const MacFactory* mc = f.CrearControlM();
    if(os==1){
        
        std::cout << "\nDibujando "  << win->Draw()<<"\n";
        
    }
    else if(os==2){
        
        std::cout << "\nDibujando "  <<  mc->Draw() << "\n";
   
    }
    
    delete win;
    delete mc;
}


int main() {

    std::cout << "Cliente: win ";
    Button* f1 = new Button();
    Aplication(*f1, 1); // 1 - win
    delete f1;
    std::cout << std::endl;


    std::cout << "Cliente: mc ";
    Button* f2 = new Button();
    Aplication(*f2, 2); // 2 - mc
    delete f2;
    
    return 0;
}