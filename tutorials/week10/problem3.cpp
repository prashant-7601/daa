#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    sort(arr, arr+n);
    int mid = n/2;
    bool flag = false;
    for(int i=0; i<n-mid; i++){
        if(arr[i]==arr[i+mid]){
            flag = true;
            break;
        }
    }
    if(flag) cout<<"yes\n";
    else cout<<"no\n";
    if(n%2==0){
        cout<<(arr[mid]+arr[mid-1])/2<<endl;
    }
    else{
        cout<<arr[mid]<<endl;
    }
}

