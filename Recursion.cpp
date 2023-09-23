//array sum
/* #include <bits/stdc++.h>
using namespace std;
int addition(int *arr,int n){
    int sum=0;
    if (n==0){
    return 0;
    }
    if(n==1){
        return arr[0];
    }
    int remain=addition(arr+1,n-1);
    sum=arr[0]+remain;
    return sum;
}
int main(){
    int arr[10];
    cout<<"enter values";
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    cout<<addition(arr,10);
} */

//linear search
/* #include<bits/stdc++.h>
using namespace std;
bool lsearch(int *arr,int n,int key){
    if(n==0){
        return 0;
    }
    if(arr[0]==key){
        return true;
    }
    else{
        lsearch(arr+1,n-1,key);
    }
}
int main(){
    int arr[10];
    cout<<"enter values";
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    int key;
    cout<<endl<<"enter key";
    cin>>key;
    bool found=lsearch(arr,10,key);
    if(found){
        cout<<"present";
    }
    else{
        cout<<"not present";
    }
} */