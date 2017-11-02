#include "VisiteurVerbe.h"
#include "Verbe2emeGroupe.h"

/**
représente un verbe du 2eme groupe. Ex : finir, réunir, grandir, ...
*/

/**
@param infinitif 
ex : infinitif = "finir", "réunir", "grandir"
lance une Erreur si le verbe n'est pas du 2ème groupe
*/
Verbe2emeGroupe::Verbe2emeGroupe(const string & infinitif):Verbe(infinitif,"ir"){}
	
/**
terminaison du verbe à la 1ère personne du singulier de l'indicatif présent :
toujours  "is" pour les verbes du 2ème groupe
*/
const string Verbe2emeGroupe::terminaison1erePersonneSingulier() const {return "is";}

/**
terminaison du verbe à la 1ère personne du pluriel de l'indicatif présent :
toujours  "issons" pour les verbes du 2ème groupe
*/
const string Verbe2emeGroupe::terminaison1erePersonnePluriel() const {return "issons";}

const string Verbe2emeGroupe::accepte(const VisiteurVerbe * visiteurVerbe) const
{
return visiteurVerbe->visite(this);
}