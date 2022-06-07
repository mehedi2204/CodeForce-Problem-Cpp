#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, p, v, t, number(0);
    cin >> n;
    for (size_t i = 0; i < n; i++)
    {
        cin >> p >> v >> t;
        if (p + v + t >= 2)
        {
            number += 1;
        }
    }
    cout << number << endl;

    return 0;
}
