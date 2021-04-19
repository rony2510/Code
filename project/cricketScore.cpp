/*
c++ code(program) for showing cricket score!
*/



#include <bits/stdc++.h>
using namespace std;



    string team1,team2;
    vector<string>team1Players,team2Players;
    vector<string>::iterator it,itt;
    vector<string>::reverse_iterator rit,ritt;
    int tos;
    vector<pair<pair<int,int>,pair<int,int> > >score1,score2;
    vector<pair<pair<int,int>,pair<int,int> > >::iterator iter;
    int run1,wicket1,over1,ball1;
    int run2,wicket2,over2,ball2;
    string innings1,innings2;
    int innings;
    int over;
    int det;



int setOver();
int toss();
int home();
int showTeamName();
int team1Details();
int team2Details();
int showTeam1Players();
int showTeam2Players();
int showScore();
int scoreTeam1();
int scoreTeam2();
int scoring();
int score11();
int score22();
int result();



void infoSaving() {
    cout<<"\n\n\nSAVING INFORMATION......."<<endl;
    _sleep(500);
    cout<<"\tSAVING INFORMATION......."<<endl;
    _sleep(500);
    cout<<"\tINFORMATION SAVED"<<endl;
}
void infoProcessing() {
    _sleep(1000);
}
void showSystem() {
    system("cls");
    system("color 03");
}
void showHeading() {
    showSystem();
    cout<<setfill(' ')<<setw(60)<<"CRICKET SCORE\n\n"<<endl;
}
void pressAnyKeyToContinue() {
    cout<<"\n\nPRESS ANY KEY TO CONTINUE :";
    char c;
    cin>>c;
}
void wrongOption() {
    cout<<"\n\nWRONG OPTION,CHOOSE A VALID OPTION AGAIN!"<<endl;
}
void sleeping() {
    _sleep(1000);
}



int controleRoom() {
    
    showHeading();
    tos=0;
    innings=1;
    det=0;
    team1.erase();
    team2.erase();
    team1Players.clear();
    team2Players.clear();
    run1=wicket1=over1=ball1=0;
    run2=wicket2=over2=ball2=0;

    cout<<"ENTER FIRST TEAM NAME: ";
    cin>>ws;
    getline(cin,team1);
    cout<<"ENTER SECOND TEAM NAME: ";
    cin>>ws;
    getline(cin,team2);

    setOver();
    showTeamName();
    team1Details();
    team2Details();
    showTeam1Players();
    showTeam2Players();

    home();
    return 0;
}



int home() {
    showHeading();
    cout<<"1.TOSS"<<endl;
    cout<<"2. VIEW PLAYERS OF TEAM 1"<<endl;
    cout<<"3. VIEW PLAYERS OF TEAM 2"<<endl;
    cout<<"4. SHOW SCORE"<<endl;
    cout<<"5. SCORING"<<endl;
    cout<<"6. EDIT FROM FIRST"<<endl;
    cout<<"7. SHOW RESULT"<<endl;
    cout<<"0. EXIT"<<endl;


    cout<<"CHOOSE AN OPTION : ";
    int choice;
    cin>>choice;
    
    if(choice<0 || choice>7) {
        wrongOption();
        pressAnyKeyToContinue();
        return home();
    }
    else if(choice==0) {
        cout<<"\n\nEXISTING....."<<endl;
        sleeping();
        cout<<"\tEXISTING....."<<endl;
        sleeping();
        cout<<"\t\tEXISTING....."<<endl;
        sleeping();
        cout<<"\n\n\tWISH YOU ENJOYED THIS!\n"<<endl;
        pressAnyKeyToContinue();
        return 0;
    }
    else if(choice==1) {
        toss();
    }
    else if(choice==2) {
        showHeading();
        showTeam1Players();
        return home();
    }
    else if(choice==3) {
        showHeading();
        showTeam2Players();
        return home();
    }
    else if(choice==4) {
        showScore();
    }
    else if(choice==5) {
        scoring();
    }
    else if(choice==6) {
        cout<<"\n\n\tWAY TO FIRST!"<<endl;
        sleeping();
        pressAnyKeyToContinue();
        return controleRoom();
    }
    else if(choice==7) {
        result();
    }
}



int main() {

    showSystem();
    controleRoom();

    return 0;
}



int showTeamName() {
    showSystem();
    showHeading();
    cout<<team1<<"      vs      "<<team2<<endl<<endl<<endl;
    pressAnyKeyToContinue();
}

int team1Details() {
    showHeading();
    cout<<"TEAM :"<<team1<<endl;
    cout<<"ENTER FIRST ELEVEN OF TEAM "<<team1<<" :"<<endl;
    string name;
    for(int i=1;i<=11;++i) {
        cout<<i<<" : ";
        cin>>ws;
        getline(cin,name);
        team1Players.push_back(name);
    }
    infoSaving();
    pressAnyKeyToContinue();
    return 0;
}

