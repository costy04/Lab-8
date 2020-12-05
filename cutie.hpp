#ifndef CUTIE_H
#define CUTIE_H
#include <iostream>
#include <cstring>
#include<typeinfo>
using namespace std;

class Cutie 
{
    public:
        virtual double calcul_pret () = 0;
        virtual ~Cutie () = 0;
        virtual void print () = 0;
        virtual void read () = 0;
};

#endif