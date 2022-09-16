#include <iostream>
using namespace std;
class rec
{
    int a;

public:
    int fib(int);
};
int rec::fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
    return 0;
}
int main()
{
    rec obj;
    cout << obj.fib(6) << " ";
    return 0;
}
