#include "VisiteurVerbe.h"
#include "Verbe1erGroupe.h"


/**
@param infinitif 
ex : infinitif = "travailler", "danser", "chanter"
lance une Erreur si le verbe n'est pas du 1er groupe
*/
Verbe1erGroupe::Verbe1erGroupe(const string & infinitif):Verbe(infinitif,"er"){}
	
/**
terminaison du verbe � la 1�re personne du singulier de l'indicatif pr�sent :
toujours  "e" pour les verbes du 1er groupe
*/
const string Verbe1erGroupe::terminaison1erePersonneSingulier() const {return "e";}

/**
terminaison du verbe � la 1�re personne du pluriel de l'indicatif pr�sent :
toujours  "ons" pour les verbes du 1er groupe
*/
const string Verbe1erGroupe::terminaison1erePersonnePluriel() const {return "ons";}


const string Verbe1erGroupe::accepte(const VisiteurVerbe * visiteurVerbe) const
{
return visiteurVerbe->visite(this);
}