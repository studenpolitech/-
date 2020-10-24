#include<iostream>
using namespace std;
int main(){
    int x;    
    cin>>x;
 if(x>9&&x<100&&x%2==0)
cout<<"двухзначное четное"<<endl;
 else if(x>9&&x<100&&x%2!=0)
cout<<"двухзначное нечетное"<<endl;
else if(x>99&&x<1000&&x%2==0)
cout<<"трехзначное четное"<<endl;
 else if(x>99&&x<1000&&x%2!=0)
cout<<"трехзначное нечетное"<<endl;

    return 0;
}