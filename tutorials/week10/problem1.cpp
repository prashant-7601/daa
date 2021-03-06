#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, s, e;
    cin>>n;
    vector<pair<int, int>> activity(n);
    vector<int> res;
    for(int i=0; i<n; i++){
         cin>>s;
         activity[i].second = s;
    }
    for(int i=0; i<n; i++){
         cin>>e;
         activity[i].first = e;
    }
    sort(activity.begin(), activity.end());
    int count=0, currentEnd = -1;
    for(int i=0; i<n; i++){
        if(activity[i].second>currentEnd){
            count++;
            res.push_back(i+1);
            currentEnd = activity[i].first;
        }
    }
    cout<<"No. of non-conflicting activities: "<<count<<endl;
    cout<<"List of selected activities: ";
    int i;
    for(i=0; i<res.size()-1; i++) cout<<res[i]<<", ";
    cout<<res[i];
}


