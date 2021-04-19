#include<bits/stdc++.h>
using namespace std;

bool cmp(int p,int q){
    return p>q;//descending
    return p<q;//ascending
}
int main(){

    int n;
    cin>>n;
    int a[n];
    
    for(int i=0;i<n;++i){
        cin>>a[i];
    }

    sort(a,a+n,cmp);

    for(int i=0;i<n;++i){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    return 0;
}