#pragma once

#include "ParseurFraction.h"

/**
parseur de fractions utilisant une chaîne de responsabilité

*/
class ParseurFractionCOR : public ParseurFraction
{
ParseurFractionCOR * suivant;
public:
/**
enchaîne ce maillon à suivant en le plaçant en tête
*/
ParseurFractionCOR(ParseurFractionCOR * suivant);

/**
transforme texte en un objet Fraction

Convention : en cas d'échec (format non reconnu) retourne NULL

algo utilisé : parcourt la chaîne

*/
Fraction * parse(const char * texte) const;


/**
savoir-faire d'un expert en particulier. Défini par les classes dérivées de ParseurFractionCOR
Convention : en cas d'échec (format non reconnu) retourne NULL
*/
virtual Fraction * parse1(const char * texte) const = 0;
};

