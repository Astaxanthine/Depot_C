#include <iostream>
#include <cmath>
#include "vecteur3d.h"
using namespace std;

float & vecteur3d::operator [](int i){
	if((i<0) || (i>2)) i = 0; //Debordement d'indice
	return v[i];
}

