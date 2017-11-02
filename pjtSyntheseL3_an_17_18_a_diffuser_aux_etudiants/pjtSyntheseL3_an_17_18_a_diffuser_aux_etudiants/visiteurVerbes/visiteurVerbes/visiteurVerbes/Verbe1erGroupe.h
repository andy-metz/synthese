#pragma once

#include "Verbe.h"
/**
repr�sente un verbe du 1er groupe. Ex : travailler, danser, chanter, ...


*/
class Verbe1erGroupe : public Verbe
{
public:
/**
@param infinitif 
ex : infinitif = "travailler", "danser", "chanter"
lance une Erreur si le verbe n'est pas du 1er groupe
*/
Verbe1erGroupe(const string & infinitif);
	
/**
terminaison du verbe � la 1�re personne du singulier de l'indicatif pr�sent :
toujours  "e" pour les verbes du 1er groupe
*/
const string terminaison1erePersonneSingulier() const;

/**
terminaison du verbe � la 1�re personne du pluriel de l'indicatif pr�sent :
toujours  "ons" pour les verbes du 1er groupe
*/
const string terminaison1erePersonnePluriel() const;

const string accepte(const VisiteurVerbe * visiteurVerbe) const;
};

