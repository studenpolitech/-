#include<iostream>
using namespace std;
int main(){
    int n;
    int a[100];
    cout<<"n: ";
    cin>>n;
    for(int i=0; i<n; i++)
    a[i]=1+i*2;
    for(int i=0; i<n; i++)
    cout  << a[i] << endl;
    return 0;
    
    
    
}