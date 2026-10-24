

#include "Facture.h"

int main() {
    Facture f;

    f.ajouterArticle("Stylo", 1.5);
    f.ajouterArticle("Cahier", 12, 3);
    f.ajouterArticle("pc portable", 70000, 2, 20);
    f.afficherTotal();
    return 0;
}





