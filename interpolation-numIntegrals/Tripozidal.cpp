#include <iostream>
#include <cmath>
using namespace std;

float f(float x)
{
    return 1/(1+x*x);
}

int main()
{
    float a, b, h, sum = 0;
    int n, i;

    cout << "ENTER LOWER LIMIT: ";
    cin >> a;

    cout << "\nENTER UPPER LIMIT: ";
    cin >> b;

    cout << "\nENTER NUMBER OF INTERVAL: ";
    cin >> n;

    h = (b - a) / n;

    sum = f(a) + f(b);

    for(i = 1; i < n; i++)   // ? FIXED LOOP
    {
        sum = sum + 2 * f(a + i * h);
    }

    float integral = (h / 2) * sum;

    cout << "INTEGRAL = " << integral;

    return 0;
}
