#include<iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Rus");
	float  sum, rasn, chast, prois, x1, x2;
	cout << "Введите 1 ненулевое число: " << endl;
	cin >> x1;
	cout << "Введите 2 ненулевое число: " << endl;
	cin >> x2;
	sum = abs(x1 ) + abs( x2);
	rasn = abs(x1 ) - abs( x2);
	prois = abs(x1 ) * abs( x2);
	chast = abs(x1 ) / abs( x2);
	cout << "Сумма модулей чисел равна: " << sum << endl;
	cout << "Разность модулей чисел равна: " << rasn << endl;
	cout << "Произведение модулей чисел равно: " << prois << endl;
	cout << "Частное модулей чисел равно: " << chast << endl;
	return 0;





}