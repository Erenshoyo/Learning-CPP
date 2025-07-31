#include "StudentInfo.h"

StudentInfo::StudentInfo() {
    id = 0;
    name = " ";
    cgpa = 0.0;
}

StudentInfo::StudentInfo(int i, string n, float c){
    id = i;
    name = n;
    cgpa = c;
}

string StudentInfo::getname(){
    return name;
}

int StudentInfo::getid(){
    return id;
}

float StudentInfo::getcgpa(){
    return cgpa;
}


void StudentInfo::Print(){
    cout << id << ", " << name << ", " << cgpa << endl;
}

bool StudentInfo::operator == (StudentInfo s) {
    return id == s.getid();
}

bool StudentInfo::operator != (StudentInfo s) {
    return id != s.getid();
}

bool StudentInfo::operator < (StudentInfo s) {
    return id < s.getid();
}

bool StudentInfo::operator > (StudentInfo s) {
    return id > s.getid();
}
