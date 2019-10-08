//Программа считает периметр треугольника в заданных координатах
//Сделано Никитой Волковым

#include <iostream>
#include <cmath>
#include <clocale> 
#include <iomanip>
#include <windows.h>
using namespace std;

double calculate_distance(double, double, double, double);

int main()
{
	//Добавляем возможность русского языка
	setlocale(LC_ALL, "Russian");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	//Объявляем переменные
	double x1, y1;
	double x2, y2;
	double x3, y3;
	double side_1, side_2, side_3;
	double perimeter;

	//Приветствие
	cout << "Данная программа высчитывает периметр треугольника в заданных координатах" << endl;
	cout << "Введите координаты всех вершин треугольника для вычисления периметра" << endl;

	//Ввод данных
	cout << "Введите координаты первой вершины(через пробел):";
	cin >> x1 >> y1;
	cout << "Введите координаты второй вершины(через пробел):";
	cin >> x2 >> y2;
	cout << "Введите координаты третей вершины(через пробел):";
	cin >> x3 >> y3;

	//Вычисление периметра
	side_1 = calculate_distance(x1, y1, x2, y2);
	side_2 = calculate_distance(x1, y1, x3, y3);
	side_3 = calculate_distance(x2, y2, x3, y3);
	perimeter = side_1 + side_2 + side_3;

	//Вывод данных
	cout << "Периметр треугольника равен(точность 3 знака): ";
	cout << setprecision(3) << fixed << perimeter << endl;
	cout << "Периметр треугольника равен(точнось 5 знаков): ";
	cout << setprecision(5) << fixed << perimeter << endl;

	system("pause");

	return 0;
}

double calculate_distance(double x1, double y1, double x2, double y2)
{
	return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}