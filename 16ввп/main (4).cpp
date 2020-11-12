#include<iostream>
using namespace std;
int main(){
    int a[100];
    int n;
    cout<<"n: ";
    cin>>n;
    for(int i=0; i<n; i++){
            a[i] = rand() % 90 + 10;
    cout  << a[i] << " ";
    cout<<endl;
    }
    for(int i=0; i<n/2; i++){
    cout  << a[i] << " ";
    cout<<a[n-1-i]<<" ";
    }
    if(n%2!=0){
        cout<<a[n/2];
    }
    return 0;
}