#include "cutie_piese_galbene.hpp"

Cutie_piese_galbene::Cutie_piese_galbene (): dim(0), v(NULL){}

Cutie_piese_galbene::Cutie_piese_galbene (int d, Piesa_galbena *piese): dim(d), v(piese){}

Cutie_piese_galbene:: Cutie_piese_galbene (Cutie_piese_galbene&obj)
{
    this->v = NULL;
    *this = obj;
}
Cutie_piese_galbene& Cutie_piese_galbene::operator = (Cutie_piese_galbene &obj)
{
    if (v != NULL)
        delete []v;
    v = new Piesa_galbena [dim];
    v = obj.v;
    dim = obj.dim;
    
    return *this;
}

double Cutie_piese_galbene::calcul_pret()
{
    double p = 0;
    for (int  i = 0; i < dim; i++)
        p = p + v[i].calcul_pret ();
    
    return (double)p;
}

void Cutie_piese_galbene::read ()
{
    cin >> (*this);
}

void Cutie_piese_galbene::print ()
{
    cout << (*this);
}

istream& operator >> (istream& in, Cutie_piese_galbene &obj)
{
    if (obj.v != NULL)
        delete []obj.v;
    cout << "Cutia: "<<endl;
    cout << "Ce dimensiune are cutia? " << endl;
    in >> obj.dim;
    obj.v = new Piesa_galbena [obj.dim];
    for (int i = 0; i < obj.dim; i++)
        in >> obj.v[i];
    cout <<endl;

    return in;
}

ostream& operator << (ostream& out, Cutie_piese_galbene &obj)
{
    out << "Cutia: "<<endl;
    out << "Dimensiunea cutiei este: " << obj.dim << endl;
    for (int i = 0; i < obj.dim; i++)
        out << obj.v[i];
    out << endl;
    return out;
}


Cutie_piese_galbene::~Cutie_piese_galbene ()
{
    delete []v;
}