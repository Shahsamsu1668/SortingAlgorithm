#include<iostream>
using namespace std;

int main(){
cout<<"Enter number of elements:";
int n;
cin>>n;
int arr[n],i,j;
cout<<"Enter an unsorted array:";
for(i=0;i<n;i++){
    cin>>arr[i];
}
for(i=0;i<n-1;i++){
    for(j=0;j<n-i-1;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
    }
}
cout<<"Sorted array:";
for(i=0;i<n;i++){
    cout<<arr[i]<<" ";
}

}
