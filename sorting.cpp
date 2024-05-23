#include<iostream>
using namespace std;
#include<climits>
#include<cmath>
// selection sort
/*int main(){
 int n;
 cin>>n;int arr[n];
 for(int i=0;i<n;i++){
    cin>>arr[i];
 }for(int i=0;i<n-1;i++){
for(int j=i+1;j<n;j++){
    if(arr[j]<arr[i]){
  int temp=arr[j];
  arr[j]=arr[i];
  arr[i]=temp;
    }
}
 }for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
 }cout<<endl;
}*/
// bubble sort sort 
/*int main(){
    int n;
    cin>>n;int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int counter =0;
    while(counter<n){
        for(int i=0;i<n-counter;i++){
     if(arr[i]>arr[i+1]){
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
     }
    }counter++;
}for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}cout<<endl;
}*/
// insertion sort
/*int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }for(int i=1;i<n;i++){
        int current=arr[i];
        int j=i-1;
        while(arr[j]>current&&j>=0){
            arr[j+1]=arr[j];
            j--;
        }arr[j+1]=current;
    }for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}*/
/*
int main(){
    int mx=-199999;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++ ){
        cin>>arr[i];}
        for(int i=0;i<n;i++){
        mx=max(mx,arr[i]);
        cout<<mx<<endl;

    }
}*/
//subarray is continioue part of an array 
//nc2-n=n(n+1)/2
//subsequence me lkahi see todo bas sequence maintain hona chahiye 2^n
//every subarray is a subsequence but every subsequece is not subarray
// sum of subarray
/*nt main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[n];
} int current=0;
for(int i=0;i<n;i++){
    current=0;
    for(int j=i;j<n-1;j++){
        current+=arr[j];
        cout<<arr[j]<<" ";
    }
}
}*/