int team2Details() {
    showHeading();
    cout<<"TEAM :"<<team2<<endl;
    cout<<"ENTER FIRST ELEVEN OF TEAM "<<team2<<" :"<<endl;
    string name;
    for(int i=1;i<=11;++i) {
        cout<<i<<" : ";
        cin>>ws;
        getline(cin,name);
        team2Players.push_back(name);
    }
    infoSaving();
    pressAnyKeyToContinue();
    return 0;
}

int setOver() {
    showHeading();
    cout<<"SET OVER : ";
    cin>>over;
    infoSaving();
    pressAnyKeyToContinue();
    return 0;
}

int showTeam1Players() {
    showSystem();
    showHeading();
    cout<<"TEAM :"<<team1<<endl;
    cout<<"\n\nPLAYERS :\n"<<endl;
    int index=1;
    for(it=team1Players.begin();it!=team1Players.end();++it) {
        cout<<index<<" : "<<*it<<endl;
        ++index;
    }
    pressAnyKeyToContinue();
    return 0;
}

int showTeam2Players() {
    showSystem();
    showHeading();
    cout<<"TEAM :"<<team2<<endl;
    cout<<"\n\nPLAYERS :\n"<<endl;
    int index=1;
    for(it=team2Players.begin();it!=team2Players.end();++it) {
        cout<<index<<" : "<<*it<<endl;
        ++index;
    }
    pressAnyKeyToContinue();
    return 0;
}

int toss() {

    showHeading();
    cout<<"TOSS\n\n"<<endl;
    if(tos>0) {
        cout<<"\nTOSSED BEFORE"<<endl;
        pressAnyKeyToContinue();
    }
    else {
        ++tos;
        srand(time(0));
        int random_number=rand()%100;
        int det;
        if(random_number%2==0) {
            cout<<team2<<" WON THE TOSS\n\n"<<endl;
            det=2;
        }
        else {
            cout<<team1<<" WON THE TOSS\n\n"<<endl;
            det=1;
        }
        cout<<"1.BOWL"<<endl;
        cout<<"2.BAT"<<endl;

        string choice;
        while(true) {
            cout<<"CHOSOE AN OPTION : ";
            cin>>choice;
            if(choice=="1") {
                if(det==1) {
                    cout<<"TEAM "<<team1<<" CHOSE TO BOWL"<<endl;
                    innings1=team2;
                    innings2=team1;
                }
                else
                {
                    cout<<"TEAM "<<team2<<" CHOSE TO BOWL"<<endl;
                    innings1=team1;
                    innings2=team2;
                }
                break;
            }
            else if(choice=="2")
            {
                if(det==1) {
                    cout<<"TEAM "<<team1<<" CHOSE TO BAT"<<endl;
                    innings1=team1;
                    innings2=team2;
                }
                else
                {
                    cout<<"TEAM "<<team2<<" CHOSE TO BAT"<<endl;
                    innings1=team1;
                    innings2=team2;
                }
                break;
            }
        }
    }
    infoSaving();
    pressAnyKeyToContinue();
    return home();
}

int showScore() {
    showHeading();
    cout<<setfill(' ')<<setw(30)<<"SCOREBOARD"<<endl;
    cout<<"1. "<<team1<<endl;
    cout<<"2. "<<team2<<endl;
    cout<<"\n\nCHOOSE TEAM :";
    string choice;
    cin>>choice;

    if(choice=="1") {
        scoreTeam1();
    }
    else if(choice=="2") {
        scoreTeam2();
    }
    else
    {
        cout<<"\n\nWRONG OPTION"<<endl;
        cout<<"\tCHOOSE AGAIN!\n\n"<<endl;
        sleeping();
        return showScore();
    }
}

int scoreTeam1() {
    showHeading();
    cout<<setfill(' ')<<setw(30)<<"SCOREBOARD("<<team1<<")"<<endl;
    cout<<"\n\n"<<endl;
    cout<<"R      W      O      B\n"<<endl;
    cout<<run1<<"  |  "<<wicket1<<"  |  "<<over1<<"  |  "<<ball1<<endl;
    pressAnyKeyToContinue();
    return home();
    return 0;
}

int scoreTeam2() {
    showHeading();
    cout<<setfill(' ')<<setw(30)<<"SCOREBOARD("<<team2<<")"<<endl;
    cout<<"\n\n"<<endl;
    cout<<"R      W      O      B\n"<<endl;
    cout<<run2<<"  |  "<<wicket2<<"  |  "<<over2<<"  |  "<<ball2<<endl;
    pressAnyKeyToContinue();
    return home();
}

