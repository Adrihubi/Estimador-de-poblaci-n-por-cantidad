#include<iostream>
#include<math.h>

using namespace std;

int main() {
	float anio[10], poblacion[10], r[10];
	float ni, a, b, c, d, e, uno, dos, dos1, dos2, dos3, sumas, sumas1;
	float fX0X1, X1X0, a0, a1, a2, l, f, g;
	float Polinomio, ani, final, formulacion, per;

	cout << "\nIngrese el numero de anios a calcular: ";
	cin >> ni;

	for (int i = 0; i < ni; i++) {
		cout << "\n Ingrese el anio: ";
		cin >> anio[i];
		cout << "¿Cual es el numero de poblacion del anio ingresado? ";
		cin >> poblacion[i];
	} cout << "\n";

	for (int i = 0; i < ni - 1; i++) {
		a = poblacion[i + 1];
		fX0X1 = a - poblacion[i];
		b = anio[i + 1];
		X1X0 = b - anio[i];
		r[i] = fX0X1 / X1X0;
	}

	for (int i = 0; i < ni - 2; i++) {
		c = r[i + 1] - r[i];
		d = anio[i + 2] - anio[i];
		e = c / d;
	}

	a0 = poblacion[0];
	a1 = r[0];
	a2 = e;

	l = -anio[0];
	uno = a1 * l;

	f = -(anio[0]);
	g = -(anio[1]);
	dos = f * g;
	dos1 = f + g;
	dos2 = a2 * (dos);
	dos3 = a2 * (dos1);

	sumas = a1 + dos3;
	sumas1 = a0 + uno + dos2;
	cout.precision(4);
	cout << "\nEl Polinomio quedaria tal como: " << a2;
	cout.precision(8);
	cout << "x2 + " << sumas << "x " << sumas1 << endl;

	system("Pause");
	system("CLS");

	cout << "\nIngrese un anio a calcular su poblacion a futuro: ";
	cin >> ani;

	Polinomio = a2 * (pow(ani, 2)) + sumas * (ani)+sumas1;

	cout.precision(6);
	cout << "\nLa prediccion es: " << Polinomio << endl;

	cout << "\n¿Cual es la verdadera cantidad de personas? ";
	cin >> per;

	formulacion = (Polinomio * 100) / per;

	cout.precision(4);
	cout << "\nEl porcentaje de acierto es del: " << formulacion << "% " << endl;

	return 0;
}