#include<iostream> 
using namespace std; 
int main() { 
setlocale(LC_ALL, "Rus"); 
float sum, rasn, chast, prois, x1, x2; 
cout << "Введите 1 ненулевое число: " << endl; 
cin >> x1; 
cout << "Введите 2 ненулевое число: " << endl; 
cin >> x2; 
sum = (x1*x1) + (x2*x2); 
rasn = (x1*x1) - (x2*x2); 
prois = (x1 * x1) * (x2 * x2); 
chast = (x1 * x1) / (x2 * x2); 
cout << "Сумма квадратов чисел равна: " << sum << endl; 
cout << "Разность кваратов чисел равна: " << rasn << endl; 
cout << "Произведение квадратов чисел равно: " << prois << endl; 
cout << "Частное квадратов чисел равно: " << chast << endl; 
return 0; 





}