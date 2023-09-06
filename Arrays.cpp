//Find sum of all elements of an array;
/* #include <iostream>
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
} */

//Linear Search
/* #include<iostream>
using namespace std;
bool Linearsearch(int array[],int size,int key){
    for (int i=0;i<size;i++){
        if (array[i]==key){
            return true;
        }
    }
    return 0;
}
int main(){
    int array[10]={2,65,7,756,455,34,223,12,3,56};
    int key;
    cout<<"enter key element:";
    cin>> key;
    bool found = Linearsearch(array,10,key);
    if (found){
        cout<<"Yes "<<key<<" is present.";
    }
    else {
        cout<<"No "<<key<<" is not present.";
    }
} */


//Reverse an array
/* #include<iostream>
using namespace std;

void reverse(int array[],int size){
    int start=0;
    int end=size-1;
    while(start<=end){
        swap(array[start],array[end]);
        start++;
        end--;
    }
}

void printarray(int array[],int size){
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int size;
    cout<<"enter size of array:";
    cin>>size;
    int array[size];
    cout<<endl<<"enter elements of array:";
    for (int i=0;i<size;i++){
        cin>>array[i];
    }
    reverse(array,size);
    printarray(array,size);
} */

//reverse adjacent element in an array;
/* #include<iostream>
using namespace std;

void reverseadjacent(int array[],int size){
    for(int i=0;i<size;i=i+2){
        //swap(array[i],array[i+1]);//
        //use swap function or write code for swapping//
        int temp=array[i];
        array[i]=array[i+1];
        array[i+1]=temp;
    }
}

void printarray(int array[],int size){
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int size;
    cout<<"enter size of array:";
    cin>>size;
    int array[size];
    cout<<endl<<"enter elements of array:";
    for (int i=0;i<size;i++){
        cin>>array[i];
    }
    reverseadjacent(array,size);
    printarray(array,size);
} */

//sorting elements of an array;//incorrect code
#include<iostream>
using namespace std;
void sort(int arr[],int size){
    int i=0,j=size-1;
    while(i<j){
        if (arr[i]<arr[j]){
            swap(arr[i],arr[j]);
            i++;
            j--;   
        }
    }
    for(int a=0;a<size;a++){
        cout<<arr[a]<<endl;
    }
}
int main(){
    int size;
    cout<<"enter size of array: ";
    cin>>size;
    int arr[size];
    cout<<endl<<"enter elements of array: ";
    for (int i=0;i<size;i++){
        cin>>arr[i];
    }
    sort(arr,size);
}