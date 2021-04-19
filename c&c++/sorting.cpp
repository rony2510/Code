// STL sort
// Time Complexity
// Best Case – O(N log N)
// Average Case- O(N log N)
// Worse Case- O(N log N)
// where, N = number of elements to be sorted



#include <bits/stdc++.h>
using namespace std;

bool com(int a,int b) {
    return a>b;//decreasing
    return a<b;//increasing
}
int main() {

    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;++i) {
        cin>>a[i];
    }
    sort(a,a+n,com);
    for(int i=0;i<n;++i) {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    return 0;
}