#include<iostream>

using namespace std;

int main(){
    /*int a;
    cout<<"enter value of a:\n";
    cin>>a;
    if (a>0){
        cout<<a<<" is Positive"<<endl;
    }
    else if (a<0){cout<<a<<" is Negative";}
    else {
        cout<<a<<" is Zero"<<endl;
    }*/
    /*
    char ch;
    cout<<"enter character";
    cin>>ch;
    if (ch>64 && ch<91){
        cout<<"it is capital letter";
    }
    else if (ch>96 && ch<123){
        cout<<"it is small letter";
    }
    else if (ch>47 && ch<58){
        cout<<"it is number";
    }
    else {
        cout<<"it is a symbol or special character";
    }*/
    /*int a;
    cin>>a;
    int sum=0;
    int i=0;
    for (i<=a){
        int sum=sum+i;
        cout<<"value of a is "<<i<<"  ";
        cout<<"sum is "<<sum<<"\n";
        i=i+1;
    };*/
    /*int n;
    cin>>n;
    int i=0;
    int sum=0;
    while(i<=n){
        cout<<"value of i is "<<i<<"  ";
        sum=sum+i;
        cout<<"value of sum is "<<sum<<endl;
        i=i+1;
    }*/
    /*int n;
    cin>>n;
    int i=2;
    int sum=0;
    while(i<=n){
        cout<<"value of i is "<<i<<"  ";
        sum=sum+i;
        cout<<"value of sum is "<<sum<<endl;
        i=i+2;
    }*/
    int n;
    cin>>n;
    int i=2;
    while(i<n){
        if(n%i==0){
            cout<<"it is not Prime for "<<i<<endl;
        }
        else{cout<<"n is prime for "<<i<<endl;}
    i=i+1;
    }
    return 0;
}