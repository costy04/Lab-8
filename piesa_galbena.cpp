#include "piesa_galbena.hpp"

Piesa_galbena::Piesa_galbena (): Piesa (), multiplicator (0){}

Piesa_galbena::Piesa_galbena (int p, int m): Piesa(p), multiplicator (m){}

double Piesa_galbena::calcul_pret ()
{
    return (double)pret*multiplicator;
}

void Piesa_galbena::read ()
{
    cin >> (*this);
}

void Piesa_galbena::print ()
{
    cout << (*this);
}

istream& operator >> (istream& in, Piesa_galbena &obj)
{
    cout << "Piesa galbena: "<<endl;
    in >> (Piesa&)obj;
    cout << "Multiplicatorul este: ";
    in >> obj.multiplicator;
    cout << endl;

    return in;
}

ostream& operator << (ostream& out, Piesa_galbena &obj)
{
    out << "Piesa galbena: "<<endl;
    out << "Pretul piesei galbene este: " << obj.pret << endl;
    out << "Multiplicatorul este: " << obj.multiplicator << endl;
    out << endl;
    return out;
}
/*istream& operator >> (istream& in, Piesa_galbena &obj)
{
    in >> (Piesa_galbena&)obj;
    cout << "Multiplicatorul este: "<<endl;
    in >> obj.multiplicator;

    return in;
}*/