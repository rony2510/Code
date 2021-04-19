#include<bits/stdc++.h>
using namespace std;

int main(){

    float n;
    cin>>n;

    // cout<<fixed<<setprecision(2)<<n<<endl;
    // printf("%.2f\n",n);
    // cout<<setprecision(5)<<n<<endl;// total digit is <=n
    /*
    float x=(int)(n*1000+.5);// after 3 digit of decimal
    x=(float)(x/1000);
    cout<<x<<endl;
    */

    cout<<ceil(n)<<endl;
    cout<<floor(n)<<endl;
    cout<<round(n)<<endl;
    cout<<trunc(n)<<endl;

    return 0;
}