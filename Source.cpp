#include<iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Rus");
	float  sum, rasn, chast, prois, x1, x2;
	cout << "������� 1 ��������� �����: " << endl;
	cin >> x1;
	cout << "������� 2 ��������� �����: " << endl;
	cin >> x2;
	sum = abs(x1 ) + abs( x2);
	rasn = abs(x1 ) - abs( x2);
	prois = abs(x1 ) * abs( x2);
	chast = abs(x1 ) / abs( x2);
	cout << "����� ������� ����� �����: " << sum << endl;
	cout << "�������� ������� ����� �����: " << rasn << endl;
	cout << "������������ ������� ����� �����: " << prois << endl;
	cout << "������� ������� ����� �����: " << chast << endl;
	return 0;





}