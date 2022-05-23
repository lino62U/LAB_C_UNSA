#pragma once
#include "string"

using namespace std;

class Color{
    protected:
        string RGB;
    public:
        Color();
        Color(string);
        ~Color();
};