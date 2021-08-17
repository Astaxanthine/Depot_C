#include "vecteur3d.h"
#include <iostream>
using namespace std;

//Exercice sur la surcharge de l'opérateur []

int main(){
	vecteur3d v(3,4,5);
	int i;

	cout <<"v1 = ";
	for(i=0; i<3; i++){ cout << v[i] << " "; }
	for(i=0; i<3; i++){ v[i] = i; }
	cout << "\nv1 = ";
	for(i=0; i<3; i++){ cout << v[i] << " "; }
}


