/*Écrire un programme qui demande à l'utilisateur de taper un entier N et qui calcule u(N) défini par :

u(0)=3 ;

u(1)=2 ;

u(n)=n.u(n-1)+(n+1).u(n-2)+n.*/

#include <iostream>
using namespace std;

main(){
	int N=0, u0=3, u1=2, un=0;
	
	cout << "N = ";
	cin >> N;
	cout << "\n";

	for(int n=2; n<=N; n++){
		 un = n*u1 + (n+1)*u0 + n;
		 u0 = u1;
		 u1 = un; 
		 cout << "\n u("<<n<<") = " << un << "\n";
	}
	cout << "u(N) = " << un << "\n";

}
