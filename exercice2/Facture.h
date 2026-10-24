#ifndef EXERCICE2_FACTURE_H_
#define EXERCICE2_FACTURE_H_

#include <iostream>
#include <string>
#include <vector>

struct Article {
    std::string nom;
    float prixUnitaire;
    int quantite;
    float tauxTVA;
};

class Facture {
private:
    std::vector<Article> articles;

public:
    void ajouterArticle(const std::string& nom, float prixUnitaire);
    void ajouterArticle(const std::string& nom, float prixUnitaire, int quantite);
    void ajouterArticle(const std::string& nom, float prixUnitaire, int quantite, float tauxTVA);
    void afficherTotal() const;

    Facture();
    virtual ~Facture();
};

#endif /* EXERCICE2_FACTURE_H_ */
