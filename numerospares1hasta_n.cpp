#include <iostream>
#include <stdlib.h>
// realizar un algoritmo que muestre los numeros pares entre1 y n, siendo n un numero
// ingresado por el usuario
	using namespace std;
	int main (){
	int numero; // declaracion de variables 
	cout<<"digite n numeros"; //  se imprime en pantalla el mensaje
	cin>>numero; // se lee y guarda la variable
	for (int i=0;i<=numero;i+=2){ 
		cout<<i<<endl; // se imprime los numeros pares entre 1 y n 
	}
	system("pause");
	return 0;
}
