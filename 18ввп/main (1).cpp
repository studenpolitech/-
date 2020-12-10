#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    int A [] = { 1,2,3,4,5 };
    int B []= { 6,7,8,9,10 };
    int n = sizeof(A) / sizeof(int);
    cout << "\t\t\t\t__________задание№1__________" << endl;
    cout << "Массив А:" << endl;
    for (int i = 0; i < n; i++)
        cout << A[i] << " ";
    cout << endl;
    cout << "Массив В:" << endl;
    for (int i = 0; i < n; i++)
        cout << B[i] << " ";
    cout << endl;
    int* A1 = new int[n];
    for (int i = 0; i < n; i++)
    {
        A1[i] = A[i];
        A[i] = B[i];
        B[i] = A1[i];
    }
    cout << endl;
    cout << "Массив А:" << endl;
    for (int i = 0; i < n; i++)
        cout << A[i] << " ";
    cout << endl;
    cout << "Массив В:" << endl;
    for (int i = 0; i < n; i++)
        cout << B[i] << " ";
    cout << endl;
    
    cout << "\t\t\t\t__________задание№2__________" << endl;
    int AA[] = { 1,2,3, 4, 5 };
    int s;
    cout << "Массив А:" << endl << "1 2 3 4 5" << endl<<endl;
    for (int i = 0; i < n; i++)
    {
        s = 0;
        for (int j = 0; j <= i; j++)
        {
            s = s + AA[j];
        }
        B[i] = s;
    }
    cout << "Массив В:" << endl;
    for (int i = 0; i < n; i++)
        cout << B[i] << " ";
    
    
    
    
    cout << "\t\t\t\t__________задание№3__________" << endl;
    int AB[] = { 1,3,6,8,5,9,10,7,15,13 };
    cout << "Изначальный массив: " << endl << "1 3 6 8 5 9 10 7 15 13" << endl << endl;
    for (int i = 0; i < sizeof(AB) / 4; i++)
        if (AB[i] % 2 != 0)
            s = AB[i];
    for (int i = 0; i < sizeof(AB) / 4; i++)
        if (AB[i] % 2 != 0)
            AB[i] += s;
    for (int i = 0; i < sizeof(AB) / 4; i++)
        cout << AB[i] << " ";
    cout << endl;
    


    cout << "\t\t\t\t__________задание№4__________" << endl;
    int a[] = { 1,3,6,8,5,9,10,7,15,13 };
    int b, c, d, e;
    cout << "Изначальный массив: " << endl << "1 3 6 8 5 9 10 7 15 13" << endl << endl;
    b = 0; c = 0; d = 100000000; e=100000000;
    int mas[2];
    for (int i = 0; i < sizeof(a)/4-1; i++)
    {
        if ((a[i] > b) && (a[i + 2] > c))
        {
            b = a[i];
            c = a[i+2];
            mas[0] = i;
        }
    }
    for (int i = 0; i < sizeof(a) / 4 - 1; i++)
    {
        if ((a[i] <d) && (a[i + 2] <e))
        {
            d = a[i];
            e = a[i + 2];
            mas[1] = i;
        }
    }
    a[mas[0] + 1] = 0;
    a[mas[1] + 1] = 0;
    for (int i = 0; i < sizeof(a)/4; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    


    cout << "\t\t\t\t__________задание№5__________" << endl;
    int aa[] = { 7,1,2,3,4,5,6,8,9,10 };
    for (int i = 0; i < sizeof(aa)/4-1; i++)
    {
        if (aa[i] > aa[i+1])
        {
            s = aa[i];
            aa[i] = aa[i+1];
            aa[i + 1] = s;
        }
    }
    cout << "Изначальный массив: " << endl << "7 1 2 3 4 5 6 8 9 10" << endl << endl;
    for (int i = 0; i < sizeof(aa) / 4; i++)
    {
        cout << aa[i] << " ";
    }
    cout << endl;
    return 0;
}