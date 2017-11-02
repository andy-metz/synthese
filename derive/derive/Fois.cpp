#include "Fois.h"

Fois::Fois( Expression * operandeGauche,  Expression * operandeDroit):OpBinaire(operandeGauche,operandeDroit){}
Fois::Fois( const Fois & fois):OpBinaire(fois){}

/**
Retourne une copie de l'arbre représentant f
*/
/*virtual*/ Expression * Fois::clone () const
{
return new Fois(*this);
}

/**
retourne le symbole de l'opérateur : '*'
*/
/*virtual*/ char Fois::symbole() const
{
return '*';
}

/**
représente le calcul à effectuer :
retourne x * y
*/
/*virtual*/ double Fois::effectuer(const double & x, const double & y) const
{
return x * y;
}

const string Fois::accepte(const Visiteur * visiteur) const
{
	return visiteur->visite(this);
}