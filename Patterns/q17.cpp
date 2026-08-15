#include<iostream>
using namespace std;

int main(){
    int i=1;
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    
    while(i<=n){
        int space=n-i;
        while(space){
            cout<<" ";
            space=space-1;
        }
        int j=1;
        while(j<=i){
            cout<<i;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}