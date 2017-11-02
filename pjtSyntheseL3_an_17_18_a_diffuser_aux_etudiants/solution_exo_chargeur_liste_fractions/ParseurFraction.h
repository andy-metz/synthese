#pragma once
#include"Fraction.h"


/**
classe de base de toutes les classes sachant parser (traduire) une cha�ne de caract�res en Fraction


*/
class ParseurFraction
{
public:
/**
transforme texte en un objet Fraction

Convention : en cas d'�chec (format non reconnu) retourne NULL

*/
virtual Fraction * parse(const char * texte) const = 0;
};

