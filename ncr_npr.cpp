// Pascal Triangle :-

// 1                0C0
// 1 1              1C0 1C1
// 1 2 1            2C0 2C1 2C2
// 1 3 3 1          3C0 3C1 3C2 3C3
// 1 4 6 4 1        4C0 4C1 4C2 4C3 4C4


#include <iostream>
using namespace std;

int fact(int n)
{
    int factorial = 1;
    for (int i = 2; i <= n; i++)
    {
        factorial *= i;
    }
    return factorial;
}
int main()
{
    int n, r;
    cout << "Enter value of n : ";
    cin >> n;
    cout << "Enter the value of r : ";
    cin >> r;

        // nPr = n!/(n-r)!
        // nCr = n!/((n – r)!r!)

    int ans = fact(n) / (fact(r) * fact(n - r));
    cout << n, cout << " C ", cout << r, cout << " = ",cout << ans;
    return 0;
}