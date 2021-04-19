// binary search
// O(log(n))
#include <bits/stdc++.h>
using namespace std;

int binarySearch(int a[],int x,int n) {
    int left,right,mid;
    left=0;
    right=n-1;
    
    while(left<=right) {
        // mid=(left+(right-1))/2;
        mid=(left+right)/2;
        if(a[mid]==x) {
            return mid+1;
        }

        if(a[mid]<x) {
            left=mid+1;
        }
        else {
            right=mid-1;
        }
    }

    return -1;

}
int main() {

    int n;
    cin>>n;
    int a[n];
    int x;
    for(int i=0;i<n;++i) {
        cin>>a[i];
    }
    cin>>x;

    cout<<binarySearch(a,x,n)<<endl;



    return 0;
}