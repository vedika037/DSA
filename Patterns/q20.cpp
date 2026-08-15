#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the value of n: ";
    cin>>n;

    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n-i+1){
            cout<<j;
            j=j+1;
        }
        int k=1;
        while(k<=i-1){
            cout<<"*";
            k=k+1;
        }
        int l=1;
        while(l<=i-1){
            cout<<"*";
            l=l+1;
        }
        int v=1;
        int p=n-i+1;
        while(v<=n-i+1){
            cout<<p;
            p=p-1;
            v=v+1;
        }
        cout<<endl;
        i=i+1;
    }
}