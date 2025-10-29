#include <bits/stdc++.h>
using namespace std;

double f(double x) {
    return log(3*x) - 3; 
}

int main() {
    double a = 1.0, b = 10.0; 
    double fa = f(a), fb = f(b);

    if (fa * fb > 0) {
        cout << "No root found in this interval!" << endl;
        return 0;
    }

    double xr = a;
    double prev_xr;
    double eps = 1e-4; // error tolerance
    int iteration = 0;

    cout << fixed << setprecision(6);

    do {
        prev_xr = xr;
        xr = (a * fb - b * fa) / (fb - fa);
        double fr = f(xr);

        double approx_error = 0.0;
        if (iteration > 0)
            approx_error = fabs((xr - prev_xr) / xr) * 100.0;

        cout << iteration + 1 << "\t" << a << "\t" << b << "\t" 
             << xr << "\t" << fr << "\t" << approx_error << endl;
        if (fa * fr < 0) {
            b = xr;
            fb = fr;
        } else {
            a = xr;
            fa = fr;
        }

        iteration++;
        if (approx_error < eps * 100 && iteration > 1)
            break;

    } while (iteration < 100);

    cout << "\nEstimated root = " << xr << endl;
    return 0;
}
