#include <bits/stdc++.h> 
using namespace std;

int main() {
    float rad, area;

    // Taking user input for radius
    cout << "Enter the radius of the circle: ";
    cin >> rad;

    // Calculating area using πr² formula
    area = 3.14 * rad * rad;

    // Displaying the result
    cout << "Area of the circle is " << area << endl;

    return 0;
}
