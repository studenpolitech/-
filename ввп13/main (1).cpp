#include<iostream>
using namespace std;
int main(){
    float m=0.1;
    float p=1.5;
    cout<<"стоимость 1 кг конфет равна "<<p;
    while (m<1.1){
        cout<<endl;
    cout<<m<<" килограмм конфет стоит "<<p*m<<endl;
    m=m+0.1;
}
    
    
    
    return 0;
}