
#ifndef MISSION_H
#define MISSION_H
#include <iostream>
#include <string>
#include "Entreprise.h"

using namespace std;

class Mission {

private:

	int nbPersonne, nbHeure;
	string descriptMission;
	Entreprise *entrepriseMission;

public:

	Mission();
	Mission(int personne, int heure, string description, Entreprise *entreprise);
	~Mission();
	Mission(const Mission& entre);
	Mission &operator = (const Mission& entre);

	void setNbPersonne(int personne), setDescriptMission(string description), setNbHeure(int heure), setEntrepriseMission(Entreprise* entreprise);
	int getNbPersonne(), getNbHeure();
	string getDescriptMission();
	Entreprise getEntrepriseMission();

};

#endif