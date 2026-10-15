#include<iostream>
using namespace std;

int unique(int arr[],int size){

    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];
    }
    return ans;

}

int main(){
    int arr[]={2,2,7,1,5,1,5};
    cout<<"unique element from the entire array : "<<unique(arr,7);
}