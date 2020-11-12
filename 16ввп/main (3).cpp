#include<iostream>
using namespace std;
int main(){
    int n;
    int a[100];
    int A, B;
    cout<<"A: ";
    cin>>A;
    cout<<"B: ";
    cin>>B;
    a[0]=A;
    a[1]=B;
    cout<<"n: ";
    cin>>n;
    for(int i=2; i<n; i++)
    a[i]=a[i-1]+a[i-2];
    for(int i=0; i<n; i++)
    cout  << a[i] << endl;
    return 0;
    
    
    
}