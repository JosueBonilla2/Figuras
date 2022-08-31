/**
	Progaramacion oreintada a objetos
	Tarea 1
	Josue Bonilla Cárdenas
	Reg:22110106
	CETI colomos
	30/Agosto/2022
**/

#include<stdio.h>
#include<Windows.h>
#include<iostream>
#include<conio.h>
#include<set>
#include<string.h>
#include<math.h>
#include"Circulo.h"
#include"Cuadrado.h"
#include"Triangulo.h"


using namespace std;

int main(int argc, char** argv) {

	cout << "\n\tJosue bonilla Cardenas - 2P - Tarea 2\n\n" << endl;

	

	int tipo;
	int figura;
	int radio, altura, dimencion,posicion_y, posicion_x;
	
	Cuadrado cuadro;
	Triangulo triangulo;
	Circulo circulo;

	cout << "\n\tBienvenido!!\n\n" << endl;

	cout << "Que figura desea imprimir?" << endl;
	cout << "\n\tCuadrado(1)\n\n* * * * * * * *\n* * * * * * * *\n* * * * * * * *\n* * * * * * * *\n* * * * * * * *\n* * * * * * * *\n* * * * * * * *\n* * * * * * * *" << endl;
	cout << "\n\tTriangulo(2)\n\n*\n* *\n* * *\n* * * *\n* * * * *\n* * * * * *\n* * * * * * *\n* * * * * * * *" << endl;
	cout << "\n\tCirculo(3)\n\n       *****\n    ***********\n   *************\n  ***************\n  ***************\n  ***************\n   *************\n    ***********\n       *****\n" << endl;
	cin >> figura;

	switch (figura) {
		case 1:

			cout << "Ingresa la dimencion del cuadrado: " << endl;
			cin >> dimencion;
			cuadro.setDimencion(dimencion);
			cout << endl;

			cuadro.getDimenciones();

			cout << "Que tipo de cuadrado decea imprimir?" << endl;
			cin >> tipo;
			cout << endl;

			cout << "Introduse la altura en Y donde quieres que se muestre: " << endl;
			cin >> posicion_y;
			cuadro.setY(posicion_y);

			cout << "Introduse la altura en x donde quieres que se muestre: " << endl;
			cin >> posicion_x;
			cuadro.setX(posicion_x);
			
			if (tipo == 1) {

				cuadro.crear_cuadrado_lleno();

			}
			else {
				if (tipo == 2) {
					
					cuadro.crear_cuadrado_vacio();
				}
				else {
					cout << "El tipo ingresado no esta dentor de las opciones" << endl;
				}
			}

		break;

		case 2:

			cout << "Ingrese la altura del triangulo: " << endl;
			cin >> altura;
			triangulo.setAltura(altura);
			cout << endl;

			cout << "Introduse la altura en Y donde quieres que se muestre: " << endl;
			cin >> posicion_y;
			triangulo.setY(posicion_y);

			cout << "Introduse la altura en x donde quieres que se muestre: " << endl;
			cin >> posicion_x;
			triangulo.setX(posicion_x);

			triangulo.getAltura();

			
			triangulo.crear_triangulo();

		break;

		case 3:

			cout << "Introduce el radio del circulo: " << endl;
			cin >> radio;
			circulo.setRadio(radio);
			cout << endl;

			cout << "Introduse la altura en Y donde quieres que se muestre: " << endl;
			cin >> posicion_y;
			circulo.setY(posicion_y);

			cout << "Introduse la altura en x donde quieres que se muestre: " << endl;
			cin >> posicion_x;
			circulo.setX(posicion_x);

			circulo.getRadio();

			
			circulo.craer_circulo();

			break;

		default:
			cout << "\n\nOpcion no valida\n" << endl;
		break;
	}

	return 0;
}