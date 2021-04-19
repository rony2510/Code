/*
s.size();
s.max_size();
s.begin();
s.end();
s.rbegin();
s.rend();
s.crbegin();
s.crend();
s.insert(val);
s.insert(iter_pos,val);
s.empty();
s.erase(val);
s.erase(iter);
s.clear();
s.count(val);
s.emplace(val);
s.swap(p);
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    system("cls");

    int n;
    cin>>n;

    set<int>s,p;
    set<int>::iterator it;
    set<int>::reverse_iterator itt;

    for(int i=0;i<n;++i){
        int x;
        cin>>x;
        s.insert(x);
    }
    // s.emplace(10);
    
    // s.erase(10);
    /*
    it=s.begin();
    s.insert(it,10);
    */
    // s.clear();
    // s.swap(p);
    // s.erase(it);
    
    
    for(auto i=s.begin();i!=s.end();++i){
        cout<<*i<<endl;
    }
    // for(auto i=s.cbegin();i!=s.cend();++i){
    //     cout<<*i<<endl;
    // }
    // for(auto i=s.crbegin();i!=s.crend();++i){
    //     cout<<*i<<endl;
    // }
    // for(auto i=s.rbegin();i!=s.rend();++i){
    //     cout<<*i<<endl;
    // }
    // (s.empty())?cout<<"emp"<<endl:cout<<"fil"<<endl;
    // cout<<s.size()<<endl;
    // cout<<s.max_size()<<endl;
    // cout<<s.count(5)<<endl;

    return 0;
}