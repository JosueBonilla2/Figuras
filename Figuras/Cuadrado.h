#pragma once
#include<stdio.h>
#include<Windows.h>
#include<iostream>
#include<set>
#include<string.h>
#include<math.h>
#include<conio.h>

using namespace std;

class Cuadrado
{



	//atributos

	private:
		int dimencion;
		int posicion_y, posicion_x;

	//metodos

	public:

		void gotoxy(int xM, int yM) {
			HANDLE ventana;
			ventana = GetStdHandle(STD_OUTPUT_HANDLE);
			COORD cordenadas;

			cordenadas.X = xM;
			cordenadas.Y = yM;

			SetConsoleCursorPosition(ventana, cordenadas);
		}

		void crear_cuadrado_lleno() {
			
			char opcion;
			int yM, xM;

			xM = 0;
			yM = 0;

			opcion = _getch();

			while (opcion != 'z')
			{
				
				system("cls");
				gotoxy(xM, yM);

				for (int c = 0; c < posicion_y; c++) {
					cout << endl;
				}
				for (int x = 1; x <= dimencion; x++)
				{
					for (int c = 0; c < posicion_x; c++) {
						cout <<" ";
					}
					for (int y = 1; y <= dimencion; y++)
					{
						cout << "* ";
					}
					cout << "\n";
				}

				opcion = _getch();

				switch (opcion)
				{
				case 'w': yM--; break;
				case 's': yM++; break;
				case 'a': xM--; break;
				case 'd': xM++; break;
				}

			}
		}
		void crear_cuadrado_vacio() {

			char opcion;
			int yM, xM;

			xM = 0;
			yM = 0;

			opcion = 'd';

			while (opcion != 'z')
			{

				system("cls");
				gotoxy(xM, yM);

				for (int c = 0; c <= posicion_y; c++) {
					cout << endl;
				}
				for (int x = 1; x <= dimencion; x++)
				{
					for (int c = 0; c <= posicion_x; c++) {
						cout << " ";
					}
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
				opcion = _getch();

				switch (opcion)
				{
				case 'w': yM--; break;
				case 's': yM++; break;
				case 'a': xM--; break;
				case 'd': xM++; break;
				}
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
			system("cls");
		}
	}

	void setY(int y_) {
		posicion_y = y_;
	}

	int getY() {
		return posicion_y;
	}

	void setX(int x_) {
		posicion_x = x_;
	}

	int getX() {
		return posicion_x;
	}
};

