#pragma once

#include "Verbe.h"

/**
repr�sente un verbe du 2eme groupe. Ex : finir, r�unir, grandir, ...
*/

class Verbe2emeGroupe : public Verbe
{
public:
/**
@param infinitif 
ex : infinitif = "finir", "r�unir", "grandir"
lance une Erreur si le verbe n'est pas du 2�me groupe
*/
Verbe2emeGroupe(const string & infinitif);
	
/**
terminaison du verbe � la 1�re personne du singulier de l'indicatif pr�sent :
toujours  "is" pour les verbes du 2�me groupe
*/
const string terminaison1erePersonneSingulier() const;

/**
terminaison du verbe � la 1�re personne du pluriel de l'indicatif pr�sent :
toujours  "issons" pour les verbes du 2�me groupe
*/
const string terminaison1erePersonnePluriel() const;


const string accepte(const VisiteurVerbe * visiteurVerbe) const;
};