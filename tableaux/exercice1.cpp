/*Écrire un programme qui demande à l'utilisateur de saisir 10 entiers stockés dans un tableau. Le programme doit afficher le nombre d'entiers supérieurs ou égaux à 10.
*/

#include <iostream>
using namespace std;

const int N=10;
 
int main(){
	int t[10],i,nb=0;
	for(i=0;i<N;i++){cout<<"Tapez un entier ";cin>>t[i];}
	for(i=0;i<N;i++)if(t[i]>=10)nb++;
	cout<<"Le nombre d'entiers supérieurs ou égaux à 10 est : " 
       	    <<nb<<endl;
	return 0;
}

