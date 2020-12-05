#include "piesa.hpp"

class Piesa_galbena: public Piesa
{
        int multiplicator; // pretul final pentru piesa galbena este pret*multiplicator
    public:
        Piesa_galbena ();
        Piesa_galbena (int, int);
        double calcul_pret ();
        void print ();
        void read ();
        friend istream& operator >> (istream& in, Piesa_galbena &obj);
        friend ostream& operator << (ostream& out, Piesa_galbena &obj);

};

//istream& operator >> (istream& in, Piesa_galbena& obj);