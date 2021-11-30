#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int n,k,res=0;
    vector<int> v;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    
    for(int i=0;i<n;i++){
        if(v[i]>=v[k-1] && v[i]>0){
            res++;
        }
    }
    
    cout<<res<<endl;
    
    
   
        
    return 0;
}
