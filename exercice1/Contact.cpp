
#include "Contact.h"

Contact::Contact(std::string nom):nom(nom) {
}
Contact::Contact(std::string nom,std::string numerotel):nom(nom),numerotel(numerotel) {
}

Contact::Contact(std::string nom,std::string numerotel,
		std::string email):nom(nom),numerotel(numerotel),email(email) {
}

void Contact::afficher(){
	std::cout<< "le nom : "<<nom <<std::endl;

	if(!numerotel.empty())std::cout<< "le   numéro de téléphone : "<<numerotel <<std::endl;
	if (!email.empty())std::cout<< "le nom adresse email : "<<email <<std::endl;
}
Contact::~Contact() {
	// TODO Auto-generated destructor stub
}

