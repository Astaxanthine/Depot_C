/*Écrire un programme qui demande à l'utilisateur de saisir 10 entiers stockés dans un tableau ainsi qu'un entier V. Le programme doit rechercher si V se trouve dans le tableau et afficher « V se trouve dans le tableau » ou « V ne se trouve pas dans le tableau ».*/
#include <iostream>
using namespace std;

int main(){
	int tab[10], V=0;

	cout << "Donnez V: "; cin >> V; cout << "\n";
	for(int i=0;i<10; i++){
		cout << "\n->";cin >> tab[i];
	}
	for(int i=0;i<10; i++){
		if(tab[i] == V){
			cout << "V se trouve dans le tableau\n";
			return 0;
		}
	}
	cout << "V ne se trouve pas dans le tableau\n";

}
