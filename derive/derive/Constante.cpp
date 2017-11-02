#include <sstream>
using namespace std;

#include "Constante.h"
#include "Visiteur.h"


/**
cr�e la fonction constante : x |---> valeur
*/
Constante::Constante( const double & valeur):valeur(valeur){}

/**
Retourne une copie de l'arbre repr�sentant f
*/
/*virtual*/ Expression * Constante::clone () const
{
return new Constante(valeur);
}


///**
//Conversion de f en string
//*/
//virtual const string toString() const = 0;

/*virtual*/ Constante::operator string() const
{
ostringstream oss;
oss << valeur;

return oss.str();

}

/**
Calcule la valeur de f(x)
*/
/*virtual*/ double Constante::evaluer(const double & x) const
{
return valeur;
}

const Constante Constante::accepte(const Visiteur * visiteur) const
{
	return visiteur->visite(this);
}