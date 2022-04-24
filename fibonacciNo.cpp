#include <iostream>
using namespace std;
void fib(int n)
{
    int num1 = 0;
    int num2 = 1;
    int nextNum;
    for (int i = 1; i <= n; i++)
    {
        cout << num1, cout << " ";
        nextNum = num1 + num2;
        num1 = num2;
        num2 = nextNum;
    }
    return;
}
int main()
{
    int n;
    cout << "Enter a number :";
    cin >> n;
    fib(n);
    return 0;
}