#pragma once
#include <string>
#include "Verbe.h"
#include "Verbe1erGroupe.h"
#include "Verbe2emeGroupe.h"

using namespace std;

class VisiteurVerbe
{
public:
virtual const string visite(const Verbe1erGroupe * verbe) const = 0;
virtual const string visite(const Verbe2emeGroupe * verbe) const = 0;
};

