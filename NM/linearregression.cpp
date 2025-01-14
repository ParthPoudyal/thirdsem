#include <iostream>
using namespace std;

int main() {
   
    int n;
    double x[20], y[20];
    double sumX = 0, sumX2 = 0, sumY = 0, sumXY = 0, a, b;

 
    cout << "Enter the number of data points (n): ";
    cin >> n;

    if (n > 20 || n <= 0) {
        cout << "Number of data points must be between 1 and 20." << endl;
        return 1;
    }

  
    cout << "Enter the values of X and Y:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "X[" << i + 1 << "]: ";
        cin >> x[i];
        cout << "Y[" << i + 1 << "]: ";
        cin >> y[i];
    }

    for (int i = 0; i < n; i++) {
        sumX += x[i];
        sumX2 += x[i] * x[i];
        sumY += y[i];
        sumXY += x[i] * y[i];
    }

    
    b = (n * sumXY - sumX * sumY) / (n * sumX2 - sumX * sumX);
    a = (sumY - b * sumX) / n;

 
    cout << "\nThe values of the constants are:\n";
    cout << "a (intercept): " << a << endl;
    cout << "b (slope): " << b << endl;

    
    cout << "\nThe equation of the best-fit line is: y = " << a << " + " << b << "x" << endl;

    return 0;
}
