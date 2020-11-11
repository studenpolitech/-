#include<iostream>
#include<locale>
using namespace std;
int main(){
    setlocale(LC_ALL, "Rus");
    int   n;
    char s;
    
    cout << "Введите символ направления («n» — север, «w» — запад, «s» — юг, «e» — восток): ";
    cin>>s;
    cout << "Введите цифровую команду для робота (0 — продолжать движение, 1 — поворот налево, -1 — поворот направо): ";
    cin>>n;
    cout<<"направление - ";
    switch(n){
        case 1: switch(s){
            case 'n':
            cout<<"запад"<<endl;
            break;
             case 's':
            cout<<"восток"<<endl;
            break;
             case 'w':
            cout<<"юг"<<endl;
            break;
            case 'e':
            cout<<"север"<<endl;
            break;
        }
        case -1: switch(s){
            case 'n':
            cout<<"восток"<<endl;
            break;
             case 's':
            cout<<"запад"<<endl;
            break;
             case 'w':
            cout<<"север"<<endl;
            break;
             case 'e':
            cout<<"юг"<<endl;
            break;
        }
        case 0: switch(s){
            case 'n':
            cout<<"север"<<endl;
            break;
             case 's':
            cout<<"юг"<<endl;
            break;
             case 'w':
            cout<<"запад"<<endl;
            break;
            case 'e':
            cout<<"восток"<<endl;
            break;
        }
       
    }
    return 0;
}