#include "VisiteurVerbe.h"
#include "Verbe2emeGroupe.h"

/**
repr�sente un verbe du 2eme groupe. Ex : finir, r�unir, grandir, ...
*/

/**
@param infinitif 
ex : infinitif = "finir", "r�unir", "grandir"
lance une Erreur si le verbe n'est pas du 2�me groupe
*/
Verbe2emeGroupe::Verbe2emeGroupe(const string & infinitif):Verbe(infinitif,"ir"){}
	
/**
terminaison du verbe � la 1�re personne du singulier de l'indicatif pr�sent :
toujours  "is" pour les verbes du 2�me groupe
*/
const string Verbe2emeGroupe::terminaison1erePersonneSingulier() const {return "is";}

/**
terminaison du verbe � la 1�re personne du pluriel de l'indicatif pr�sent :
toujours  "issons" pour les verbes du 2�me groupe
*/
const string Verbe2emeGroupe::terminaison1erePersonnePluriel() const {return "issons";}

const string Verbe2emeGroupe::accepte(const VisiteurVerbe * visiteurVerbe) const
{
return visiteurVerbe->visite(this);
}