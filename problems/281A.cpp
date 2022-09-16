#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    std ::cin >> s;

    if (s[0] > 90)
        s[0] -= 32;

    std ::cout << s << endl;

    return EXIT_SUCCESS;
}