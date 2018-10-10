#include <iostream>
#include <stdlib.h>
//  Determinar si un alumno aprueba un curso sabiendo que aprobara
// si su promedio de 3 calificaciones es 70 o mayor
// reprobara en caso contrario
	using namespace std;
	int main (){
	float cal1,cal2,cal3,prom; // declaracion de variables que necesitamos //
	cout<<"ingrese la calificacin 1	";  // se imprime en pantalla un mensaje pidiendo  la calificacion 1 
	cin>>cal1; // se lee y guarda la calificacion 1 
	cout<<"ingrese la calificacin 2	";
	cin>>cal2;
	cout<<"ingrese la calificacin 3	";
	cin>>cal3;
	prom=(cal1+cal2+cal3)/3; // a la variable prom  se le asigna  el promedio de las calificaciones //
	if (prom>=70){ //  si  el promedio es mayor o igual a 70 se  muestra en pantalla que el alumno aprobo y su prmedio
		cout<<"El alumno aprobo  y el promedio es " <<prom<<endl;
	}else{ // si el promedio es menor a 70 se muestra en pantalla que reprobo con su promedio//
		cout<<"reprobo  con el promedio es  "<<prom<<endl; 
	}
	
	system("pause");
	return 0;
}
