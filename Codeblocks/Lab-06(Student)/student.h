#ifndef STUDENT_H
#define STUDENT_H
#include<string>
using namespace std;


class Student
{
    public:
        Student();
        Student(string, int);
        string getName();
        int getId();
        void print();
        bool operator==(Student);
        bool operator>(Student);
        bool operator<(Student);

    private:
        string name;
        int id;
};

#endif // STUDENT_H
