#pragma once

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
#include"Formas.h"

using namespace std;

class Programa
{
	public:
		void menu() {
			int repetir;

			do {
				cout << "\n\tJosue bonilla Cardenas - 2P - Tarea 2\n\n" << endl;

				int tipo;
				int figura;
				int radio, altura, dimencion, posicion_y, posicion_x;

				Formas *forma[3];

				forma[0] = new Triangulo(posicion_x, posicion_y, altura);
				forma[1] = new Cuadrado(posicion_x, posicion_y, dimencion);
				forma[2] = new Circulo(posicion_x, posicion_y, radio);

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
					forma[1]->set(dimencion);
					cout << endl;

					forma[1]->get();

					cout << "Que tipo de cuadrado decea imprimir?" << endl;
					cout << "\n\tLleno(1)\n\n* * * * \n* * * *\n* * * *\n* * * *" << endl;
					cout << "\n\tVacio(2)\n\n* * * * \n*     *\n*     *\n* * * *" << endl;
					cin >> tipo;
					cout << endl;

					cout << "Introduse la altura en Y donde quieres que se muestre: " << endl;
					cin >> posicion_y;
					forma[1]->setY(posicion_y);

					cout << "Introduse la altura en x donde quieres que se muestre: " << endl;
					cin >> posicion_x;
					forma[1]->setX(posicion_x);

					
					
					if (tipo == 1) {

						forma[1]->mover_forma();
			
					}
					else {
						if (tipo == 2) {

							forma[1]->mover_forma_vacia();
						}
						else {
							cout << "El tipo ingresado no esta dentor de las opciones" << endl;
						}
					}

					cout << "\nDesea salir del programa (0) o Regresar al menu?(1)" << endl;
					cin >> repetir;

					break;

				case 2:

					cout << "Ingrese la altura del triangulo: " << endl;
					cin >> altura;
					forma[0]->set(altura);
					cout << endl;

					forma[0]->get();

					cout << "Introduse la altura en Y donde quieres que se muestre: " << endl;
					cin >> posicion_y;
					forma[0]->setY(posicion_y);

					cout << "Introduse la altura en x donde quieres que se muestre: " << endl;
					cin >> posicion_x;
					forma[0]->setX(posicion_x);
				
					forma[0]->mover_forma();

					cout << "\Desea salir del programa (0) o Regresar al menu?(1)" << endl;
					cin >> repetir;

					break;

				case 3:

					cout << "Introduce el radio del circulo: " << endl;
					cin >> radio;
					forma[2]->set(radio);
					cout << endl;

					forma[2]->get();

					cout << "Introduse la altura en Y donde quieres que se muestre: " << endl;
					cin >> posicion_y;
					forma[2]->setY(posicion_y);

					cout << "Introduse la altura en x donde quieres que se muestre: " << endl;
					cin >> posicion_x;
					forma[2]->setX(posicion_x);
					
					forma[2]->mover_forma();

					cout << "\nDesea salir del programa (0) o Regresar al menu?(1)" << endl;
					cin >> repetir;

					break;

				default:
					cout << "\n\nOpcion no valida\n" << endl;
					break;
				}
			} while (repetir != 0);
		}

			void correr_programa() {
				menu();
			}
};

