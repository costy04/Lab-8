#include "cutie_piese_galbene.hpp"

void sort (Cutie **v, const int dim);

int main ()
{
    Cutie **v = new Cutie* [3];
    v[0] = new Piesa ();
    v[1] = new Piesa_galbena ();
    v[2] = new Cutie_piese_galbene ();

    for (int i = 0; i < 3; i++)
        (*v[i]).read ();
        
    sort (v,3);
    
    for (int i = 0; i < 3; i++)
        (*v[i]).print ();
    
    //Dynamic_cast:
    Cutie *base;
    Piesa *d = new Piesa ();
    Cutie_piese_galbene *cp = new Cutie_piese_galbene ();
    base = d;
    if (d == dynamic_cast <Piesa*>(base))
        cout << "Obiect derivat\n";
    else    
        cout << "dynamic_cast conversion failed \n";

    base = cp;
    if (cp == dynamic_cast <Cutie_piese_galbene*> (base))
        cout << "Obiect derivat\n";
    else    
        cout << "dynamic_cast conversion failed \n";
    

    //TypeId:
    cout << typeid (base).name ();
    cout << typeid (d).name ();
    
}

void sort (Cutie **v, const int dim)
{
    Cutie *aux;
    for (int i = 0; i < dim-1; i++)
        for (int j = i+1; j < dim; j++)
            if ((*v[i]).calcul_pret () > (*v[j]).calcul_pret())
            {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }

}