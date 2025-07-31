#include "student.h"
#include<iostream>
using namespace std;

Student::Student()
{

}

Student::Student(string n, int i)
{
    name = n;
    id = i;
}

string Student::getName(){
    return name;
}

int Student::getId(){
    return id;
}

void Student::print(){
    cout<<"Name: "<<name<<"\nID: "<<id<<endl;
}

bool Student::operator==(Student s){
    return id==s.getId();
}

bool Student::operator>(Student s){
    return id>s.getId();
}

bool Student::operator<(Student s){
    return id<s.getId();
}
