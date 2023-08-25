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
/* #include <iostream>
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
} */
//Decimal to Binary
/* #include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
    float answer=0;
    int i=0;
    while (n!=0){
        int bit=n&1;
        answer=(bit* pow(10,i))+answer;
        n=n >> 1;
        i++;
    }
    cout<<answer;
} */
//Binary to Decimal
/* #include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
    float answer=0;
    int i=0;
    while (n!=0){
        int digit=n%10;
        if (digit==1){
            answer=(pow(2,i))+answer;
        }
            n=n/10;
            i++;
    }
    cout<<answer;
} */
//reverse bits of a bnumber and return decimal
#include <bits/stdc++.h>
using namespace std;
class Solution {
   public:
   uint32_t reverseBits(uint32_t n) {
      uint32_t ans = 0;
      for(int i = 31; i >= 0; i--){
         ans |= (n & 1) <<i;
         n>>=1;
      }
      return ans;
   }
};
main(){
   Solution ob;
   cout<<"enter bits: ";
   cout << ob.reverseBits(0b00000000000000000000001001110100);
}