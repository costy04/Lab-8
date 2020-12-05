#include "piesa_galbena.hpp"

class Cutie_piese_galbene :public Cutie
{
        int dim;
        Piesa_galbena* v; //pretul pentru o cutie_piese_galbene este suma pieselor din vector
    public:
        Cutie_piese_galbene ();
        Cutie_piese_galbene (int d, Piesa_galbena *piese);
        Cutie_piese_galbene (Cutie_piese_galbene &obj);
        Cutie_piese_galbene& operator = (Cutie_piese_galbene &obj);
        ~Cutie_piese_galbene ();
        double calcul_pret();
        void read ();
        void print ();
        friend istream& operator >> (istream& in, Cutie_piese_galbene &obj);
        friend ostream& operator << (ostream& out, Cutie_piese_galbene &obj);
        //void read (istream &in);
        //friend istream& operator >> (istream& in, Cutie_piese_galbene &obj);
};

//istream& operator >> (istream& in, Piesa_galbena& obj);
