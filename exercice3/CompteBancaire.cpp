#include <iostream>
#include "CompteBancaire.h"

#include <iostream>
CompteBancaire::CompteBancaire(std::string numero):numero(numero) {

}

CompteBancaire::CompteBancaire(std::string numero,double soldeInitial):numero(numero){
    solde = soldeInitial;
}

void CompteBancaire::afficherSolde() {
	std::cout << "le numero de compte  est : " << numero << std::endl;
    std::cout << " le solde est : " << solde << std::endl;
}

void CompteBancaire::retrait(double montant) {
    if (montant <= 0) {
        std::cout << "Montant invalide" << std::endl;
    } else if (montant > 500) {
        std::cout << "Montant superieur a 500 : code de securite requis" << std::endl;
    } else if (montant > solde) {
        std::cout << "Solde insuffisant" << std::endl;
    } else {
        solde -= montant;
    }
}

void CompteBancaire::retrait(double montant, int code) {
    if (code != 1234) {
        std::cout << "Code de securite incorrect" << std::endl;
    } else if (montant <= 0) {
        std::cout << "Montant invalide" << std::endl;
    } else if (montant > solde) {
        std::cout << "Solde insuffisant" << std::endl;
    } else {
        solde -= montant;
    }
}
