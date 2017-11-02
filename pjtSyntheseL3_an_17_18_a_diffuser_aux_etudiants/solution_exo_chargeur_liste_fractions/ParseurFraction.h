#pragma once
#include"Fraction.h"


/**
classe de base de toutes les classes sachant parser (traduire) une chaîne de caractères en Fraction


*/
class ParseurFraction
{
public:
/**
transforme texte en un objet Fraction

Convention : en cas d'échec (format non reconnu) retourne NULL

*/
virtual Fraction * parse(const char * texte) const = 0;
};

