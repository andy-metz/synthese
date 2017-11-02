#pragma once
#include <string>
using namespace std;

class VisiteurVerbe;
/**
Représente un verbe de la langue française
*/

class Verbe
{
string radical;	// radical du verbe. Ex : "travaill" pour le verbe "travailler" ou "fin" pour le verbe "finir"

protected:
/**
Utilisé par les classes dérivées 
construit un verbe à partir de son infinitif et de la terminaison de son infinitif.
Exemple : infinitif = "travailler" et terminaisonInfinitif = "er" pour le verbe "travailler".
La terminaison de l'infinitif sert à contrôler que le verbe est bien du bon groupe
lance une Erreur si l'ininitif est incorrect
*/
Verbe( const string & infinitif, const string & terminaisonInfinitif);


public:

const string getRadical() const {return radical;}

/**
conjugue le verbe à la 1ère personne du singulier de l'indicatif présent

Ex : retourne "je travaille" pour le verbe "travailler" ou "je finis" pour le verbe "finir"
*/


const string conjugue1erePersonneSingulier() const;

/**
terminaison du verbe à la 1ère personne du singulier de l'indicatif présent :
Ex : "e" pour le verbe "travailler" ou "is" pour le verbe "finir"
*/
virtual const string terminaison1erePersonneSingulier() const = 0;

/**
conjugue le verbe à la 1ère personne du pluriel de l'indicatif présent
Ex : retourne "nous travaillons" pour le verbe "travailler" ou "nous finissons" pour le verbe "finir"
*/
const string conjugue1erePersonnePluriel() const;

/**
terminaison du verbe à la 1ère personne du pluriel de l'indicatif présent :
Ex : "ons" pour le verbe "travailler" ou "issons" pour le verbe "finir"
*/
virtual const string terminaison1erePersonnePluriel() const = 0;

virtual const string accepte(const VisiteurVerbe * visiteurVerbe) const = 0;

};

