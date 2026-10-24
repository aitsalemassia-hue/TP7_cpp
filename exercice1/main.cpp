#include"Contact.h"


int main(){
	Contact c1("Salma");
	Contact c2("Ahmed","+2126 67 98 09 54");
	Contact c3("Samir","+212 7 78 65 56 43", "samir@gmail.com");


	c1.afficher();
	c2.afficher();
	c3.afficher();


}



