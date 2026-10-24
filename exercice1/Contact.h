

#ifndef CONTACT_H_
#define CONTACT_H_
#include<iostream>
#include<string>
class Contact {
private:
	std::string nom;
	std::string numerotel;
	std::string email;
public:
	Contact(std::string nom);
	Contact(std::string nom,std::string numerotel);
	Contact(std::string nom,std::string numerotel, std::string email);
	void afficher();
	virtual ~Contact();
};

#endif /* CONTACT_H_ */
