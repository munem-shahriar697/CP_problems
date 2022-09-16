#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    std ::cin >> s;
    int counter = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '4' or s[i] == '7')
            counter++;
    }
    if (counter == 4 or counter == 7)
        std ::cout << "YES" << endl;
    else
        std ::cout << "NO" << endl;

    return EXIT_SUCCESS;
}