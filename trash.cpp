#include<bits/stdc++.h>
#include "print.h" 
using namespace std;



int main(){
    // vector<int> a={1,2,3,5,4,2,0};
    // int n = a.size();
    // int sum = 0;
    // for(auto &i:a)sum+=i;
    // // cout<<sum;
    // int l,r;
    // for(int i=0;i<n;i++){
    //     if(i==0)
    //     l=0;
    //     else
    //     l+=a[i-1];
    //     if(i==n-1)
    //     r=0;
    //     else
    //     r=sum-l-a[i];
    //     cout<<l<<" "<<r<<endl;
    //     if(r==l)
    //     {
    //         cout<<i<<endl;
    //         return 0;
    //     }
    // }
    // cout<<"-1"<<endl;
    
    // array of numbers
    // vector<int> nums={1,0,1,0,1,1,0};
    vector<int> nums(20,0);

    // check if size is 0
    if(nums.size()==0)
    return -1;

    // check if size is <3 ie. 1 or 2 for which ans would be 0
    if(nums.size()<3)
    return 0;

    // variable to store length of array
    int n = nums.size();

    // variable to store the highest number achievable in n bits 
    unsigned long long int h = pow(2,n)-1;
    // cout<<h;
    // cout<<endl;

    // calculating the ans
    cout<< h-int(h)%7;
    cout<<endl;
    cout<< 7*(int)floor(h/7);
    
    
    // int s=0;
    // cout<<endl;
    // for(int i=0;i<n;i++)
    // s+=pow(2,i);
    // cout<<s;
}