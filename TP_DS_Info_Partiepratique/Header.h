#include <vector>
#include <map>
#include <string>
using namespace std;

class Exploitation;
class EspeceCultivee;

class TraitementPhytosanitaire
{
public:
	int quantiteAppliquee();

private:
	int id;

};



class EspeceCultivee;
class Exploitation
{
public:
	int getId() const;
	string getNomExploitant() const;
	string getMelExploitant() const;
	void setEspeceCultivee(EspeceCultivee*, int);
	map <Parcelle*, int> qteParcelle();
	map <EspeceCultivee*, int> nbEscpece();

private:
	int id;
	string nomExploitant;
	string melExploitant;

};



class Exploitation;
class Parcelle;

class EspeceCultivee
{
public:
	

private:
	int id;
	string libelle;
	string type;

};



class Parcelle
{
public:
	int getId() const;
	string getDateSemis() const;
	string getDateRecoltePrevue() const;
	int getSurface() const;
	string ajouteUnTraitement();

private:
	int id;
	string dateSemis;
	string dateRecoltePrevue;
	int surface;
	
};



class ProduitPhytosanitaire
{
public:


private:
	int id;
	string libelle;

};



class TraitementSemence
{
public:
	int quantiteAppliquee();

private:
	int dosageTraitementSemence;

};



class TraitementEnChamp
{
public:
	int quantiteAppliquee();

private:


};



class Pulverisation
{
public:


private:
	int id;
	int dosage;
	string datePulverisation;

};