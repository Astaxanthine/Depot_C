/*Écrire un programme qui demande à l'utilisateur de taper des entiers strictement positifs et qui affiche leur moyenne. */

#include <iostream>
using namespace std;

main(){
	int moy=0, entier=0, iter=0;
	
	cout << "Entrez des nombres positifs, zéro pour quitter.\n";
	do{
		cin >> entier;
		if(entier < 0) cout << "ERREUR\n";
		if(entier > 0){
		      	moy += entier;
			iter++;
		}
	}while(entier != 0);

	cout <<"\nMoyenne = " << moy/iter << "\n";
}
