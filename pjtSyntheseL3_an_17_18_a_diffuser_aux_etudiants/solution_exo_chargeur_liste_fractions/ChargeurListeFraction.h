#pragma once

#include <stdio.h>
#include <vector>

using namespace std;

#include "Fraction.h"
#include "ParseurFraction.h"

class ChargeurListeFraction
{
public:
/**
Analyse le texte ligne par ligne � l'aide du parseur et construit et retourne un vector contenant toutes les fractions reconnues par le parseur


On suppose que texte est d�j� ouvert en lecture au format texte
 

 texte est suppos� contenir une fraction par ligne
 Par exemple, texte peut contenir les 8 lignes suivantes  :

 (  3,  5  )
  5  /  4
 18   %
-11%
blabla
-3/2
(-17,13)
5%

La m�thode analyse texte ligne par ligne.

Pour chaque format reconnu par le parseur, la m�thode construit une nouvelle Fraction et la place dans le vector r�sultat.
Les lignes contenant un format inconnu sont ignor�es

*/

static const vector<Fraction> charge(FILE * texte, const ParseurFraction * parseur);
};

