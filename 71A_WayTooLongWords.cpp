#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    for (size_t i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        int abr = s.size() - 2;
        if (s.size() > 10)
        {
            cout << s[0] << abr << s[s.length() - 1] << endl;
        }
        else
        {
            cout << s << endl;
        }
    }

    return 0;
}
