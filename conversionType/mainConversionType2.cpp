/* Mise en place d'une surdéfinition d'opérateur dans le
 * cadre d'une conversion de type.
 */ 
#include <iostream>
using namespace std;

class point{
	int x, y;
   public:
	point(int abs=0, int ord=0){
		x = abs; y = ord;
		cout << "$$ construction point: " << x << y << "\n";
	}
	friend point operator + (point, point);
	void affiche(){
		cout << "Coordonnees: " << x << y << "\n";
	}
};

point operator + (point a, point b){
	point r;
	r.x = a.x + b.x; r.y = a.y + b.y;
	return r;
}

main(){
	point a, b(2,4);
	a = b + 6;
	a.affiche();
	a = 6 + b;
	a.affiche();
}
