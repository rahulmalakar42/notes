#include<bits/stdc++.h>
using namespace std;

int main(){

    // binary search
    // lower_bound
    // upper_bound

    vector<int> v={1,3,4,5};
    // int a = binary_search(v.begin(),v.end(), 3);  //1
    // int lb = lower_bound(v.begin(),v.end(),4);
    // int ub = upper_bound(v.begin(),v.end(),2);

    //binary search on answers
    // int i=0, j=v.size()-1, mid=(j-i)/2;
    // int b; cin>>b;
    // while(v[i]<b){
    //     if(v[i]<v[mid]){
    //         j=mid-1;
    //         mid=(j-i)/2;
    //     }
    //     else if(v[i]>v[mid]){
    //         i=mid+1;
    //         mid=(j-i)/2;
    //     }
        
    // }
    // cout<<i<<endl;

    // int i=0, j=v.size()-1, ans=j+1;
    // int b; cin>>b;
    // while(i<=j){
    //     int mid=i+(j-i)/2;
    //     if(v[mid]>=b){
    //         ans=mid;
    //     }
    //     else{
    //         j=mid+1;
    //     }
    // }
    // cout<<ans<<endl;
    
    // int i=0, j=v.size()-1, ans=-1;
    // int b; cin>>b;
    // while(i<=j){
    //     int mid=i+(j-i)/2;
    //     if(v[mid]<=b){
    //         i=mid+1;
    //         ans=i;
    //     }
    //     else{
    //         j=mid-1;
    //     }
    // }
    // cout<<ans<<endl;

    //sqrt - implemented by binary search
    long double i=0, j=1e9; long double ans=-1;
    int b; cin>>b;
    while((j-i)>=1e-9){
        long double mid=i+(j-i)/2;
        if(mid*mid*mid<=b){
            i = mid;
            ans=mid;
        }
        else{
            j=mid;
        }        
    }
    cout<<fixed<<setprecision(20)<<ans<<endl;

    return 0;
}