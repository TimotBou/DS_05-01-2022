#include <string>
#include <vector>
#include "Header.h"
using namespace std;

Parcelle::Parcelle(int id, string dateSemis, string dateRecoltePrevue, int surface) {
	this->id = id;
	this->dateSemis = dateSemis;
	this->dateRecoltePrevue = dateRecoltePrevue;
	this->surface = surface;
}

int Parcelle::getid() const {

	return this->id;

}
string Parcelle::getDateSemis() const {
	return this->dateSemis;
}

string Parcelle::getDateRecoltePrevue() const {
	return this->dateRecoltePrevue;
}

int Parcelle::getSurface() const {
	return this->surface
}

string Parcelle::ajouteUnTraitement() {

}