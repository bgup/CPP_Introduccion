#include <iostream>
#include <stdlib.h>

// realizar un programa para sumar consecutivamente y cuando la suma sea superior a 100
// dejar de pedir numeros y mostrar el total
using namespace std;

int main (){
		int numero,suma;// declaracion de variables 
	    while(suma<101){ //  mientras que la variable suma sea menor  a 101 entra al ciclo
	    	cout<<"digite  n numeros"; // se  imprime en pantalla mensaje para digitar n numeros
	    	cin>>numero;  //  se leer variable
	    	suma=suma+numero; // a suma se le asigna suma que vale 0 mas  numero que se digito 
	    	
	}
	     cout<<"es mayor a cien y la  suma es "<<suma<<endl;	 
	system("PAUSE");
	
	return 0;

}








