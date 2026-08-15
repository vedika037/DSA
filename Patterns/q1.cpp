#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<j<<" "; //if cout<<n-j+1;the reverse series will be printed
            j=j+1;
           }
        cout<<endl;
        i=i+1;
    }
}