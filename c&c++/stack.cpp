/*
s.push(x);
s.pop();
s.size();
s.top();
s.empty();
s.swap(p);
s.emplace(val);
*/
#include<bits/stdc++.h>
using namespace std;

int main(){

    stack<int>s,p;
    int n;
    cin>>n;
    for(int i=0;i<n;++i){
        int x;
        cin>>x;
        s.push(x);
    }
    
    s.emplace(100);
    s.swap(p);

    cout<<p.size()<<" "<<s.size()<<endl;
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    while(!p.empty()){
        cout<<p.top()<<endl;
        p.pop();
    }
    return 0;
}