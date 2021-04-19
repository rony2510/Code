/*
simple c++ game(code) of guessing number!
*/
#include <bits/stdc++.h>
using namespace std;

int solve() {
    
    system("cls");
    int random_num,guessing,tries=0;
    srand(time(0));//seed random number generator
    random_num=rand()%100+1;//random number between 1 & 100 inclusive

    cout<<endl<<endl<<endl<<"             SIMPLE C++ GAME"<<endl;
    cout<<"             GUESSING NUMBER GAME!\n\n\n"<<endl;
    do
    {
        cout<<"enter a guessing number between 1 and 100 inclusive"<<endl;
        cin>>guessing;
        ++tries;
        if(guessing>random_num) {
            cout<<"higher"<<endl;
        }
        else if(guessing<random_num) {
            cout<<"lesser"<<endl;
        }
        else
        {
            cout<<"cheer!!!you got it!"<<endl;
            cout<<"you took total of "<<tries<<" tries!"<<endl;
        }
        
    } while (guessing!=random_num);
    
    cout<<endl<<endl<<endl;
    cout<<"             GAME OVER!           "<<endl<<endl<<endl;
    
    return 0;
}

int main() {
    solve();
    return 0;
}