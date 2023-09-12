// https://open.kattis.com/problems/sorttwonumbers
#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned int a, b, temp;
    cin >> a >> b;

    if (a > b)
    {
        temp = b;
        b = a;
        a = temp;
    }

    cout << a << " " << b << endl;

    return 0;
}