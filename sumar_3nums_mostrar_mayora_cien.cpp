#include <iostream>
#include <stdlib.h>
// Realizar un algoritmo que calcule la suma de tres numeros, si la suma es mayor
// a cien muestre un mensaje que diga  que es mayor en caso contrario
// muestre la mitad del numero
	using namespace std;
	int main (){
	int num1,num2,num3;  // declaracion de variables
	cout<<"ingrese el numero 1"; // se pide al usuario ingresar  el numero 1
	cin>>num1; // se lee el numero1 y guarda
	cout<<"ingrese el numero 2"; // se pide al usuario ingresar  el numero 2
	cin>>num2; // se lee el numero2 y guarda
	cout<<"ingrese el numero 3"; // se pide al usuario ingresar  el numero 3
	cin>>num3; // se lee el numero1 3 guarda
	int total=num1+num2+num3; // se hace la suma total de los tres numeros ingresados
	if (total>=100){  // si la suma de los tres numeros es mayor o igual a cien se imprime en pantalla que es mayor    
		cout<<"El numero es mayor que cien " <<total<<endl;
	}else{  // si la suma de los tres numeros es menor  a cien se imprime en pantalla que es menor 
		cout<<"el numero es menor a cien  "<<total<<endl; 
	}
	
	system("pause");
	return 0;
}






