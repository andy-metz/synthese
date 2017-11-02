#include "Erreur.h"
#include "Verbe.h"


/**
Représente un verbe de la langue française
*/


/**
Utilisé par les classes dérivées 
construit un verbe à partir de son infinitif et de la terminaison de son infinitif.
Exemple : infinitif = "travailler" et terminaisonInfinitif = "er" pour le verbe "travailler".
La terminaison de l'infinitif sert à contrôler que le verbe est bien du bon groupe
lance une Erreur si l'ininitif est incorrect
*/
Verbe::Verbe( const string & infinitif, const string & terminaisonInfinitif)
{
int d = infinitif.length() - terminaisonInfinitif.length();
if (d<0) throw Erreur("l'infinif du verbe est incorrect");
if (strcmp(infinitif.c_str()+d,terminaisonInfinitif.c_str()) ) throw Erreur("le verbe n'est pas du bon groupe");

radical = infinitif.substr(0,d);

}

/**
conjugue le verbe à la 1ère personne du singulier de l'indicatif présent

Ex : retourne "je travaille" pour le verbe "travailler" ou "je finis" pour le verbe "finir"
*/
const string Verbe::conjugue1erePersonneSingulier() const
{
return "je " + radical + terminaison1erePersonneSingulier(); // il reste le cas des verbes comme "j'aime" à résoudre
}



/**
conjugue le verbe à la 1ère personne du pluriel de l'indicatif présent
Ex : retourne "nous travaillons" pour le verbe "travailler" ou "nous finissons" pour le verbe "finir"
*/
const string Verbe::conjugue1erePersonnePluriel() const
{
return "nous " + radical + terminaison1erePersonnePluriel();
}



