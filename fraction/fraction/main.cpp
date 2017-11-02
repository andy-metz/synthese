#include <iostream>
#include "windows.h"
#include "ChargeListeFraction.h"
#include <fstream>
#include "erreur.h"
#include "fraction.h"

using namespace std;

int main()
{
	const ifstream fichier("essai.txt", ios::in);
	if (!fichier)
		throw Erreur("Probleme fichier");

	vector<Fraction> ChargeListeFraction::charge(fichier);



	system("pause");
}