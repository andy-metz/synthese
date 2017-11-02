#pragma once

#include <string>

#include "Expression.h"
#include "Variable.h"
#include "Constante.h"
#include "OpBinaire.h"
#include "Plus.h"
#include "Fois.h"
#include "Visiteur.h"

using namespace std;

class Visiteur
{
public:
	virtual const Variable visite(const Variable * expression) const = 0;
	virtual const Constante visite(const Constante * expression) const = 0;
	virtual const Plus visite(const Plus * expression) const = 0;
	virtual const Fois visite(const Fois * expression) const = 0;
};

