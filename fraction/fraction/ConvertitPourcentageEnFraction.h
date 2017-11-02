#pragma once
#include "ConvertitUneChaineParticuliereEnFraction.h"

class ConvertitPourcentageEnFraction :
	public ConvertitUneChaineParticuliereEnFraction
{
public:

	ConvertitPourcentageEnFraction(ConvertitUneChaineParticuliereEnFraction * suivant);

	const string ConvertitPourcentageEnFraction::toString() const;

protected:

	const Fraction * convertit1(const char * texte) const;
};

