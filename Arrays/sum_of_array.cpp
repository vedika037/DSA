#include<iostream>
using namespace std;
 
int sum(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    return sum;
   
}

int main(){
    int arr[]={2,3,4,5,6};

    cout<<"sum of array elements "<<sum(arr,5);


}