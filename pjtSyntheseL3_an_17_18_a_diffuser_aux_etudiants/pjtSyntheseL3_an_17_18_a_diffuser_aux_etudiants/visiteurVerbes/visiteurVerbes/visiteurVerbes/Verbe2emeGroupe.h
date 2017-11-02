#pragma once

#include "Verbe.h"

/**
représente un verbe du 2eme groupe. Ex : finir, réunir, grandir, ...
*/

class Verbe2emeGroupe : public Verbe
{
public:
/**
@param infinitif 
ex : infinitif = "finir", "réunir", "grandir"
lance une Erreur si le verbe n'est pas du 2ème groupe
*/
Verbe2emeGroupe(const string & infinitif);
	
/**
terminaison du verbe à la 1ère personne du singulier de l'indicatif présent :
toujours  "is" pour les verbes du 2ème groupe
*/
const string terminaison1erePersonneSingulier() const;

/**
terminaison du verbe à la 1ère personne du pluriel de l'indicatif présent :
toujours  "issons" pour les verbes du 2ème groupe
*/
const string terminaison1erePersonnePluriel() const;


const string accepte(const VisiteurVerbe * visiteurVerbe) const;
};