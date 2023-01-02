#include <iostream>
#include "class.h"
using namespace std;

int main()
{
 employee e;
 e.afficher();
 e.saisir();
 e.afficher();
 cout<<"le salaire est  :"<<e.salaire()<<endl;

    return 0;
}
