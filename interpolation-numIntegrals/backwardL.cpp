#include <iostream>
using namespace std;

int main()
{
    int n, i, j;
    float x[10], y[10][10], value, h, p, sum, term;

    cout << "ENTER NUMBER OF DATA POINTS: ";
    cin >> n;

    cout << "\nENTER X VALUES:\n";
    for(i = 0; i < n; i++)
        cin >> x[i];

    cout << "\nENTER Y VALUES:\n";
    for(i = 0; i < n; i++)
        cin >> y[i][0];   // FIXED

    // Backward difference table
    for(j = 1; j < n; j++)
    {
        for(i = n - 1; i >= j; i--)
        {
            y[i][j] = y[i][j-1] - y[i-1][j-1];
        }
    }

    cout << "\nENTER THE VALUE OF X TO INTERPOLATE: ";
    cin >> value;

    h = x[1] - x[0];
    p = (value - x[n-1]) / h;

    sum = y[n-1][0];
    term = 1;

    for(i = 1; i < n; i++)
    {
        term = term * (p + i - 1) / i;
        sum = sum + term * y[n-1][i];
    }

    cout << "\nINTERPOLATED VALUE = " << sum;

    return 0;
}
