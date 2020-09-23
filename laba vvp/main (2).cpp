#include<iostream> 
using namespace std; 
int main() 
{ 
setlocale(LC_ALL, "Rus"); 
int x; 
float y, sr; 
cout << "Введите 1 число : " << endl; 
cin >> x; 
cout << "Введите 2 число : " << endl; 
cin >> y; 
sr = (x + y) / 2; 
cout << " Среднее арифметическое данных чисел равно :" << sr << endl; 

return 0; 


}