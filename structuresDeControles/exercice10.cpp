/*Écrire un programme qui permet de faire des opérations sur un entier (valeur initiale à 0).*/

#include <iostream>
using namespace std;

main(){
	int var=0, entier=0;
	
	do{
		cout <<"\n= "<< entier << "\n"
		     << "1.Ajouter 1\n"
		     << "2.Multiplier par 2\n"
		     << "3.Soustraire 4\n"
		     << "4.Quitter\n";

		cin >> var;
		switch(var){
			case 1:entier++;
			       break;
			case 2:entier *= 2;
			       break;
			case 3:entier -= 4;
			       break;
			case 4:var = 4;
			       break;
			default:continue;
		};
	}while(var != 4);

}
