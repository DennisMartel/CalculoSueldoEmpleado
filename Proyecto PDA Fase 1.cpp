#include<iostream>
#include<stdlib.h>
#include<windows.h>

using namespace std;

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPosition;

void gotoXY(int,int);
void gotoXY(int x, int y) 
{ 
	CursorPosition.X = x; 
	CursorPosition.Y = y; 
	SetConsoleCursorPosition(console,CursorPosition); 
}

int main(){
	string nombre, apellido, cargo;
	int horas,seguro;
	double salario, costo, renta, isss, total;
	
	cout<<"|";cout.width(119);cout.fill('*');cout<<"|\n";
	cout<<"|";cout.width(119);cout.fill(' ');cout<<"|\n";
	cout<<"|";cout.width(119);cout.fill(' ');cout<<"|\n";
	cout<<"|";cout.width(119);cout.fill(' ');cout<<"|\n";
	cout<<"|";cout.width(119);cout.fill('*');cout<<"|\n";
	cout<<"|";cout.width(119);cout.fill(' ');cout<<"|\n";
	cout<<"|";cout.width(119);cout.fill(' ');cout<<"|\n";
	cout<<"|";cout.width(119);cout.fill(' ');cout<<"|\n";
	cout<<"|";cout.width(119);cout.fill(' ');cout<<"|\n";
	cout<<"|";cout.width(119);cout.fill(' ');cout<<"|\n";
	cout<<"|";cout.width(119);cout.fill(' ');cout<<"|\n";
	cout<<"|";cout.width(119);cout.fill(' ');cout<<"|\n";
	cout<<"|";cout.width(119);cout.fill(' ');cout<<"|\n";
	cout<<"|";cout.width(119);cout.fill('*');cout<<"|\n";
	
	gotoXY(40,2);cout<<"Calculo de sueldo final de empleado";
	gotoXY(3,6);cout<<"1. Nombres:_______________________________     4. Costo hora:$___________";
	gotoXY(3,8);cout<<"2. Apellidos:_____________________________     5. Horas Laboradas: ______ horas";
	gotoXY(3,10);cout<<"3. Cargo:_____________________________";
	
	gotoXY(15,6);
	getline (cin,nombre);
	gotoXY(17,8);
	getline (cin,apellido);
	gotoXY(13,10);
	getline (cin,cargo);
	gotoXY(66,6);
	cin>>costo;
	gotoXY(71,8);
	cin>>horas;
	
	system("cls");
	
	salario=costo*horas;
	seguro=12;
	renta=salario*0.075;
	isss=salario*0.054;
	total=salario-renta-isss-seguro;
    	
	cout.setf(ios::fixed);
	cout.precision(2);
	cout<<"|";cout.width(119);cout.fill('*');cout<<"|\n";
	cout<<"                    Empleado: "<<apellido<<", "<<nombre;
	cout<<"\n                    Cargo: "<<cargo;
	cout<<"\n|";cout.width(121);cout.fill('*');cout<<"|\n\n\n";
	cout<<"\t\t\tSueldo Inicial   : $    "<<salario;
	cout<<"\n\t\t\t(Descuentos segun la ley)\n";
	cout<<"\t\t\tRenta            : $    "<<renta;
	cout<<"\n\t\t\tISSS             : $    "<<isss;
	cout<<"\n\t\t\tSeguro de vida   : $    "<<seguro;
	cout<<"\n\t\t\t\t         ---------";
	cout<<"\n\t\t\tSueldo a pagar   : $    "<<total<<"\n\n";
	
	system("pause");
	
	return 0;
}
