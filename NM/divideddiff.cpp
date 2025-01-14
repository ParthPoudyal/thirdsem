#include <iostream>
#include <vector>
using namespace std;

int main() {
    int x[10], y[10], p[10];
    int n; // Number of data points
    cout << "Enter the number of data points: ";
    cin >> n;
    

    // Input x and y values
    cout << "Enter the x values: ";
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }

    cout << "Enter the y values: ";
    for (int i = 0; i < n; i++) {
        cin >> y[i];
    }

    double k; // Value of x for which interpolation is required
    cout << "Enter the value of k: ";
    cin >> k;

    double f = 0, f1 = 1, f2 = 0;
    int j = 1;

    // Compute Divided Differences
    while (n > 1) {
        for (int i = 0; i < n - 1; i++) {
            p[i] = (y[i + 1] - y[i]) / (x[i + j] - x[i]);
            y[i] = p[i];
        }

        f1 = 1;
        for (int i = 0; i < j; i++) {
            f1 *= (k - x[i]);
        }

        f2 = y[0] * f1;

        // Update f and decrease n
        f += f2;
        n--;
        j++;
    }

    // Output the interpolated value
    cout << "The interpolated value at k = " << k << " is: " << f << endl;

    return 0;
}
