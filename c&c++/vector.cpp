/*
v.push_back(x);
v.pop_back();
v.begin();
v.end();
v.rbegin();
v.rend();
v.cbegin();
v.cend();
v.crbegin();
v.crend();
v.size();
v.max_size();
v.capacity();
v.resize();
v.shrink_to_fit();
v.reserve(n);
v[pos];
v.at(pos);
v.front();
v.back();
v.data();
v.assign(n_pos,val);
v.insert(pos,val);
v.erase(pos);
v.clear();
v.emplace(pos,val);
v.emplace_back();
v.swap(q);
*/
#include <bits/stdc++.h>
using namespace std;


int cmp(int p,int q){
    return p>q;
    return p<q;
}
int main(){
    system("cls");


    int n;
    cin>>n;

    
    /*
    vector<int>v(n);
    for(int i=0;i<n;++i){
        cin>>v[i];
    }
    */
    vector<int>v,q;
    vector<int>::iterator it;
    vector<int>::reverse_iterator itt;

    // v.resize(3);
    // v.reserve(n);
    // v.shrink_to_fit();
    for(int i=0;i<n;++i){
        int x;
        cin>>x;
        v.push_back(x);
    }
    // v.pop_back();
    // v.assign(3,100);
    // v.insert(v.begin(),15);
    // v.erase(v.begin());
    // v.clear();
    // v.emplace(v.begin(),100);
    // v.emplace_back(100);
    // v.swap(q);
    // sort(v.begin(),v.end());
    // sort(v.begin(),v.end(),cmp);
	// reverse(v.begin(),v.end());

    for(it=q.begin();it!=q.end();++it){
		cout<<*it<<" ";
	}
    // for(itt=v.rbegin();itt!=v.rend();++itt){
    //     cout<<*itt<<" ";
    // }
    // for(int i=0;i<n;++i){
    //     cout<<v[i]<<" ";
    // }
    // for(auto i:v){
    //     cout<<i<<" ";
    // }
    // for(auto i=v.cbegin();i!=v.cend();++i){
    //     cout<<*i<<endl;
    // }
    // for(auto i=v.crbegin();i!=v.crend();++i){
    //     cout<<*i<<endl;
    // }
    // for(int i=0;i<n;++i){
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;

    // cout<<v.size()<<endl;
    // cout<<v.max_size()<<endl;
    // cout<<v.capacity()<<endl;
    // (v.empty())?cout<<"emp"<<endl:cout<<"fil"<<endl;

    // cout<<v[2]<<endl;//reference_operator[pos];
    // cout<<v.at(2)<<endl;
    // cout<<v.front()<<endl;
    // cout<<v.back()<<endl;
    // int* pos=v.data();
    // cout<<*pos<<endl;
    // int *x=v.data();
    // cout<<*x<<endl;


    return 0;
}