int score11() {
    showHeading();
    cout<<setfill(' ')<<setw(30)<<"SCOREBOARD("<<team1<<")"<<endl;
    cout<<"\n\n"<<endl;
    cout<<"INNINGS : "<<innings<<endl<<endl;
    cout<<"R      W      O      B\n"<<endl;
    cout<<run1<<"  |  "<<wicket1<<"  |  "<<over1<<"  |  "<<ball1<<endl<<endl;
    return 0;
}

int score22() {
    showHeading();
    cout<<setfill(' ')<<setw(30)<<"SCOREBOARD("<<team2<<")"<<endl;
    cout<<"\n\n"<<endl;
    cout<<"INNINGS : "<<innings<<endl<<endl;
    cout<<"TARGET : "<<run1<<endl<<endl;
    cout<<"R      W      O      B\n"<<endl;
    cout<<run2<<"  |  "<<wicket2<<"  |  "<<over2<<"  |  "<<ball2<<endl<<endl;
    return 0;
}

int scoring() {
    
    while(1) {

        if(innings==1) {
            
            score11();
            cout<<"1. OUT"<<endl;
            cout<<"2. RUN"<<endl;
            cout<<"3. BALL"<<endl;
            cout<<"4. NO BALL"<<endl;

            cout<<"\n\nCHOOSE AN OPTION :";
            string choice;
            cin>>choice;

            if(choice=="1") {
                ++wicket1;
                ++ball1;
            }
            else if(choice=="2") {
                int run;
                cout<<"RUN : ";
                cin>>run;
                run1+=run;
                ++ball1;
            }
            else if(choice=="3") {
                ++ball1;
            }
            else if(choice=="4") {
                ++run1;
            }
            else {
                cout<<"WRONH OPTION\n\tTRY AGAIN!"<<endl;
                infoProcessing();
                return scoring();
            }

            if(ball1==6) {
                    ++over1;
                    ball1=0;
            }
            if(wicket1==10) {
                cout<<"\n\nALL OUT "<<team1<<endl;
                cout<<"FIRST INNINGS COMPLETED"<<endl;
                innings=2;
                infoSaving();
                pressAnyKeyToContinue();
                return home();
            }
            else if(over1==over) {
                cout<<"\n\nOVER COMPLETED"<<endl;
                cout<<"FIRST INNINGS COMPLETED"<<endl;
                innings=2;
                infoSaving();
                pressAnyKeyToContinue();
                return home();
            }
        }
        else if(innings==2)
        {
            score22();
            cout<<"1. OUT"<<endl;
            cout<<"2. RUN"<<endl;
            cout<<"3. BALL"<<endl;
            cout<<"4. NO BALL"<<endl;

            cout<<"\n\nCHOOSE AN OPTION :";
            string choice;
            cin>>choice;

            if(choice=="1") {
                ++wicket2;
                ++ball2;
            }
            else if(choice=="2") {
                int run;
                cout<<"RUN : ";
                cin>>run;
                run2+=run;
                ++ball2;
            }
            else if(choice=="3") {
                ++ball2;
            }
            else if(choice=="4") {
                ++run2;
            }
            else {
                cout<<"WRONH OPTION\n\tTRY AGAIN!"<<endl;
                infoProcessing();
                return scoring();
            }

            if(ball2==6) {
                    ++over2;
                    ball2=0;
            }
            if(wicket2==10) {
                cout<<"\n\nALL OUT "<<team1<<endl;
                cout<<"SECOND INNINGS COMPLETED"<<endl;
                infoSaving();
                pressAnyKeyToContinue();
                return home();
            }
            else if(over2==over) {
                cout<<"\n\nOVER COMPLETED"<<endl;
                cout<<"SECOND INNINGS COMPLETED"<<endl;
                ++det;
                infoSaving();
                pressAnyKeyToContinue();
                return home();
            }
            else if(run2>run1) {
                ++det;
                return result();
            }
        }
        else {
            cout<<"GAME OVER!"<<endl;
            pressAnyKeyToContinue();
            return home();
        }
    }
}

int result() {
    showHeading();

    if(det==0) {
        cout<<"GAME IS RUNNING\n\n"<<endl;
        pressAnyKeyToContinue();
        return home();
    }
    else {
        if(run1>run2) {
            cout<<team1<<" WONNER!!!"<<endl;
            cout<<team2<<" LOSER :)"<<endl;
            innings=3;
            pressAnyKeyToContinue();
            return home();
        }
        else if(run1<run2) {
            cout<<team2<<" WONNER!!!"<<endl;
            cout<<team1<<" LOSER :)"<<endl;
            innings=3;
            pressAnyKeyToContinue();
            return home();
        }
        else {
            cout<<"MATCH DRAW!"<<endl;
            innings=3;
            pressAnyKeyToContinue();
            return home();
        }
    }
}