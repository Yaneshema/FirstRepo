
#include <iostream>
#include "mission.h"
#include "entreprise.h"

int main() {

	Entreprise *NordVPN = new Entreprise("NordVPN", "Partout");
	cout << "NordVPN created" << endl;

	Mission* Sponso = new Mission(42, 720, "Sponsoriser un max d'influencuers", NordVPN);
	cout << "Mission Sponso created" << endl;

	cout << "" << endl;

	cout << "Description : " << Sponso->getDescriptMission() << endl;
	cout << "Number of people : " << Sponso->getNbPersonne() << endl;
	cout << "Estimated Time : " << Sponso->getNbHeure() << " hours" << endl;

}