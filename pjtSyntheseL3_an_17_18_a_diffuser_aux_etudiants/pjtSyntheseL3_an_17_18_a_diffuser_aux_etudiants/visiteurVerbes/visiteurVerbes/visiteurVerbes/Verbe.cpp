#include "Erreur.h"
#include "Verbe.h"


/**
Repr�sente un verbe de la langue fran�aise
*/


/**
Utilis� par les classes d�riv�es 
construit un verbe � partir de son infinitif et de la terminaison de son infinitif.
Exemple : infinitif = "travailler" et terminaisonInfinitif = "er" pour le verbe "travailler".
La terminaison de l'infinitif sert � contr�ler que le verbe est bien du bon groupe
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
conjugue le verbe � la 1�re personne du singulier de l'indicatif pr�sent

Ex : retourne "je travaille" pour le verbe "travailler" ou "je finis" pour le verbe "finir"
*/
const string Verbe::conjugue1erePersonneSingulier() const
{
return "je " + radical + terminaison1erePersonneSingulier(); // il reste le cas des verbes comme "j'aime" � r�soudre
}



/**
conjugue le verbe � la 1�re personne du pluriel de l'indicatif pr�sent
Ex : retourne "nous travaillons" pour le verbe "travailler" ou "nous finissons" pour le verbe "finir"
*/
const string Verbe::conjugue1erePersonnePluriel() const
{
return "nous " + radical + terminaison1erePersonnePluriel();
}



