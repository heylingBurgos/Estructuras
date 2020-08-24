#include <iostream>
#include <string.h>

/*
	Nombre: Andrés Vásquez - Heyling Burgos - Santiago Fernández
	Clase: Estructuras de Datos
	Profesor: Andrea del Pilar Rueda
	Periodo: 2020-3
	Título: Entrega 0 - Proyecto Final
*/
using namespace std;

int main(int argc, char *argv[]){
	
	cout<<endl<<"$"<<endl;
	char *comando = new char [20];
	strcpy(comando, argv[1]);
	cout<<argc<<endl;
	cout<<comando<<endl;
	cout<<endl;
	for(int i=0; i<argc; i++){
		cout<<argv[i]<<endl;
	}
	if(strcmp(argv[1],"lol")==0){
		cout<<"ok"<<endl;
	}

	return 0;
}