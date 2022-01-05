#include <iostream>
#include <iterator>
#include <vector>
#include "Header.h"
using namespace std;

int main()
{
	int valeur1, valeur2;
	map<Parcelle*, int>::iterator itr;

	//Création des Exploitation
	Exploitation* e1 = new Exploitation(10, "Animations");
	Exploitation* e2 = new Exploitation(30, "Eveil");
	Exploitation* e3 = new Exploitation(20, "Societe");

	//Création des Parcelles
	Parcelle* p1 = new Parcelle(10, "5 - 9 ans", 5, 9);


	//Attribution des espèces
	EspeceCultivee* esp1 = new EspeceCultivee(100, "Robot", c1, tr1);


	//Création des Traitements Phytosanitaires
	TraitementPhytosanitaire* trph1 = new TraitementPhytosanitaire("2020", { {j1,100}, {j2,250}, {j3,100} });


	//Création desProduits Phytosanitaires
	ProduitPhytosanitaire* prph1 = new ProduitPhytosanitaire("2020", { {j1,100}, {j2,250}, {j3,100} });


	//Ajout Traitement dans Parcelles

	c1->ajouterTraitement(j1);
	c1->ajouterTraitement(j2);
	c2->ajouterTraitement(j3);

	map<Parcelle*, int> JListe;


	JListe = p1->ajouteUnTraitement();


	for (auto itr = JListe.begin(); itr != JListe.end(); itr++) {
		cout << itr->first->getId() << "\t" << itr->second << endl;
	}


}
