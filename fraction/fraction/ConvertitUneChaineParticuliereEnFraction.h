#pragma once
#include <string>
#include "ConvertitTouteChaineEnFraction.h"

using namespace std;

class ConvertitUneChaineParticuliereEnFraction: public ConvertitTouteChaineEnFraction
{
public:
	ConvertitUneChaineParticuliereEnFraction * suivant;

protected:
	ConvertitUneChaineParticuliereEnFraction(ConvertitUneChaineParticuliereEnFraction * suivant);

public:
	// Constructeur par d�faut
	ConvertitUneChaineParticuliereEnFraction();


	/**
	* traduction utilisant la cha�ne de responsabilit�. algo r�cursif
	*
	* */
	const Fraction * convertit(const char * texte) const;
	virtual const string toString() const = 0;

	/**
	* savoir-faire de l'un des traducteurs de la cha�ne
	* */
protected:
	virtual const Fraction * convertit1(const char * texte) const = 0;

};

