#include<iostream>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int n, k;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        cin>>k;
        int count = 0;
        for(int i=0; i<n; i++){
            if(arr[i] == k)
                count++;
        }
        if(count>0)
            cout<<k<<" - "<<count<<"\n";
        else
            cout<<"Key not present\n";
    }
}
