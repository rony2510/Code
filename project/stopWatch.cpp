/*
c++ codes(program) of a simple non-animated stopwatch!
*/
#include <bits/stdc++.h>
#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <windows.h>
#include <unistd.h>
using namespace std;

int hours,minutes,seconds;//initial
int hour,minute,second;//target
int stopWatch();
void setTime();

bool check() {
    return(hours==hour && minutes==minute && seconds==second)?true:false;
}
int main() {
    system("color 02");
    cout<<setfill(' ')<<setw(30)<<"STOP WATCH"<<endl;
    setTime();
    stopWatch();
    return 0;
}
void setTime() {
    cin>>hour>>minute>>second;
    for(int i=1;i<=5;++i){
        cout<<"\n";
    }
}
int stopWatch() {
    
    while(1) {
        cout<<setfill(' ')<<setw(30)<<hours<<"|"<<minutes<<"|"<<seconds<<"\t\t\n";
        // cout<<hour-hours<<"|"<<minute-minutes<<"|"<<second-seconds<<endl;
        if(check()) {
            for(int i=1;i<=5;++i){
                cout<<"\n";
            }
            cout<<setfill(' ')<<setw(30)<<"TIMES UP!"<<endl;
            return 0;
        }
        sleep(1);
        ++seconds;
        if(seconds==60) {
            ++minutes;
            seconds=0;
            if(minutes==60) {
                ++hours;
                minutes=0;
            }
        }
    }
}