#include <iostream>
#include "ConvertitUneChaineParticuliereEnFraction.h"
#include "ConvertitToutCoupleEnFraction.h"
#include "ConvertitPourcentageEnFraction.h"
#include "ChargeListeFraction.h"
#include "erreur.h"
#include <fstream>



static vector<Fraction> charge(ifstream & fichier)
{
	if (!fichier)
		throw Erreur("Probleme fichier");

	vector<Fraction> res;

	const Fraction * resultat;
	ConvertitUneChaineParticuliereEnFraction * expert;



	expert = new ConvertitToutCoupleEnFraction(NULL);
	expert = new ConvertitPourcentageEnFraction(expert);


	char buf[1024];
	while (!fichier.eof())
	{
		resultat = expert->convertit(buf);
		if (resultat)
			res.push_back(resultat);
	}

	//resultat = expert->convertit("(3,2)");




	return vector<Fraction>();
}