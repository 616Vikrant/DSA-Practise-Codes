/* #include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of n:"<<endl;
    cin>>n;
    cout<<"Numbers from 1 to "<<n<<" are: ";
    for (int i=1;i<=n;i++){
        cout<<i<<", ";
    }
}  */
/* #include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of n:"<<endl;
    cin>>n;
    int sum=0;
    for (int i=1;i<=n;i++){
        sum=sum+i;
    }
    cout<<"sum is: "<<sum;
} */
//fionacci series
/* #include <iostream>
using namespace std;
int main(){
    int n; 
    cout<<"enter value of n:";
    cin>>n;
    int a=0;
    int b=1;
    cout<<a<<" "<<b<<" ";
    for (int i=1;i<=n;i++){
        int next=a+b;
        cout<<next<<" ";
        a=b;
        b=next;
    }
} */
//prime or not
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
    bool isprime=1;
    for (int i=2;i<n;i++){
        if(n%i==0){
            isprime=0;
            break;
            }
    }
    if (isprime==0){
        cout<<"Not a prime number";
    }
    else {cout<<"Prime number";}
}