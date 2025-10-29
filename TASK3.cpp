#include <bits/stdc++.h>
using namespace std;

double f(double x) {
    return pow(x, 5) - 3*x + 5;
}

double df(double x) {
    return 5*pow(x, 4) - 3;
}

int main() {
    double x0;
    cin >> x0;

    double eps = 1e-3;
    double x1, error = 100.0;

    while (error > eps && x0 < 1e9) {
        double fx = f(x0);
        double dfx = df(x0);
        if(dfx == 0) break;
        x1 = x0 - fx / dfx;
        error = fabs((x1 - x0) / x1) * 100.0;
        x0 = x1;
    }

    cout << fixed << setprecision(6) << x1 << endl;
    return 0;
}
