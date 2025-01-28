#include <iostream>
using namespace std;

// Function to determine the quadrant of a point
void findQuadrant(int x, int y) {
    if (x > 0 && y > 0) {
        cout << "The point (" << x << ", " << y << ") lies in Quadrant I." << endl;
    } else if (x < 0 && y > 0) {
        cout << "The point (" << x << ", " << y << ") lies in Quadrant II." << endl;
    } else if (x < 0 && y < 0) {
        cout << "The point (" << x << ", " << y << ") lies in Quadrant III." << endl;
    } else if (x > 0 && y < 0) {
        cout << "The point (" << x << ", " << y << ") lies in Quadrant IV." << endl;
    } else if (x == 0 && y == 0) {
        cout << "The point (" << x << ", " << y << ") lies at the Origin." << endl;
    } else if (x == 0) {
        cout << "The point (" << x << ", " << y << ") lies on the Y-axis." << endl;
    } else if (y == 0) {
        cout << "The point (" << x << ", " << y << ") lies on the X-axis." << endl;
    }
}

int main() {
    int x, y;

    // Take user input for the coordinates
    cout << "Enter the X-coordinate: ";
    cin >> x;
    cout << "Enter the Y-coordinate: ";
    cin >> y;

    // Call the function to determine the quadrant
    findQuadrant(x, y);

    return 0; // Indicate successful execution
}
