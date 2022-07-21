#include "iostream"
# include"vector"

using namespace std;

class	Piezas{
private:
	std::string names;
	std::string color;
public:
	Piezas(std::string nam,std::string col):names(nam),color(col){}
	std::string getName(){return names;}
	std::string getColor(){return color;}
	void setName(std::string name){this->names = name;}
	void setColor(std::string color){this->color = color;}
	
};

class Producto1 {
public:
	std::vector<Piezas> componentes;
	
	void ListaComp(){
		std::cout << "\nComponentes : "<<endl;
		
		std::cout <<"\tN \tPieza \t\tColor"<<endl;
		for (size_t i = 0; i < componentes.size(); i++) {
			std::cout <<"\t"<<i+1<<"\t"<<componentes[i].getName();
			if(componentes[i].getName()!="Asientos")
				cout<<"\t\t"<< componentes[i].getColor()<<endl;
			else
				cout<<"\t"<< componentes[i].getColor()<<endl;
		}
		std::cout << "\n\n";
	}
};

class IBuilder {
public:
	virtual ~IBuilder() {}
	virtual void puertas() const = 0;
	virtual void llantas() const = 0; 
	virtual void timon() const = 0;
	virtual void asientos() const = 0;
	virtual void motor() const = 0;
	virtual void espejos () const  = 0;
	virtual void vidrios () const = 0;
	
};

class BuilderEspecifico : public IBuilder {
private:
	Producto1* product;
public:
	BuilderEspecifico() {
		this->Reset();
	}
	~BuilderEspecifico() {
		delete product;
	}
	void Reset() {
		this->product = new Producto1();
	}
	
	virtual void puertas() const override{
		std::string color;
		cout<<"\tColor de la puerta: ";getline(std::cin,color);
		Piezas *piezap= new Piezas("Puerta",color);
		this->product->componentes.push_back(*piezap);
	}
	virtual void llantas() const{
		std::string color;
		cout<<"\tColor de la llanta: ";getline(std::cin,color);
		Piezas *piezap= new Piezas("Llanta",color);
		this->product->componentes.push_back(*piezap);
	}
	virtual void timon() const {
		std::string color;
		cout<<"\tColor del timon: ";getline(std::cin,color);
		Piezas *piezap= new Piezas("Timon",color);
		this->product->componentes.push_back(*piezap);
	}
	virtual void asientos() const {
		std::string color;
		cout<<"\tColor de los asientos: ";getline(std::cin,color);
		Piezas *piezap= new Piezas("Asientos",color);
		this->product->componentes.push_back(*piezap);
	}
	virtual void motor() const {
		std::string color;
		cout<<"\tColor del motor: ";getline(std::cin,color);
		Piezas *piezap= new Piezas("Motor",color);
		this->product->componentes.push_back(*piezap);
	}
	virtual void espejos () const  {
		std::string color;
		cout<<"\tColor de los espejos ";getline(std::cin,color);
		Piezas *piezap= new Piezas("Espejos",color);
		this->product->componentes.push_back(*piezap);
	}
	virtual void vidrios () const {
		std::string color;
		cout<<"\tTipo de vidrio: ";getline(std::cin,color);
		Piezas *piezap= new Piezas("Vidrios",color);
		this->product->componentes.push_back(*piezap);
	}
	
	Producto1* GetProducto() {
		Producto1* resultado = this->product;
		this->Reset();
		return resultado;
	}
};

class Director {
private:
	IBuilder* builder;
public:
	void set_builder(IBuilder* builder) {
		this->builder = builder;
	}
	void BuildProductoMin() {
		this->builder->asientos();
		this->builder->llantas();
		this->builder->timon();
	}
	void BuildProductoCompleto() {
	
		this->builder->asientos();
		this->builder->llantas();
		this->builder->puertas();
		this->builder->timon();
		this->builder->vidrios();
		this->builder->motor();
		this->builder->espejos();
	}
};
void completo(){
	cout<<"\t1. Asientos"<<endl;
	cout<<"\t2. Llantas"<<endl;
	cout<<"\t3. Puertas"<<endl;
	cout<<"\t4. Timon"<<endl;
	cout<<"\t5. Vidrios"<<endl;
	cout<<"\t6. Motor"<<endl;
	cout<<"\t7. Espejos"<<endl;
	cout<<endl;
}

void basico(){
	cout<<"\t1. Asientos"<<endl;
	cout<<"\t2. Llantas"<<endl;
	cout<<"\t3. Timon"<<endl;
	cout<<endl;
}
void menu(){
	std::cout<<"Piezas a elegir "<<endl;
	cout<<"\t1. Asientos"<<endl;
	cout<<"\t2. Llantas"<<endl;
	cout<<"\t3. Puertas"<<endl;
	cout<<"\t4. Timon"<<endl;
	cout<<"\t5. Vidrios"<<endl;
	cout<<"\t6. Motor"<<endl;
	cout<<"\t7. Espejos"<<endl;
	cout<<"opc?: ";
}

void ClienteCode(Director& director)
{
	BuilderEspecifico* builder = new BuilderEspecifico();
	director.set_builder(builder);
	
	std::cout << "Productos Basicos:\n";
	basico();
	director.BuildProductoMin();
	Producto1* p = builder->GetProducto();
	p->ListaComp();
	delete p;
	
	std::cout << "Producto Completo:\n";
	completo();
	director.BuildProductoCompleto();
	p = builder->GetProducto();
	p->ListaComp();
	delete p;
	
	
	int n, n2;
	std::cout << "Productos personalizados:\n";
	std::cout<<"Cuantas piezas desea elegir? ";cin>>n2;
	
	for(int i=0;i<n2;i++){
		menu();cin>>n;
		cin.ignore();
		switch(n){
		case 1:
			builder->asientos();
			break;
		case 2:
			builder->llantas();
			break;
		case 3:
			builder->puertas();
			break;
		case 4:
			builder->timon();
			break;
			
		case 5:
			builder->vidrios();
			break;
		case 6:
			builder->motor();
			break;
		case 7:
			builder->espejos();
			break;
		}
	}

	p = builder->GetProducto();
	p->ListaComp();
	delete p;
	delete builder;
}

int main() {
	Director* director = new Director();
	ClienteCode(*director);
	delete director;
	return 0;
}
