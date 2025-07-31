#include <iostream>
#include "sortedtype.cpp"
#include "student.h"

using namespace std;

int main()
{
    SortedType<Student> sl;

    sl.InsertItem(Student("Tauhid", 21));
    sl.InsertItem(Student("Asif", 22));

    sl.DeleteItem(Student("Asif", 22));

    sl.ResetList();
    Student temp;


    for(int i=0; i < sl.LengthIs(); i++){
        sl.GetNextItem(temp);
        temp.print();
    }
    return 0;
}
