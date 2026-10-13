//total amount=1330
// how many 100,50,20 and 1 rs note requires to distribute the total amount write a program using switch case

#include<stdio.h>
using namespace std;

int main(){
    int a;
    cin>>a;
    int total_amount;
    int ans;
    switch(a){
        case 100: ans=total_amount/100;
                  cout<<ans;
                  ans=ans*100-total_amount;
                  

        case 50: cout<<ans/50;
                 ans=ans*50-total_amount;
    }
}