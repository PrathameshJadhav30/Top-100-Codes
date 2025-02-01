#include <iostream>
#include <cmath>

using namespace std;

void findRoots(double a, double b, double c) {
    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Roots are real and distinct: " << root1 << " , " << root2 << endl;
    } 
    else if (discriminant == 0) {
        double root = -b / (2 * a);
        cout << "Roots are real and equal: " << root << endl;
    } 
    else {
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        cout << "Roots are complex and imaginary: " 
             << realPart << " + " << imaginaryPart << "i , " 
             << realPart << " - " << imaginaryPart << "i" << endl;
    }
}

int main() {
    double a, b, c;
    
    cout << "Enter coefficients a, b, and c: ";
    cin >> a >> b >> c;

    if (a == 0) {
        cout << "Invalid input! 'a' cannot be zero in a quadratic equation." << endl;
    } 
    else {
        findRoots(a, b, c);
    }

    return 0;
}
