/*
c++ codes(program) of a simple non-animated countdown meter!
*/
#include <bits/stdc++.h>
#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <windows.h>
#include <unistd.h>
using namespace std;


int hours,minutes,seconds;
int hour,minute,second;


int countDownMeter();
void setTime();
bool check() {

    cout<<setfill(' ')<<setw(20);
    cout<<hour<<"|"<<minute<<"|"<<second<<endl;

    if(hours==hour && minutes==minute && seconds==second) {
        cout<<endl<<endl<<endl;
        cout<<setfill(' ')<<setw(30)<<"TIMES UP!"<<endl;
        cout<<endl<<endl<<endl;
        return true;
    }
    return false;
}


int main() {
    system("color 02");
    cout<<endl<<endl<<endl;
    cout<<setfill(' ')<<setw(30)<<"COUNTDOWN METER"<<endl;
    cout<<endl<<endl<<endl;
    setTime();
    countDownMeter();
    return 0;
}


void setTime() {
    cout<<"set the time"<<endl;
    cin>>hour>>minute>>second;
}
int countDownMeter() {
    
    while(1) {
        
        if(check()) {
            return 0;
        }

        sleep(1);

        --second;
        if(second==0) {
            if(check()) {
                return 0;
            }
            --minute;
            second=60;
            if(minute==0) {
                if(check()) {
                    return 0;
                }
                --hour;
                minute=59;
            }
        }
    }
}