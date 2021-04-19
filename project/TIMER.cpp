/*
c++ codes(program) for a simple non-animated timer!
*/
#include <bits/stdc++.h>
#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <windows.h>
#include <unistd.h>
using namespace std;

int days,hours,minutes,seconds;
void timer();
void showTimer();

int main() {
	system("color 02");
    timer();
    return 0;
}
void timer() {
    while(1) {
        showTimer();
        sleep(1);
        ++seconds;
        if(seconds==60) {
            ++minutes;
            seconds=0;
			if(minutes==60) {
				++hours;
				minutes=0;
				if(hours==60) {
					++days;
					hours=0;
				}
			}
        }
    }
}
void showTimer() {
    // system("cls");
	cout<<"TIMER"<<endl;
	cout<<days<<"|"<<hours<<"|"<<minutes<<"|"<<seconds<<endl;
}