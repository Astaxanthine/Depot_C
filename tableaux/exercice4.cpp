/*Écrire un programme qui demande à l'utilisateur de saisir 10 entiers stockés dans un tableau ainsi qu'un entier V. Le programme doit rechercher si V se trouve dans le tableau et doit supprimer la première occurrence de V en décalant d'une case vers la gauche les éléments suivants et en rajoutant un 0 à la fin du tableau. Le programme doit ensuite afficher la table finalement. */
#include <iostream>
using namespace std;

int main(){
	int tab[10], V;

	cout << "\nDonnez V: "; cin >> V;
	cout << "\nDonnez tab: ";
	for(int i=0; i<10; i++){
		cout << "\n-> "; cin >> tab[i];
	}

	for(int i=0; i<10; i++){
		if(tab[i] == V){
			for(int j=i; j<10; j++){
				tab[j] = tab[j+1];
				if(j == 9){tab[j] = 0;}
			}
		}
	}

	for(int i=0; i<10; i++){
		cout << "\n" << tab[i];
	}
	cout << "\n";
}
