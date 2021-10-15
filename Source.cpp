// Lab_04_5.cpp
// Мельничук Ілля
// Лабораторна робота № 4.5
// «Попадання» у плоску фігуру
// Варіант 15
#include<iostream>
#include<iomanip>
#include<time.h>
#include<stdlib.h>
using namespace std;
int main() {
	double x, y, R;
	cout << "R= ";
	cin >> R;
	srand(time(NULL));
	for (int i = 0; i < 10; i++) {
		cout << "x = ";
		cin >> x;
		cout << "y = ";
		cin >> y;
		if ((pow(x + R, 2) + pow(y - R, 2) >= pow(R, 2) && y >= 0 && x <= 0 && x >= -R && y <= R)
			|| (x > 0 && y < 0 && x <= R && y >= -R && pow(R, 2) >= pow(x - R, 2) + pow(y + R, 2)))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	for (int i = 0; i < 10; i++) {
        x = -R + rand() * (2 * R) / RAND_MAX;
		y = -R + rand() * (2 * R) / RAND_MAX;

		if ((pow(x + R, 2) + pow(y - R, 2) >= pow(R, 2) && y >= 0 && x <= 0 && x >= -R && y <= R)
			|| (x > 0 && y < 0 && x <= R && y >= -R && pow(R, 2) >= pow(x - R, 2) + pow(y + R, 2)))
			cout << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << " " << "yes" << endl;
		else
			cout << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << " " << "no" << endl;
	}

}