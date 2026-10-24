#ifndef COMPTEBANCAIRE_H
#define COMPTEBANCAIRE_H
#include<iostream>
class CompteBancaire {
private:
    double solde;
    std::string numero;

public:

    CompteBancaire(std::string numero);
    CompteBancaire(std::string numero,double soldeInitial);

    void afficherSolde();


    void retrait(double montant);
    void retrait(double montant, int code);
};

#endif
