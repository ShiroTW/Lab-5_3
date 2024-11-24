#include <iostream>
#include <cmath>
using namespace std;

double h(const double x); // Прототип функции h(x)

int main()
{
    double tp, tk, res;
    int n;

    cout << "tp = "; cin >> tp;
    cout << "tk = "; cin >> tk;
    cout << "n = "; cin >> n;
    cout << endl;

    double dt = (tk - tp) / n;

    double t = tp;

    while (t <= tk)
    {
        res = h(1 + sqrt(t)) + pow(h(1 + t + pow(h(t), 2)), 2);

        cout << "t = " << t << ", res = " << res << endl;
        t += dt;
    }
    return 0;
}

double h(const double x)
{
    if (abs(x) >= 1)
    {
        return 1 + cos(x) * exp(-2 * x);
    }
    else
    {
        double S = 0.0;
        for (int n = 0; n <= 5; ++n)
        {
            double term = pow(x, 3 * n + 1) / tgamma(3 * n + 2); // (3n+1)! = tgamma(3n+2)
            S += term;
        }
        return S;
    }
}