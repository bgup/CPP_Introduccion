#include <iostream>
#include <stdlib.h>


using namespace std;
// realizar un programa para sumar consecutivamente y cuando la suma sea superior a 100
//	dejar de pedir numeros y mostrar el total  
int main (){
		// declaracion de variables
		int numero;
		int suma;
	    while(suma<101){ // mientras i sea menor que suma hace lo siguiente
		cout<<"ingrese el numero"; //  se imprime en pantalla mensaje
		cin>>numero; // se lee variable
		suma=numero+suma; // a la variable suma se le asigna  numero + suma que vale cero 
		
	}
	cout<<"la suma es superior a cien y el total es, "<<suma;
	system("PAUSE");
	
	return 0;

}
