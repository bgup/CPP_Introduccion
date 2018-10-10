#include <iostream>
#include <stdlib.h>

// realizar un programa para sumar consecutivamente y cuando la suma sea superior a 100
// dejar de pedir numeros y mostrar el total
using namespace std;

int main (){
		int numero,suma;// declaracion de variables 
	    while(numero!=0){ // mientras numero sea diferente a 0 haga lo siguiente
	    	cout<<"digite  n numeros"; // se  imprime en pantalla mensaje para digitar n numeros
	    	cin>>numero;  //  se leer variable
	    	suma=suma+numero; // a suma se le asigna suma que vale 0 mas  numero que se digito 
	    	
	}
	     cout<<"digito 0  y la  suma es "<<suma<<endl;	 // se imprime la suma cuando digiten 0
	system("PAUSE");
	
	return 0;

}
