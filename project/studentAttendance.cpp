/*

______________c++ code(program) for recording student attendance!_______________

*/
/*

admin
admin

*/
#include <bits/stdc++.h>
using namespace std;



void systemCommand() {
    system("cls");
    system("color 02");
}
void adminShow() {
    systemCommand();
    cout<<setfill(' ')<<setw(50)<<"ADMIN\n\n"<<endl;
}
void studentAttendanceSystemShow() {
    cout<<endl<<endl;
    cout<<setfill(' ')<<setw(50)<<"STUDENT ATTENDANCE SYSTEM!\n\n\n"<<endl;
}





        int tries;

        int total_days;

        vector<pair<int,string> >student_list;
        vector<pair<int,string> >::iterator it;
        vector<pair<int,string> >::reverse_iterator itt;

        vector<pair<int,int> >student_attendance;
        vector<pair<int,int> >::iterator sa;
        vector<pair<int,int> >::reverse_iterator rsa;





int admin();
int adminCheck();
int student();
int studentList();
int attendanceRecord();
int addStudent();
int removeAStudent();
int removeAllStudents();
int attendanceCall();

bool cmp(pair<int,string>p,pair<int,string>q) {
    return p.first<q.first;
}
void sortStudentList() {
    sort(student_list.begin(),student_list.end(),cmp);
}
bool cmp1(pair<int,int>p,pair<int,int>q) {
    return p.first<q.first;
}
void sortStudentAttendance() {
    sort(student_attendance.begin(),student_attendance.end(),cmp1);
}





int home() {

    systemCommand;
    studentAttendanceSystemShow();
    sortStudentList();
    sortStudentAttendance();

    cout<<"Admin---------->Ad"<<endl;
    cout<<"Student-------->Stu"<<endl;
    cout<<"Exit----------->Ex"<<endl;
    cout<<"\n\n\tChoose an option(Ad,Stu,Ex): ";

    string choice;
    cin>>choice;

    if(choice!="Ad" && choice!="Stu" && choice!="Ex") {
        if(tries==5) {
            system("cls");
            system("color 04");
            cout<<endl<<endl;
            cout<<"U crossed limited attempt!\n\t";
            _sleep(1500);
            cout<<"Wanna hack this? :(:(:(\n\t\t";
            _sleep(1500);
            cout<<"U R NAUGHTY xD\n\n\n"<<endl;
            return 0;
        }
        else {
            cout<<"\n\nWrong Option!\n\tTry again.........."<<endl;
            _sleep(2000);
            system("cls");
            ++tries;
            return home();
        }
    }
    else if(choice=="Ex") {
        systemCommand();
        cout<<"\n\n\nLogging Out......."<<endl;
        _sleep(1000);
        cout<<"\tLogging Out......."<<endl;
        _sleep(1000);
        systemCommand();
        cout<<"\n\n\tLogged Out!\n\n\n"<<endl;
        return 0;
    }
    else if(choice=="Ad") {
        adminCheck();
    }
    else if(choice=="Stu") {
        student();
    }

}










int main() {

    systemCommand();
    home();

    return 0;
}









int adminCheck() {

    adminShow();
    string usern_name;
    cout<<"Enter Username: ";
    cin>>usern_name;
    if(usern_name=="admin") {
        adminShow();
        string password;
        cout<<"Enter Password: ";
        cin>>password;
        if(password=="admin") {
            admin();
        }
        else {
            cout<<"\n\n\n\tWrong Password!\n\t\tTry Again.......\n\n"<<endl;
            _sleep(1500);
            return adminCheck();
        }
    }
    else {
        cout<<"\n\n\n\tWrong Username!\n\t\tTry Again.......\n\n"<<endl;
        _sleep(1500);
        return adminCheck();
    }
}
int admin() {
        
        
            adminShow();
            cout<<"1.Student List"<<endl;
            cout<<"2.Attendance Record"<<endl;
            cout<<"3.Add a Student"<<endl;
            cout<<"4.Remove a Student"<<endl;
            cout<<"5.Remove All Students"<<endl;
            cout<<"6.Attendance Call"<<endl;
            cout<<"0.Exit"<<endl;

            int choice;
            cout<<"\n\n\tChoose an Option(0-6) :";
            cin>>choice;

            if(choice>6 || choice<0) {
                cout<<"\n\nWrong Option!\n\tTry again.........."<<endl;
                _sleep(2000);
                system("cls");
                return admin();
            }
            else if(choice==0) {
                systemCommand();
                return home();
            }
            else if(choice==1) {
                studentList();
            }
            else if(choice==2) {
                attendanceRecord();
            }
            else if(choice==3) {
                addStudent();
            }
            else if(choice==4) {
                removeAStudent();
            }
            else if(choice==5) {
                removeAllStudents();
            }
            else if(choice==6) {
                attendanceCall();
            }

            
}


