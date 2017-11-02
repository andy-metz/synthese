#pragma once
#include <vector>
#include "fraction.h"


class ChargeListeFraction
{
public:

	/* convertit un fichier de fraction sous différentes formes et met toutes les fractions sous la forme a/b */
	static vector<Fraction> charge(ifstream & fichier);


};

