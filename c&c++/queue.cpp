/*
q.size();
q.push();
q.pop();
q.front();
q.back();
q.empty();
q.swap(p);
q.emplace(val);
*/
#include<bits/stdc++.h>
using namespace std;

int main(){

    system("cls");

    int n;
    cin>>n;


    queue<int>q,p;
    for(int i=0;i<n;++i){
        int x;
        cin>>x;
        q.push(x);
    }
    // q.swap(p);
    q.emplace(10);

    while(!q.empty()){
        // cout<<q.back()<<endl;
        cout<<q.front()<<endl;
        q.pop();
    }

    // cout<<q.size()<<endl;
    // cout<<p.size()<<endl;
    
    
    return 0;
}