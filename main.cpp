#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

bool divisible(string s, int n)
{
    int rem = 0, len = s.size();
    for (int i = 0; i < len; i++)
    {
        int dig = s[i] - '0';
        rem = (rem * 10) + dig;
        rem = rem % n;
    }
    if (rem == 0)
    {
        return true;
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, k = 0;
    std ::cin >> t;

    while (t--)
    {
        string s;
        std ::cin >> s;
        if (s[1] == '+')
            k++;
        if (s[1] == '-')
            k--;
    }

    std ::cout << k << endl;

    return EXIT_SUCCESS;
}