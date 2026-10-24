#include <iostream>
#include "CompteBancaire.h"
#include<iostream>

int main() {
    CompteBancaire c1("E143-567",9000);
    CompteBancaire c2("R87-982");
    CompteBancaire c3("HT-67890",7669);

    std::cout << "affichage des soldes" <<  std::endl;
    c1.afficherSolde();
    c2.afficherSolde();
    c3.afficherSolde();

    c1.retrait(200);
    c3.retrait(600, 1234);

    std::cout << "affichage des soldes apres retrait" <<  std::endl;
    c1.afficherSolde();
    c3.afficherSolde();

    return 0;
}
