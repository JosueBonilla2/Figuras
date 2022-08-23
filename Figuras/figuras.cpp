/**
	Progaramacion oreintada a objetos
	Tarea 1
	Josue Bonilla Cárdenas
	Reg:22110106
	CETI colomos
	23/Agosto/2022
**/

#include<stdio.h>
#include<iostream>
#include<set>
#include<string.h>
#include<math.h>

using namespace std;

class Cuadrado {

	//atributos

private:
	int dimencion;


	//metodos

public:

	void crear_cuadrado_lleno() {
		for (int x = 1; x <= dimencion; x++)
		{
			for (int y = 1; y <= dimencion; y++)
			{
				cout << "* ";
			}
			cout << "\n";
		}
	}
	void crear_cuadrado_vacio() {
		for (int x = 1; x <= dimencion; x++)
		{
			for (int y = 1; y <= dimencion; y++)
			{
				if (x == 1 || y == 1 || y == dimencion || x == dimencion)
				{
					cout << "* ";
				}
				else {
					cout << "  ";
				}
			}
			cout << endl;
		}
	}

	void setDimencion(int d) {
		dimencion = d;
	}

	int getDimenciones() {
		if (dimencion > 1) {
			return dimencion;
		}
		else {
			cout << "EL dato no corresponde, tiene que ser un numero mayor a 1" << endl;
		}
	}
};



class Triangulo {

private:

	int altura;

public:

	void crear_triangulo() {
		for (int x = 1; x <= altura; x++)
		{
			for (int y = 1; y <= x; y++)
			{
				cout << "* ";
			}
			cout << "\n";
		}
	}

	void setAltura(int a) {
		altura = a;
	}

	int getAltura() {
		if (altura > 1) {
			return altura;
		}
		else {
			cout << "EL dato no corresponde, tiene que ser un numero mayor a 1" << endl;
		}
	}
};


class Circulo {

private:

	int radio = 0;

public:

	void craer_circulo() {
		for (int x = 0; x <= radio * 2; x++)
		{
			for (int y = 0; y <= radio * 2; y++)
			{
				if (pow(y - radio, 2.0) + pow(x - radio, 2.0) <= pow(radio, 2)) {
					cout << "*";
				}
				else {
					cout << " ";
				}
			}
			cout << "\n";
		}
	}

	void setRadio(int r) {
		radio = r;
	};

	int getRadio() {
		if (radio > 1) {
			return radio;
		}
		else {
			cout << "EL dato no corresponde, tiene que ser un numero mayor a 1" << endl;
		}
	};
};

int main(int argc, char** argv) {

	cout << "\n\tJosue bonilla Cardenas - 2P - Tarea 2\n\n" << endl;

	int tipo;
	int figura;

	Cuadrado cuadro;
	Triangulo triangulo;
	Circulo circulo;

	cuadro.setDimencion(15);
	triangulo.setAltura(10);
	circulo.setRadio(10);

	cout << "\n\tBienvenido!!\n\n" << endl;

	cout << "Que figura desea imprimir?" << endl;
	cout << "\n\tCuadrado(1)\n\n* * * * * * * *\n* * * * * * * *\n* * * * * * * *\n* * * * * * * *\n* * * * * * * *\n* * * * * * * *\n* * * * * * * *\n* * * * * * * *" << endl;
	cout << "\n\tTriangulo(2)\n\n*\n* *\n* * *\n* * * *\n* * * * *\n* * * * * *\n* * * * * * *\n* * * * * * * *" << endl;
	cout << "\n\tCirculo(3)\n\n       *****\n    ***********\n   *************\n  ***************\n  ***************\n  ***************\n   *************\n    ***********\n       *****\n" << endl;
	cin >> figura;

	switch (figura) {
	case 1:

		cout << "Las dimenciones del cuadrado estan en: " << cuadro.getDimenciones() << endl;
		cout << endl;

		cout << "Que tipo de cuadrado decea imprimir?" << endl;
		cin >> tipo;
		cout << endl;

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

		cout << "Las dimenciones del triangulo estan en: " << triangulo.getAltura() << endl;
		cout << endl;

		triangulo.crear_triangulo();

		break;

	case 3:

		cout << "El radio del circulo estan en: " << circulo.getRadio() << endl;
		cout << endl;

		circulo.craer_circulo();

		break;

	default:
		cout << "\n\nOpcion no valida\n" << endl;
		break;
	}


}