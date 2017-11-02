#pragma once

#include "ParseurFraction.h"

/**
parseur de fractions utilisant une cha�ne de responsabilit�

*/
class ParseurFractionCOR : public ParseurFraction
{
ParseurFractionCOR * suivant;
public:
/**
encha�ne ce maillon � suivant en le pla�ant en t�te
*/
ParseurFractionCOR(ParseurFractionCOR * suivant);

/**
transforme texte en un objet Fraction

Convention : en cas d'�chec (format non reconnu) retourne NULL

algo utilis� : parcourt la cha�ne

*/
Fraction * parse(const char * texte) const;


/**
savoir-faire d'un expert en particulier. D�fini par les classes d�riv�es de ParseurFractionCOR
Convention : en cas d'�chec (format non reconnu) retourne NULL
*/
virtual Fraction * parse1(const char * texte) const = 0;
};

