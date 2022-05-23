#pragma once

#include"iostream"
#include "string"
using namespace std;

class Material{
    protected:
        string material;
    public:
        Material();
        Material(string);
        ~Material();
};