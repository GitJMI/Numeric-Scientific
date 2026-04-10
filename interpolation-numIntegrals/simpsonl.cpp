#include <iostream>
#include <cmath>
using namespace std;

// Function definition
float f(float x)
{
    return 1 / (1 + x * x);
}

int main()
{
    float a, b, h, sum = 0;
    int n, i;

    cout << "Enter lower limit (a): ";
    cin >> a;

    cout << "Enter upper limit (b): ";
    cin >> b;

    cout << "Enter number of intervals (multiple of 3): ";
    cin >> n;

    // Check condition
    if (n % 3 != 0)
    {
        cout << "Error: n must be a multiple of 3!";
        return 0;
    }

    h = (b - a) / n;

    sum = f(a) + f(b);

    for (i = 1; i < n; i++)
    {
        if (i % 3 == 0)
            sum += 2 * f(a + i * h);
        else
            sum += 3 * f(a + i * h);
    }

    float integral = (3 * h / 8) * sum;

    cout << "Integral = " << integral;

    return 0;
}
