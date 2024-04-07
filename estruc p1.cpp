#include <iostream>
using namespace std;
struct Estudiante{
int *codigo;
string *nombre;
int **nota;
};
main() {
Estudiante estudiante;
int fila = 0, columna = 0;
cout<<"cuantos estudiantes desea agregar";
cin>>fila;
cout<<"cuantas notas por estudiante desea agregar";
cin>>columna;
estudiante.codigo = new int [fila];
estudiante.nombre = new string [fila];
estudiante.notas = new int *[fila];
for (int i=0;i<fila;i++){
estudiante.notas[i] = new int [columna];
}
cout<<"________ingreso de notas________"<<endl;
for (int i=0;i<fila;i++){
	for (int i=0;i<columna;i++){
	}
}
		
system("pause");
} 

for (int i=0;i<4;i++){
	cout<<"________________"<<endl;
cout<<"Ingrese Codigo:";
cin>>estudiante.codigo[i];
cin.ignore();
cout<<"Ingrese Nombre Completo:";
getline(cin, estudiante.nombre[i]);
cout<<"Ingrese Nota:";
cin>>estudiante.notai;
}
for (int i=0;i<4;i++){
	cout<<"________________"<<endl;
cout<<"Codigo:"<<estudiante.codigo[i]<<endl;
cout<<"Nombre Completo:"<<estudiante.nombre[i]<<endl;
cout<<"Nota:"<<estudiante.nota[i]<<endl;
}
