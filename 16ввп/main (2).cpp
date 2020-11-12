#include<iostream>
using namespace std;
int main(){
    int n;
    int a[100];
    a[0]=1;
    int d=2;
    cout<<"n: ";
    cin>>n;
    for(int i=1; i<n; i++)
    a[i]=a[i-1]*d;
    for(int i=0; i<n; i++)
    cout  << a[i] << endl;
    return 0;
    
    
    
}