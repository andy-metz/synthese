#pragma once

#include "Expression.h"

/**
Représente une fonction mathématique de la forme x |---> h(x) = f(x) op g(x)	

où op est un opérateur binaire comme + ou * et x |---> f(x) et x |--->g(x) sont deux fonctions mathématiques

En mémoire, h est représenté par un arbre binaire où :

le fils gauche est la fonction x |--->f(x)
le fils  droit est la fonction x |--->g(x)

Cette classe permet de factoriser ce qui est commun aux classes Plus et Fois qui héritent de OpBinaire et qui représentent respectivement les opérateurs + et x
*/
class OpBinaire : public Expression
{
Expression * gauche, * droit; // fils gauche et fils droit
public:
OpBinaire( Expression * operandeGauche,  Expression * operandeDroit);
OpBinaire( const OpBinaire & opBinaire);
~OpBinaire(void);

operator string() const;

/**
retourne le symbole de l'opérateur : '+', '*', ...
défini par les classes dérivées
*/
virtual char symbole() const = 0;	
/**
Calcule la valeur de f(x)
*/
double evaluer(const double & x) const;

/**
représente le calcul à effectuer.
défini par les classes dérivées
*/
virtual double effectuer(const double & x, const double & y) const = 0;

const string accepte(const Visiteur * visiteur) const;
};

