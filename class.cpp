#include "class.h"
#include<iostream>
    date::date{
    date.annee=2000;
    date.jour=1;
    date.mois=1;
    }
employee::employee(){
code=0;
name="";
nombreh=0;
taux=0;

}
vendeur::vendeur(int code, string name, date d, int nbrh, double taux,double mntv, double pct ):employee(int code, string name, date d, int nbrh, double taux){
    this.pourcentage=pct;
    this.montant=mntv;
}
void employee::saisir()
{   cout<<"entrer le code"<<endl;
    cin>>code;
     cout<<"entrer le nom"<<endl;
    cin>>name;
     cout<<"entrer le jour"<<endl;
    cin>>d.jour;
     cout<<"entrer le mois"<<endl;
    cin>>d.mois;
     cout<<"entrer lannee"<<endl;
    cin>>d.annee;
     cout<<"entrer le nombreh"<<endl;
    cin>>nombreh;
     cout<<"entrer le taux"<<endl;
    cin>>taux;
}
void employee::afficher(){
cout<<"le code est  :"<<code<<endl;

     cout<<"le nom  est  :"<<name<<endl;
     cout<<"le jour est  :"<<d.jour<<endl;

     cout<<"le mois est  :"<<d.mois<<endl;

     cout<<"lannee est  :"<<d.annee<<endl;

     cout<<"le nombreh est  :"<<nombreh<<endl;

     cout<<"le taux est  :"<<taux<<endl;

}
double employee:: salaire(float n){
return taux*n;}
