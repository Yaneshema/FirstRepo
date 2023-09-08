
#include <iostream>, 'Class.h'
using namespace std;

class Conducteur {

private:

	string nom, prenom;
	int anneeNaissance;
	Moto mesMotos[10];

public:

	string getNom() {

		return this->nom;

	}
	
	string getPrenom() {

		return this->prenom;

	}
		
	string getAnneNaissance() {

		return this->anneeNaissance;

	}
	void afficheMotos(), addMoto(Moto newMoto), rmMoto(Moto rmMoto);

};

class Moto {

private:

	int poids;
	Moteur moteur;

public:

	int getPoid();
	Moteur getMoteur();
	void setPoids(int poids), setMoteur(Moteur moteur);

};

class Moteur {

private:

	int puissance;

public:

	int getPuissance();
	void setPuissance(int puissance);

};

class Electrique {

private:

	float tensionMax;

public:

	float getTensionMax();
	void setTensionMAx(float tensionMax);

};

class Thermique {

private:

	float cylindree;

public:

	float getCylindre();
	void setCylindre(float newCylindree);

};