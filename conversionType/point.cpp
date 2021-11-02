/*
 * Munir une classe d'un opérateur de cast permettant de convertir un point en un
 * entier
*/
#include <iostream>
using namespace std;

class point{
	int x, y;
   public:
	point(int abs=0, int ord=0){
		x = abs; y = ord;
	}
	operator int (){
		return x;
	}
};

void fct(int pts){
	cout << pts << "\n";
}

int main(){
	void fct (int);
	point pts1(5, 12);
	int x = 1;

	cout << "x = " << x << "\n";
	x = pts1;
	cout << "x = " << x << "\n";

	fct(pts1);
}
