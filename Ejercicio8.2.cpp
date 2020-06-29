/*Ejericicio desarrollado por SUPERLEO
Escribir un programa con una funcion que realice las siguientes
operaciones con un numero: raiz cuadrada, cuadrado y cubo.
Mostrar el resultado en forma de tabla, con los numeros
del 1 al 10
*/

#include <iostream.h>
#include <math.h>


//Prototipos de funciones
double raizCuadrada(double);
double raizCubica(double);
double cuadrado(double);
double cubo(double);

//Funcion principal
int main()
{
	// Programa que pide un numero al usuario
	/*
	double n;
	
	cout<<"Ingrese numero: ";
	cin>>n;
	
	cout<<"\nRaiz Cuadrada \tRaiz Cubica \tCuadrado \tCubo";
	cout<<'\n'<<raizCuadrada(n)<<"\t\t"<<raizCubica(n)<<"\t\t"<<cuadrado(n)<<"\t\t"<<cubo(n);	
	*/

	//
	//Encabezado de la tabla
	cout<<"\nNumero\tRaiz Cuadrada \tRaiz Cubica \tCuadrado \tCubo";

	for(int i=1;i<=10;i++)
	{
		cout<<'\n'<<i<<'\t'<<raizCuadrada(i)<<"\t\t"<<raizCubica(i)<<"\t\t"<<cuadrado(i)<<"\t\t"<<cubo(i);
	}
	//

	cout<<'\n';

	return 0;
}

//Funcion Raiz Cuadrada
double raizCuadrada(double n)
{
	return pow(n,0.5);
}

//Funcion Raiz Cubica
double raizCubica(double n)
{
	return pow(n,0.3333333333);
}

//Funcion Cuadrado
double cuadrado(double n)
{
	return pow(n,2);
}

//Funcion Cubo
double cubo(double n)
{
	return pow(n,3);
}