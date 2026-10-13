#include<iostream>
#include<climits>
using namespace std;

int getMin(int arr[],int n){
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        // mini=min(mini,arr[i]);... mini=INT_Max
        if (arr[i]<min){
        min=arr[i];
        }
    }
    return min;
}

int getMax(int arr[],int n){
    int max=INT_MIN;
    for(int i=0;i<n;i++){

        // maxi=max(maxi,arr[i])... maxi=INT_MIN this single replaces the if statement
        if (arr[i]>max){
        max=arr[i];
        }
    }
    return max;
}

int main(){
    int size;
    cin>>size;

    int arr[100];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    cout<<"Minimun Number "<<getMin(arr,size)<<endl;
    cout<<"Maximun Number "<<getMax(arr,size)<<endl;


}