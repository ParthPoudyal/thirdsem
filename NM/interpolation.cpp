#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    float x[10], y[10], diff[10][10] = {0};
    float xp, p, h, nr = 1, dr = 1, yp;

    // Input number of data points
    cout << "Enter the number of data points (n): ";
    cin >> n;

    // Input x and y values
    cout << "Enter the values of x and y respectively:\n";
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    // Calculate h
    h = x[1] - x[0];

    // Input xp
    cout << "Enter the value of xp (the value of x for which y is to be found): ";
    cin >> xp;

    // Calculate forward differences
    for (int i = 0; i < n - 1; i++) {
        diff[i][1] = y[i + 1] - y[i];
    }

    for (int j = 2; j < n; j++) {
        for (int i = 0; i < n - j; i++) {
            diff[i][j] = diff[i + 1][j - 1] - diff[i][j - 1];
        }
    }

    // Perform interpolation
    p = (xp - x[0]) / h;
    yp = y[0];

    for (int k = 1; k < n; k++) {
        nr *= (p - (k - 1));
        dr *= k;
        yp += (nr / dr) * diff[0][k];
    }

    // Output the result
    cout << fixed << setprecision(4);
    cout << "The interpolated value at xp = " << xp << " is yp = " << yp << endl;
    cout << "done by Parth 😀"; 
    return 0;

}
