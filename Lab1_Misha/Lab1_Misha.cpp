#include <iostream>
#include <locale.h>

using namespace std;

double CorrectInput(double& value);

int main()
{
	setlocale(LC_ALL,"RUS");
	double x, y;
	double squerSide, radius;
	bool flag = false;
	cout << "Введите координаты точки Х и Y\n";
	CorrectInput(x);
	CorrectInput(y);
	cout << "Координаты точки X: " << x << " Y: " << y << endl;
	cout << "Введите сторону квадрата\n";
	CorrectInput(squerSide);
	cout << "Введите радиус\n";
	CorrectInput(radius);
	double d = squerSide * sqrt(2) * 2;
	if (abs(x) < radius && abs(y) < radius && abs(x) + abs(y) > d)
		cout << "Точка попадает в область\n";
	else
		cout << "Точка не попадает в область\n";
}

double CorrectInput(double& value)
{
	char fail;
	cin >> value;
	while (cin.fail())
	{
		cout << "Данные некорректны\n";
		cin.clear();
		cin >> fail;
		cin >> value;
	}
	return value;
}