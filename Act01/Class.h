
#include <iostream>
using namespace std;

class Conducteur {

private:

	string nom, prenom;
	int anneeNaissance;
	Moto mesMotos[10];

public:

	string getNom(), getPrenom(), getAnneNaissance();
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