#include<iostream>
using namespace std;

int binary_search(int arr[],int n,int key){
    int start=0;
    int end=n-1;

    int mid=(start+end)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}

int main(){
    int even_arr[6]={2,5,8,9,10,20};
    int odd_arr[5]={3,6,8,99,200};

    cout<<"index of searching key element is : "<<binary_search(even_arr,6,10)<<endl;
    cout<<"index of searching key element is : "<<binary_search(odd_arr,5,88);

    return 0;


}