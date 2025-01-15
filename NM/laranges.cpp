#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int x[100], y[100]; 
    float xp, yp = 0;  // Initialize yp to 0
    int n;

    // Input the number of datasets
    cout << "Enter the number of data points: ";
    cin >> n;

    // Input x and y values
    cout << "Enter the values of x and y, separated by spaces:\n";
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    // Input the value of x for which y is to be found
    cout << "Enter the value of x for which y is to be found using interpolation: ";
    cin >> xp;

    // Lagrange interpolation
    for (int i = 0; i < n; i++) {
        float p = 1;  // Initialize p for each term
        for (int j = 0; j < n; j++) {
            if (i != j) {
                p *= (xp - x[j]) / (x[i] - x[j]);
            }
        }
        yp += p * y[i];  
    }

    // Display the result
    cout << fixed << setprecision(4);  
    cout << "The interpolated value at xp = " << xp << " is yp = " << yp << endl;
    cout << "Done by Parth \n";

    return 0;
}
