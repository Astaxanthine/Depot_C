/*
On considère la suite hongroise : u(0)=a (a entier)

si u(n) pair alors u(n+1)=u(n)/2 sinon u(n+1)=3*u(n)+1

Pour toutes les valeurs a, il existe un entier N tel que u(N)=1 (conjecture admise).

a) Écrire un programme qui demande à l'utilisateur de taper a et qui affiche toutes les valeurs de u(n) de n=1 à n=N.
*/

#include <iostream>
using namespace std;

int main(){
	int N, Nmax=0, M=0, i;
	int u1, u2pair, u2impair;
	cout << "\nDonnez M > 2: ";
	cin >> M; cout << "\n";

	for(i=2; i<=M; i++){
		cout << "\nFOR1\n";
		u1 = i; u2pair = 0; u2impair = 0;

		for(N=0; u1 != 1; N++){
			cout << "\nFOR2\n";
			if(u1%2 == 0){//Pair
				u2pair = u1/2;
				u1 = u2pair;
			}
			else{//Impair
				u2impair = 3*u1 + 1;
				u1 = u2impair;
			}
			cout << "u("<<N<<") = " << u1 << "\n";
		}	
		cout << "\nN = " << N << "\n";
		if(N > Nmax){Nmax = N;}
		cout << "\nNmax = " << Nmax << "\n";
	}
	cout << "\nNmax = " << Nmax << "\n";
}
