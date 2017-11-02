#include <iostream>
using namespace std;
#include "ChargeurListeFraction.h"


/**
Analyse le texte ligne par ligne à l'aide du parseur et construit et retourne un vector contenant toutes les fractions reconnues par le parseur


On suppose que texte est déjà ouvert en lecture au format texte
 

 texte est supposé contenir une fraction par ligne
 Par exemple, texte peut contenir les 8 lignes suivantes  :

 (  3,  5  )
  5  /  4
 18   %
-11%
blabla
-3/2
(-17,13)
5%

La méthode analyse texte ligne par ligne.

Pour chaque format reconnu par le parseur, la méthode construit une nouvelle Fraction et la place dans le vector résultat.
Les lignes contenant un format inconnu sont ignorées

*/
#define LONGUEUR_LIGNE 100
/*static*/ const vector<Fraction> ChargeurListeFraction::charge(FILE * texte, const ParseurFraction * parseur)
{
vector<Fraction> resultat;

if (!texte) return resultat;	// retourne une liste vide car le fichier n'est pas ouvert

char ligne [LONGUEUR_LIGNE];

while(!feof(texte))
	{
																					//char * fgets ( char * str, int num, FILE * stream );
	char * OK = fgets (ligne, LONGUEUR_LIGNE, texte);							//cerr << "ligne lue = " << ligne << endl; char ch; cin >> ch;
	if (!OK) return resultat;
																				//fscanf(texte,"%99s",ligne);								cerr << "ligne lue = " << ligne << endl; char ch; cin >> ch;
	Fraction * fraction = parseur->parse(ligne);
	if (fraction) resultat.push_back(*fraction);
	}
return resultat;
}