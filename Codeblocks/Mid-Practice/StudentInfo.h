#ifndef STUDENTINFO_H
#define STUDENTINFO_H

#include <iostream>
#include<string>

using namespace std;

class StudentInfo {
public:
    int getid();
    string getname();
    float getcgpa();

    StudentInfo();
    StudentInfo(int, string, float);
    void Print();
    bool operator == (const StudentInfo);
    bool operator != (const StudentInfo);
    bool operator < (const StudentInfo);
    bool operator > (const StudentInfo);

private:
    int id;
    string name;
    float cgpa;
};

#endif
