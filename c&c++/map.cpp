/*
m.size();
m.max_size();
m.insert();
make_pair(x,y);
m.begin();
m.end();
m.rbegin();
m.rend();
it->first;
it->second;
m.clear();
m.empty();
m.erase(key_val);
m.erase(itr_pos);
m.count(key_val);
m.emplace(make_pair(x,y));
*/
#include<bits/stdc++.h>
using namespace std;

int main(){

    map<int,int>m;
    map<int,int>::iterator it;
    map<int,int>::reverse_iterator itt;

    int n;
    cin>>n;
    for(int i=0;i<n;++i){
        int x,y;
        cin>>x>>y;
        m.insert(make_pair(x,y));
    }
    // m.emplace(make_pair(5,100));

    // it=m.begin();
    // m.erase(it);

    // m.erase(1);
    // m.erase(5);
    // sort(m.begin(),m.end());

    for(it=m.begin();it!=m.end();++it){
        cout<<it->first<<" "<<it->second<<endl;
    }

    // m.clear();
    // (m.empty())?cout<<"emp"<<endl:cout<<"ful"<<endl;

    // for(itt=m.rbegin();itt!=m.rend();++itt){
    //     cout<<itt->first<<" "<<itt->second<<endl;
    // }
    // cout<<m.count(2)<<endl;
    // cout<<m.size()<<endl;
    // cout<<m.max_size()<<endl;

    return 0;
}