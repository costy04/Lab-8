#include "piesa.hpp"

Piesa::Piesa ():pret(0){}

Piesa::Piesa (int p): pret(p){}

double Piesa::calcul_pret ()
{
    return (double)pret;
}

void Piesa::print ()
{
    cout << (*this);
}

void Piesa::read ()
{
    cin >> (*this);
}

istream& operator >> (istream& in, Piesa &obj) {
    cout << "Piesa: " <<endl;
    cout << "Pretul piesei este: ";
    in >> obj.pret;
    cout << endl;

    return in;
}

ostream& operator << (ostream& out, Piesa &obj)
{
    out << "Piesa: " <<endl;
    out << "Pretul piesei este: " << obj.pret;
    out << endl;

    return out;
}

/*istream& operator >> (istream& in, Piesa &obj)
{
    cout << "Pretul este: ";
    in >> obj.pret;
    
    return in;
}*/