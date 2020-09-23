#include<iostream> 
using namespace std; 
int main() 
{ 
setlocale(LC_ALL, "Rus"); 
float d; 
double L; 
cout << "Введите диаметр окружности : " << endl; 
cin >> d; 
L = d * 3.14; 
cout << "Длина окружности равна " << L << endl; 

return 0; 


}