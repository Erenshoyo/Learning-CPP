/*  class-1:
    #include <iostream>

int main () {
    // This is a comment.
    /*
        This
        Is
        a
        multi-line
        comment
    *./
    std::cout << "Hello World" << std::endl;
    std::cout << "My name is Tauhid" << std::endl;
    return 0;
}
*/

// class-2:

// #include <iostream>

// int main() {
//     int x; //Declaration
//     x = 5; //assignment

//     int y = 6;
//     int sum = x + y;

//     std::cout << x << '\n';
//     std::cout << y << '\n';
//     std::cout << sum << '\n';

//     return 0;
// }
// #include <iostream>

// int main() {
    
//     //Integer data type
//     int age = 21; //Declaration
//     int year = 2023; //assignment
//     int days = 7;

//     //Double data type
//     double price = 5.99;
//     double gpa = 2.5;
//     double temp = 25.1;

//     //Character data type(Single character)
//     char grade = 'A';
//     char initial = 'B';
//     char symbol = '$';
    
//     //Boolean data type(True/False)
//     bool student = true;
//     bool power = true;
//     bool forSale = false;
//     bool isTrue = false;

//     //String data type(Objects that represents a sequence of text)
//     std::string name = "Tauhid";
//     std::string day = "Friday";
//     std::string food = "Kacchi Biryani";
//     std::string address = "Tongi Gazipur,Dhaka, Bangladesh";

//     std::cout << grade << '\n';
//     std::cout << name << '\n';
//     std::cout << "Hello "<< name << '\n';
//     std::cout << "You are "<< name << " years old "<< '\n';

//     return 0;
// }

// class-3:

// #include <iostream>
// int main() {
//     //The const keyword specifies that a variable's value is constant and cannot be changed.
//     //tells the compiler to prevent anything from modifying it.
//     //(read only)

//     const double PI = 3.14;
//     const int LIGHT_SPEED = 299792458;
//     const int width = 1920;
//     const int height = 1080;
    

//     double radius = 7;
//     double circumference = 2* PI * radius;

//     std::cout <<"Circumference of the circle is: " << circumference << " cm" << '\n';

//     return 0;
// }

// class-4: 

// #include <iostream>
// namespace first{
//     int x = 1;
// }
// namespace second{
//     int x = 2;
// }

// int main() {

//     //Namespace = provides a solution for preventing name conflicts in large projects. Each entity needs a unique name. A namespace allows for identically named entities as long as the namespaces are different.

//     // int x = 0;
//     // //int x = 1; //Error: redeclaration of 'x' in the same scope

//     // std::cout << x << '\n'; // without namespace.
//     // std::cout << first::x << '\n'; //namespace-first.
//     // std::cout << second::x << '\n'; //namespace-second.
//     using namespace first;

//     std::cout << x << '\n';

//     return 0;
// }

//class-5:

// #include <iostream>
// #include <vector>
// //typedef std::vector<std::pair<std::string, int>> pairlist_t;

// //typedef std::string text_t;
// //typedef int number_t;

// using text_t = std::string;
// using number_t = int;

// int main() {
//     // typedef = reserved keyword used to create an additional name (alias) for an existing datatype.
//     // Bew identifier for an existing type.
//     // helps with readability and reduces typos.
//     //Use when there is a clear benefit.
//     // Replaced with 'using' keyword in C++11 (work better w/ templates).

//     text_t firstName = "Tauhid";
//     number_t age = 23;

//     std::cout << firstName << '\n';
//     std::cout << age << '\n';
//     return 0;
// }

// class-6:

// #include <iostream>

// int main() {
//     //Arithmetic operators = return the result of a specific arithmetic operation (+,-,*,/,%)

//     // Operator precedence = the order in which operations are performed in an expression.
//     // 1. Parentheses
//     // 2. Exponentiation
//     // 3. Multiplication and division
//     // 4. Addition and subtraction

//     int students = 20;
//     int std1 = students + 2;
//     int std2 = students - 2;
//     int std3 = students * 2;
//     int std4 = students / 2;

//     std::cout << std1 << '\n';
//     std::cout << std2 << '\n';
//     std::cout << std3 << '\n';
//     std::cout << std4 << '\n';
    
//     return 0;
// }   

//class-7:

// #include <iostream>

// int main() {
//     //type conversion = conversion of a value of one data type to another.
//     //                  implicit conversion = automatic
//     //                  explicit conversion = Precede value with new data type (int)
//     // char x = 100;
//     // std::cout << (char) 100 << '\n';

//     int correct = 8;
//     int questions = 10;
//     double percentage = correct / (double)questions *100;
    
//     std::cout << percentage << '%';

//     return 0;
// }

//class-8:

#include <iostream>

//cout << (insertion operator) = used to output data.
//cin >> (extraction operator) = used to input data.

int main() {
    std::string name;
    int age;

    std::cout << "What is your Full name? " << '\n';
    std::getline(std::cin >> std::ws, name);

    std::cout << "Hello " << name << '\n';
    
    std::cout << "What is your age? " << '\n';
    std::cin >> age;

    std::cout << "You are " << age << " years old." << '\n';

    return 0;
}