int studentList() {

    systemCommand();
    
    sortStudentList();
    sortStudentAttendance();

    cout<<setfill(' ')<<setw(50)<<"STUDENT LIST\n\n\n"<<endl;
    cout<<"searching for result......."<<endl;
    _sleep(2000);
    systemCommand();
    cout<<setfill(' ')<<setw(50)<<"STUDENT LIST\n\n\n"<<endl;
    if(student_list.empty()) {
        cout<<"No Student!"<<endl;
    }
    else {
        int serial_no=1;
        cout<<"  ROLL\tNAME"<<endl;
        for(it=student_list.begin();it!=student_list.end();++it) {
            cout<<serial_no<<". ";
            cout<<it->first<<"\t\t"<<it->second<<endl;
            ++serial_no;
        }
    }

    char c;
    cout<<"\n\n\nPress any key to go back :";
    cin>>c;
    return admin();
}
int attendanceRecord() {
    systemCommand();
    cout<<setfill(' ')<<setw(50)<<"STUDENT ATTENDANCE RECORD!\n\n"<<endl;
    if(student_attendance.empty()) {
        cout<<"Sorry,no Students!\n\n"<<endl;
        cout<<"press any key to go back :";
        char c;
        cin>>c;
        return admin();
    }
    else {
        int serial_no=1;
        cout<<"Total attendance called :"<<total_days<<"\n\n"<<endl;
        cout<<"  ROLL\tATTENDANCE"<<endl;
        for(sa=student_attendance.begin();sa!=student_attendance.end();++sa) {
            cout<<serial_no<<". ";
            cout<<sa->first<<"\t\t"<<sa->second<<endl;
            ++serial_no;
        }
        cout<<"\n\nPress any key to go back :";
        char c;
        cin>>c;
        return admin();
    }
}
int addStudent() {

    systemCommand();
    while(1) {

        cout<<setfill(' ')<<setw(50)<<"ADD A STUDENT\n\n\n"<<endl;
        cout<<"1.add"<<endl;
        cout<<"0.go back\n\n"<<endl;

        cout<<"Choose an Option :";
        int choice;
        cin>>choice;
        if(choice==0) {
            cout<<"\n\n\n\t\tSaving Information......."<<endl;
            _sleep(2000);
            return admin();
        }
        else if(choice==1) {
            systemCommand();
            cout<<setfill(' ')<<setw(50)<<"ADD A STUDENT\n\n\n"<<endl;
            int roll_number;
            string student_name;
            cout<<"enter roll number :";
            cin>>roll_number;
            cout<<"\nenter name :";
            cin>>ws;
            getline(cin,student_name);

            student_list.push_back(make_pair(roll_number,student_name));
            student_attendance.push_back(make_pair(roll_number,0));

            cout<<"\n\n\n\t\tSaving Information......."<<endl;
            _sleep(2000);
            return addStudent();
        }
        else {
            cout<<"\n\nWrong Option!\n\tTry again.........."<<endl;
            _sleep(2000);
            return addStudent();
        }
    }
}
int removeAStudent() {

    systemCommand();
    cout<<setfill(' ')<<setw(50)<<"REMOVE A STUDENT!\n\n"<<endl;
    if(student_list.empty()) {
        cout<<"Sorry,No Students\n\n"<<endl;
        cout<<"press any key to go back :";
        char c;
        cin>>c;
        return admin();
    }
    else {
        while(1) {
            cout<<"1.remove"<<endl;
            cout<<"0.go back\n\n"<<endl;
            cout<<"Choose an Option :";
            int choice;
            cin>>choice;
            if(choice==0) {
                return admin();
            }
            else if(choice==1) {
                systemCommand();
                cout<<setfill(' ')<<setw(50)<<"REMOVE A STUDENT!\n\n"<<endl;
                cout<<"enter roll number :";
                int roll_number;
                cin>>roll_number;
                
                it=student_list.begin();
                sa=student_attendance.begin();

                while(it!=student_list.end() && sa!=student_attendance.end()) {

                    if(it->first==roll_number) {

                        student_list.erase(it);
                        student_attendance.erase(sa);
                        systemCommand();
                        cout<<setfill(' ')<<setw(50)<<"REMOVE A STUDENT!\n\n"<<endl;
                        cout<<"\n\n\tRemoving Student.......\n"<<endl;
                        _sleep(1500);
                        cout<<"Removed!\n\n"<<endl;
                        cout<<"Press any key to go back. :";
                        char c;
                        cin>>c;
                        return removeAStudent();
                    }
                    ++it;
                    ++sa;
                }
                    systemCommand();
                    cout<<setfill(' ')<<setw(50)<<"REMOVE A STUDENT!\n\n"<<endl;
                    cout<<"Sorry,No such roll number!\n\n"<<endl;
                    cout<<"Press any key to go back. :";
                    char c;
                    cin>>c;
                    return removeAStudent();
            }
            else {
                systemCommand();
                cout<<setfill(' ')<<setw(50)<<"REMOVE A STUDENT!\n\n"<<endl;
                cout<<"\n\nWrong Option!\n\tTry again.........."<<endl;
                _sleep(2000);
                return removeAStudent();
            }
        }
    }
    
}
int removeAllStudents() {

    systemCommand();
    cout<<setfill(' ')<<setw(50)<<"REMOVE ALL STUDENTS!\n\n"<<endl;
    cout<<"removing all students......."<<endl;
    _sleep(1500);
    cout<<"\tremoving all students........"<<endl;
    student_list.clear();
    student_attendance.clear();
    _sleep(1500);
    systemCommand();
    cout<<setfill(' ')<<setw(50)<<"REMOVE ALL STUDENTS!\n\n"<<endl;
    cout<<"\t\tremoved all students.\n\n"<<endl;

    cout<<"Press any key to go back. :";
    char c;
    cin>>c;

    return admin();
}
int attendanceCall() {
    systemCommand();
    cout<<setfill(' ')<<setw(50)<<"ATTENDANCE CALL\n\n"<<endl;

    if(student_attendance.empty()) {
        cout<<"Sorry,no Students!\n\n"<<endl;
        cout<<"Press any key to go back :";
        char c;
        cin>>c;
        return admin();
    }
    else {
        ++total_days;

        it=student_list.begin();
        sa=student_attendance.begin();
        while(it!=student_list.end() && sa!=student_attendance.end()) {
            systemCommand();
            cout<<setfill(' ')<<setw(50)<<"ATTENDANCE CALL\n\n"<<endl;
            cout<<"p-present\na-absent\n\n"<<endl;
            cout<<it->first<<"\t";
            char c;
            cin>>c;

            if(c=='p') {
                ++sa->second;
            }
            ++it;
            ++sa;
        }
        cout<<"\n\n\t\tEnd of call!"<<endl;
        cout<<"\n\n\n\t\tSaving Information......."<<endl;
        _sleep(1500);
        systemCommand();
        cout<<setfill(' ')<<setw(50)<<"ATTENDANCE CALL\n\n"<<endl;
        cout<<"\n\n\n\t\tSaved Information!\n\n"<<endl;
        cout<<"Press any key to go back :";
        char c;
        cin>>c;

        return admin();
    }
}




int student() {
    systemCommand();
    cout<<setfill(' ')<<setw(50)<<"STUDENT\n\n"<<endl;
    if(student_list.empty()) {
        cout<<"Sorry,no students!\n\n"<<endl;
        cout<<"Press any key to go back :";
        char c;
        cin>>c;
        systemCommand();
        return home();
    }
    else {
        cout<<"enter roll number :";
        int roll_number;
        cin>>roll_number;

        it=student_list.begin();
        sa=student_attendance.begin();

        int serial_no=0;
        while(it!=student_list.end() && sa!=student_attendance.end()) {
            if(it->first==roll_number) {
                ++serial_no;
                systemCommand();
                cout<<setfill(' ')<<setw(50)<<"STUDENT\n\n"<<endl;
                cout<<serial_no<<".  "<<roll_number<<"  "<<it->second<<"  "<<sa->second<<endl;
                cout<<"\n\n\nPress any key to go back :";
                char c;
                cin>>c;
                systemCommand();
                return home();
            }
            ++it;
            ++sa;
        }
        cout<<"\n\nSorry,no such roll number!\n\n"<<endl;
        cout<<"Press any key to go back :";
        char c;
        cin>>c;
        systemCommand();
        return home();
    }
}