#include<iostream>
#include<string>


class date {
int jour, mois ,annee;
friend class employee;
};
class employee {
    public:
int code;
string name;
date d;
int nombreh;
double taux;
employee(){
code=1234;
name="doha";
nombreh=122;
taux=5;
}

void saisir();

void afficher();
double salaire();


};class vendeur:public employee
{
 double pourcentage, montant;
    public :
        vendeur();
        vendeur(int, string, date, int, double, double, double);
        vendeur(vendeur&);
        double vente();
};


