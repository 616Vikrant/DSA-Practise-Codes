#include <iostream>
using namespace std;
int main(){
    /*
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<i;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }*/
    /*int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<j;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }*/
    /*int n;
    cin>>n;
    int i=1;
    int count=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<count<<" ";
            j=j+1;
            count=count+1;
        }
        cout<<endl;
        i=i+1;
    }*/
    /*
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
        while (col<=row){
        cout<<row;
        col=col+1;}
        cout<<endl;
        row=row+1;
    }*/
    /* int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
        int value=row;
        while (col<=row){
            cout<<value;
            value=value+1;
            col=col+1;}
        cout<<endl;
        row=row+1;
    } */
    /*int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
        while (col<=row){
            cout<<row-col+1;
            col=col+1;}
        cout<<endl;
        row=row+1;
    }*/
    int row=1;
    int n;
    cout<<"enter value of n:";
    cin>>n;
    while (row<=n){
        int col=1;
        while (col<=n){
            char out='A'+row-1;
            cout<<out<<" ";
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
    return 0;
}