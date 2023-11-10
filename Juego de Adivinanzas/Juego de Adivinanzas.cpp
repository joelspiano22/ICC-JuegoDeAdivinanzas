#include <iostream>
using namespace std;
int main()
{
	float i = 0, x = 0; // i = maquina, x = usuario
	int intentos = 0;
	string flag;
	bool valido;
	srand(time(NULL));
	do
	{
		//REINICIANDO...
		intentos = 0;
		valido = false;
		//GENERANDO EL NÚMERO ALEATORIO...
		i = 1 + rand() % (99);
		cout << "----------------------------------------------" << endl;
		cout << "-------BIENVENIDO, JUEGO DE ADIVINANZAS-------" << endl;
		cout << "----------------------------------------------" << endl;
		cout << "Hemos generado un numero..." << endl;
		cout << endl;
		//PIDIENDO AL USUARIO QUE ADIVINE...
		do
		{
			cout << "Adivine el numero del 1 al 100" << endl;
			do
			{
				cin >> x;
				if (x > 100 || x < 1)
				{
					valido = false;
					cout << "Numero invalido, ingrese un numero del 1 al 100: " << endl;
				}
				else
				{
					valido = true;
				}
			} while (valido == false);
			intentos++; //Cuenta cada intento
			if (x > i) //Si el usuario fue mayor
			{
				cout << "Oh No! Su suposicion fue muy alta :(" << endl;
			}
			else if (x < i) // Si el usuario fue menor
			{
				cout << "Oh No! Su suposicion fue muy baja :(" << endl;
			}
		} while (x != i);
		//GANASTE...
		cout << "***************" << endl;
		cout << "Felicidades, acerto la adivinanza :D!" << endl;
		cout << "Numero de intentos: " << intentos << endl;
		valido = false;
		do
		{
			cout << "Le gustaria volver a jugar? (Y/N): ";
			cin >> flag;
			if (flag == "y" || flag == "Y" || flag == "n" || flag == "N")
			{
				valido = true;
			}
			else
			{
				valido = false;
				cout << "Solo se pueden colocar los caracteres (Y/N)" << endl;
			}
		} while (valido == false);
	} while (flag == "y" || flag == "Y");
	cout << "***************" << endl;
	cout << "Gracias por jugar";
}
