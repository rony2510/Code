#include<bits/stdc++.h>
using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
	freopen("inn.in","r",stdin);
	freopen("ouu.out","w",stdout);
    #endif
    int n;
    cin>>n;

    srand(time(0));

    for(int i=1;i<=n;++i){
        cout<<rand()%31<<" ";
    }
    cout<<endl;
    

    return 0;
}