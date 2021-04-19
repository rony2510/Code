// linear search
// O(n)
/*
#include <bits/stdc++.h>
using namespace std;

int linearSearch(int a[],int x,int n) {
    for(int i=0;i<n;++i) {
        if(a[i]==x) {
            return i+1;
        }
    }
    return -1;
}

int main() {

    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;++i) {
        cin>>a[i];
    }
    int x;
    cin>>x;

    int num=sizeof(a)/sizeof(a[0]);// array size
    cout<<linearSearch(a,x,num)<<endl;

    return 0;
}
*/

// Improve Linear Search Worst-Case Complexity

// if element Found at last  O(n) to O(1)
// if element Not found O(n) to O(n/2)

#include <bits/stdc++.h>
using namespace std;

int linearSearch(int a[],int x,int n) {
    int left,right;
    left=0;
    right=n-1;
    int pos=-1;
    while(left<=right) {
        if(a[left]==x) {
            pos=left;
            return pos+1;
        }
        else if(a[right]==x) {
            pos=right;
            return pos+1;
        }
        left++;
        right--;
    }
    return pos;
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

    cout<<linearSearch(a,x,n)<<endl;

    return 0;
}