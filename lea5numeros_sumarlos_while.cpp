#include <iostream>
#include <stdlib.h>


using namespace std;
// Leer cinco numeros y  sumarlos
int main (){
		// declaracion de variables
		int numero;
		int suma;
		int i=0;
	    while(i<5){ // mientras i sea menor que cinco hace lo siguiente
		cout<<"ingrese el numero"; //  se imprime en pantalla mensaje
		cin>>numero; // se lee variable
		suma=numero+suma; // a la variable suma se le asigna  numero + suma que vale cero 
		i=i+1; // se incremeta 1 a i para romper el ciclo cuando i valga 5 //
	}
	cout<<"la suma es superior a cien y el total es, "<<suma;
	system("PAUSE");
	
	return 0;

}
