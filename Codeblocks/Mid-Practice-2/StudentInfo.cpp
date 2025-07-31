#include<iostream>
#include "StudentInfo.h"
using namespace std;

studentInfo::studentInfo(){
    id = 0;
    name = "";
    cgpa = 0.0;
}

studentInfo::studentInfo(int i, string n, float c)
{
    id = i;
    name = n;
    cgpa = c;
}

void studentInfo::Print()
{
    cout << id << ", " << name << ", " << cgpa << endl;
}

// Fixed: Added studentInfo:: scope and proper const placement
bool studentInfo::operator == (const studentInfo& other) const
{
    return (id == other.id);
}
