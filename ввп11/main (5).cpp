#include<iostream>
using namespace std;
int main(){
    int x;    
    cin>>x;
if(x==0)
cout<<"нулевое число"<<endl;
else if(x<0&&x%2==0)
cout<<"отрицательное четное"<<endl;
 else if(x<0&&x%2!=0)
cout<<"отрицательное нечетное"<<endl;
else if(x>0&&x%2==0)
cout<<"положительное четное"<<endl;
 else if(x>0&&x%2!=0)
cout<<"положительное нечетное"<<endl;

    return 0;
}