//Find sum of all elements of an array;
#include <iostream>
using namespace std;
int sum(int arr[],int size){
    int count=0;
    for(int i =0;i<size;i++){
        count=count+arr[i];
    }
    return count;
}
int main(){
    int size;
    cout<<"input size:";
    cin>>size;
    int arr[100];
    cout<<endl<<"enter elements:";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"sum is : "<<sum(arr,size);
}