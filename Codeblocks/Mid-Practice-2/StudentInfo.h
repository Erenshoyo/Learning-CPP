#ifndef STUDENTINFO_H
#define STUDENTINFO_H
#include<string>
using namespace std;

class studentInfo
{
public :
    studentInfo();
    studentInfo(int, string, float);
    void Print();
    bool operator == (const studentInfo& other) const;
private:
    int id;
    string name;
    float cgpa;
};

#endif // STUDENTINFO_H
