#include <iostream>
#include "unsortedType.cpp"
#include "StudentInfo.h"

using namespace std;
int main() {

    UnsortedType<int> l;
    l.InsertItem(5);
    l.InsertItem(7);
    l.InsertItem(6);
    l.InsertItem(9);

    l.ResetList();
    for(int i = 0; i < l.LengthIs(); i++ )
    {
        int temp;
        l.GetNextItem(temp);
        cout << temp << " ";
    }

    cout << endl;

    cout << l.LengthIs() << endl;

    l.InsertItem(1);
    l.ResetList();
    for(int i = 0; i < l.LengthIs(); i++ )
    {
        int temp;
        l.GetNextItem(temp);
        cout << temp << " ";
    }

    cout << endl;

    int x1 = 4;
    bool f1;

    l.RetrieveItem(x1, f1);
    if(f1 == 1) cout << "Item is found" << endl;
    else cout << "Item is not found" << endl;

    int x2 = 5;
    bool f2;

    l.RetrieveItem(x2, f2);
    if(f2 == 1) cout << "Item is found" << endl;
    else cout << "Item is not found" << endl;

    int x3 = 9;
    bool f3;

    l.RetrieveItem(x3, f3);
    if(f3 == 1) cout << "Item is found" << endl;
    else cout << "Item is not found" << endl;

    int x4 = 10;
    bool f4;

    l.RetrieveItem(x4, f4);
    if(f4 == 1) cout << "Item is found" << endl;
    else cout << "Item is not found" << endl;

    if(l.IsFull() == 1) cout << "List is full" << endl ;
    else cout << "List is not full" << endl;

    l.DeleteItem(5);
    l.ResetList();
    if(l.IsFull() == 1) cout << "List is full" << endl ;
    else cout << "List is not full" << endl;

    l.DeleteItem(1);
    l.ResetList();
    for(int i = 0; i < l.LengthIs(); i++ )
    {
        int temp;
        l.GetNextItem(temp);
        cout << temp << " ";
    }

    cout << endl;

    l.DeleteItem(6);
    l.ResetList();
    for(int i = 0; i < l.LengthIs(); i++ )
    {
        int temp;
        l.GetNextItem(temp);
        cout << temp << " ";
    }

    UnsortedType<studentInfo> sl;
    sl.InsertItem(studentInfo(15234, "Jon", 2.6));
    sl.InsertItem(studentInfo(13732, "Tyrion", 3.9));
    sl.InsertItem(studentInfo(13569, "Sandor", 1.2));
    sl.InsertItem(studentInfo(15467, "Ramsey", 3.1));
    sl.InsertItem(studentInfo(16285, "Arya", 3.1));

    sl.DeleteItem(studentInfo(15467, "", 0.0));





















    /*// =======================================================

    std::cout << "\n====== Student List Test ======" << std::endl;
    UnsortedType<StudentInfo> studentList;

    // Insert students
    studentList.InsertItem(StudentInfo(15234, "Jon", 2.6));
    studentList.InsertItem(StudentInfo(13732, "Tyrion", 3.9));
    studentList.InsertItem(StudentInfo(13569, "Sandor", 1.2));
    studentList.InsertItem(StudentInfo(15467, "Ramsay", 3.1));
    studentList.InsertItem(StudentInfo(16285, "Arya", 3.1));
    PrintStudentList(studentList);

    // Delete a student by ID
    std::cout << "Deleting student with ID 15467..." << std::endl;
    StudentInfo studentToDelete(15467, "", 0.0); // Only ID matters for comparison
    studentList.DeleteItem(studentToDelete);
    PrintStudentList(studentList);

    // Retrieve a student by ID
    bool found;
    StudentInfo studentToRetrieve(13732, "", 0.0);
    studentList.RetrieveItem(studentToRetrieve, found);
    if (found) {
        std::cout << "Found student: ";
        studentToRetrieve.Print();
    }*/

    return 0;
}
