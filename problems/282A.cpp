#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

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