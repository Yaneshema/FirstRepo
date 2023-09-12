
#include <iostream>
#include <string>
#include "mission.h"
#include "entreprise.h"

using namespace std;

Mission::Mission() {
	
	this->nbHeure, this->nbPersonne = 0;
	this->descriptMission = "Mission vierge";
	
}

Mission::Mission(int personne, int heure, string description, Entreprise *entreprise) {

	this->nbHeure = heure;
	this->nbPersonne = personne;
	this->descriptMission = description;
	this->entrepriseMission = entreprise;

}

Mission::~Mission() {

	cout << "Mission terminated" << endl;

}

Mission::Mission(const Mission& entre) {

	this->nbHeure = entre.nbHeure;
	this->nbPersonne = entre.nbPersonne;
	this->descriptMission = entre.descriptMission;

}

Mission& Mission::operator = (const Mission& entre) {

	if (this != &entre) {

		this->nbHeure = entre.nbHeure;
		this->nbPersonne = entre.nbPersonne;
		this->descriptMission = entre.descriptMission;

	}

	return *this;

}

void Mission::setNbPersonne(int personne) {

	this->nbPersonne = personne;

}

void Mission::setDescriptMission(string description) {

	this->descriptMission = description;

}

void Mission::setNbHeure(int heure) {

	this->nbHeure = heure;

}

void Mission::setEntrepriseMission(Entreprise* entreprise) {

	this->entrepriseMission = entreprise;

}

int Mission::getNbPersonne() {

	return this->nbPersonne;

}

int Mission::getNbHeure() {

	return this->nbHeure;

}

string Mission::getDescriptMission() {

	return this->descriptMission;

}

Entreprise Mission::getEntrepriseMission() {

	return *this->entrepriseMission;

}