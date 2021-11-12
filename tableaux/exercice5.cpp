/*Écrire un programme qui demande à l'utilisateur de saisir 10 entiers stockés dans un tableau ainsi qu'un entier V et un entier i compris entre 0 et 9. Le programme doit décaler d'une case vers la droite tous les éléments à partir de l'indice i (en supprimant le dernier élément du tableau) et doit mettre la valeur V dans le tableau à l'indice i. Le programme doit ensuite afficher la table finalement.*/
#include <iostream>
using namespace std;

int main(){
	int tab[10], tmp, V, i;

	cout << "\nDonnez V: "; cin >> V;
	cout << "\nDonnez i: "; cin >> i;
	cout << "\nDonnez tab: ";
	for(int j=0; j<10; j++){
		cout << "\n-> "; cin >> tab[j];
	}

	for(int j=9; j>=i; j--){
		tab[j] = tab[j-1];
	}
	tab[i] = V;
	for(int i=0; i<10; i++){
		cout << "\n" << tab[i];
	}
	cout << "\n";
}

