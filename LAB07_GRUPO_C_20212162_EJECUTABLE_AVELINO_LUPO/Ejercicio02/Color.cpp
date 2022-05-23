#include "Color.h"
#include "iostream"

using namespace std;

Color::Color(string _rgb){
    RGB = _rgb;
}
Color::Color(){
    RGB=".";
}
Color::~Color(){}
