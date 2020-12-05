#include "cutie.hpp"

class Piesa: public Cutie
{
    protected:
        int pret;
    public:
        Piesa ();
        Piesa (int);
        double calcul_pret ();
        void print ();
        void read ();
        friend istream& operator >> (istream& in, Piesa &obj);
        friend ostream& operator << (ostream& out, Piesa &obj);
};

//istream& operator >> (istream& in, Piesa& obj);