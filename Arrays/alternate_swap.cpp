#include<iostream>
using namespace std;

void alter_swap(int arr[],int size){

    for (int i=0;i<size;i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
}

void printarr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

int main(){
    int even_arr[]={3,5,6,7,2,9};
    int odd_arr[]={6,0,-2,8,3};

    alter_swap(even_arr,6);
    printarr(even_arr,6);

    alter_swap(odd_arr,5);
    printarr(odd_arr,5);

}