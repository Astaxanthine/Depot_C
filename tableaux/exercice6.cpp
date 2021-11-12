/*Écrire un programme qui demande à l'utilisateur de taper 10 entiers qui seront stockés dans un tableau. Le programme doit ensuite afficher soit « le tableau est croissant », soit « le tableau est décroissant », soit « le tableau est constant », soit « le tableau est quelconque ».*/
#include <iostream>
using namespace std;

int main(){
	bool croiss = true, decroiss = true, constant = true;
	int tab[5];

	for(int i=0; i<5; i++){
		cout << "-> "; cin >> tab[i];
	}
	for(int i=0; i<5-1; i++){
		if(tab[i] > tab[i+1]){croiss = false;}
		if(tab[i] < tab[i+1]){decroiss = false;}
		if(tab[i] != tab[i+1]){constant = false;}
	}
	if(constant){cout << "Tableau constant\n"; return 0;}
	if(croiss){cout << "Tableau croissant\n";}
	if(decroiss){cout << "Tableau decroissant\n";}
	else if(!croiss && !decroiss){ cout << "tableau quelconque\n";}
}

