#include "Facture.h"
#include <iomanip>

Facture::Facture() {
}

Facture::~Facture() {
}


void Facture::ajouterArticle(const std::string& nom, float prixUnitaire) {
    ajouterArticle(nom, prixUnitaire, 1, 0);
}


void Facture::ajouterArticle(const std::string& nom, float prixUnitaire, int quantite) {
    ajouterArticle(nom, prixUnitaire, quantite, 0);
}


void Facture::ajouterArticle(const std::string& nom, float prixUnitaire, int quantite, float tauxTVA) {
    Article a;
    a.nom = nom;
    a.prixUnitaire = prixUnitaire;
    a.quantite = quantite;
    a.tauxTVA = tauxTVA;
    articles.push_back(a);
}

void Facture::afficherTotal() const {
    float total = 0.0f;
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "les factures :" << std::endl;

    for (size_t i = 0; i < articles.size(); i++) {
        const Article& a = articles[i];
        float ligne = a.prixUnitaire * a.quantite * (1 + a.tauxTVA / 100);
        total += ligne;
        std::cout << a.nom << " , " << a.quantite << " , " << a.prixUnitaire
                  << " TVA: " << a.tauxTVA << "prix total d'article: "<<ligne  << std::endl;
    }


    std::cout << "TOTAL TTC : " << total  << std::endl;
}
