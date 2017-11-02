#pragma once
#include "ConvertitUneChaineParticuliereEnFraction.h"

class ConvertitToutCoupleEnFraction: public ConvertitUneChaineParticuliereEnFraction
{


public:

	ConvertitToutCoupleEnFraction(ConvertitUneChaineParticuliereEnFraction * suivant);

	//const string toString() const;
	const string toString() const;
protected:

	const Fraction * convertit1(const char * texte) const;

};

