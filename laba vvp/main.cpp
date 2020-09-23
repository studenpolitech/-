#include<iostream> 
using namespace std; 
int main() 
{ 
setlocale(LC_ALL, "Rus"); 
int x, s, y, p; 
cout << "Введите 1 сторону прямоугольника: " << endl; 
cin >> x; 
cout << "Введите 2 сторону прямоугольника: " << endl; 
cin >> y; 
s = x * y; 
p = 2 * (x + y); 
cout << "Плoщадь равна " << s << endl; 
cout << "Периметр равен " << p << endl; 

return 0; 


}