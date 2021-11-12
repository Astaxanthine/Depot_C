/*Écrire un programme qui demande à l'utilisateur de saisir 10 entiers stockés dans un tableau. Le programme doit ensuite afficher l'indice du plus grand élément.*/
#include <iostream>
using namespace std;

int main(){
	int tab[10], nmax=0, imax=0;

	for(int i=0; i<10; i++){
		cout << "-> "; cin >> tab[i]; cout << "\n";
	}

	for(int i=0; i<10; i++){
		if(tab[i] > nmax){
		       nmax = tab[i];
	       	       imax = i;
		}	       
	}
	cout << "\nIndice de la valeur la plus élevé: " << imax+1 << "\n";

}
