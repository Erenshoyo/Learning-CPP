#include <iostream>
#include<cmath>

int main(){
    //Pythagorean theorem
    double a;
    double b;
    double c;

    std::cout << "Enter the value of the Base(in cm): " << '\n';
    std::cin >> a;
    
    std::cout << "Enter the value of the vertical line(in cm): " << '\n';
    std::cin >> b;
    
    a = pow(a, 2);
    b = pow(b, 2);
    c = sqrt(a + b);
    //c = sqrt(pow(a,2) + pow(b, 2));

    std::cout << "The value of the the Hypotenuse is: " << c << " cm.";

    return 0;
}