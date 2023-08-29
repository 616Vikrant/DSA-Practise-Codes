/* //power function
#include<iostream>
using namespace std;
int power (int a , int b){
    int ans=1;
    for(int i=1;i<=b;i++){
        ans= ans*a;
    }
    return ans;
}
int main(){
    int a,b;
    cout <<"enter value of a:";
    cin>>a;
    cout<<endl;
    cout<<"enter value of b:";
    cin>>b;
    cout<<endl;
    //int answer = power(a,b);
    cout<<power(a,b);
    return 0;
} */
/* //function to check even no. and return in bool
# include<iostream>
using namespace std;
bool iseven(int a){
    if(a&1){
        return false;
        }
    else{
        return true;
        }
    }
int main(){
    int a;
    cout<<"enter value of a:";
    cin>>a;
    if (iseven(a)){
        cout<<"Even number";
    }
    else{
        cout<<"Odd number";
    }
} */
/* //function for nCr
#include<iostream>
using namespace std;
int factorial(int n)
{
    int res = 1, i;
    for (i = 2; i <= n; i++)
        res *= i;
    return res;
}
int combination(int n,int r){
    int ans1=factorial(n);
    int ans2=factorial(n-r);
    int ans3=factorial(r);
    int answer=ans1/(ans3*ans2);
    return answer;
}
int main(){
    int n,r;
    cout<<"enter value of n:";
    cin>>n;
    cout<<"enter value of r:";
    cin>>r;
    cout<<(combination(n,r));
} */
//is prime or not return bool
#include<iostream>
using namespace std;
bool isPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    return true;
    }
}
int main(){
    int n;
    cout<<"enter value of n:";
    cin>>n;
    if(isPrime(n)){
        cout<<n<<" is Prime";
    }
    else{
        cout<<n<<" is not Prime";
    }
}