/* #include<iostream>
using namespace std;
int search(int nums[], int target) {
            int start=0;
            int end=nums.size()-1;
            int mid= start+(end-start)/2;
            while(start<=end){
                if (target==nums[mid]){
                    return mid;
                }
                else if(target<nums[mid]){
                    end=mid-1;
                }
                else{
                    start=mid+1;
                }
                mid=start+(end-start)/2;
            }
        return -1;
    }
int main(){
    int target;
    int nums[100];
    cout<<"enter nums: ";
    for(int i=0;i<100;i++){
        cin>>arr[i];
    }
    cout<<endl<<"entr target:";
    search(nums,target);
} */

#include<iostream>
using namespace std;
long long int sroot(int n){
        long long int ans=-1;
        int s=0;
        int e=n;
        long long int mid=s+(e-s)/2;
        while(s<=e){
            long long int square=mid*mid;
            if(square==n){
                return mid;
            }
            if(square<n){
                ans=mid;
                s=mid+1;
            }
            else{
                e=mid-1;
            }
            mid=s+(e-s)/2;
        }
        return ans;
    }
int main(){
    
    int x;
    cout<<"enter number:";
    cin>>x;
        cout<<sroot(x);
    };
