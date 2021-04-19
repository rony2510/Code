/*
simple c++ game(code) of guessing number!
*/
#include <bits/stdc++.h>
using namespace std;

int solve() {
    system("cls");
    int num,guessing,tries=0;
    srand(time(0));//seed random number generator
    num=rand()%10+1;//random number
    // cout<<num<<endl;
    cout<<endl<<endl<<endl<<"             SIMPLE C++ GAME"<<endl;
    cout<<"             GUESSING NUMBER GAME\n\n\n"<<endl;

    while(num!=guessing) {

        cout<<"enter a guessing number between 1 and 100 inclusive"<<endl;
        cin>>guessing;
        ++tries;
        if(guessing>num) {
            cout<<"sorry,you guessed higher!"<<endl;
        }
        else if(guessing<num) {
            cout<<"sorry,you guessed lesser!"<<endl;
        }
        else
        {
            cout<<"cheer!!!you got it!"<<endl;
            cout<<"you took total of "<<tries<<" tries!"<<endl;
        }
    }
    cout<<endl<<endl<<endl;
    cout<<"             GAME OVER!           "<<endl<<endl<<endl;
    return 0;
}

int main() {
    solve();
    return 0;
}