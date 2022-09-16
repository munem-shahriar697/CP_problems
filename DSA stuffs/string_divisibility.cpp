#include <bits/stdc++.h>

using namespace std;

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

    string s;
    std::cin >> s;

    if (divisible(s, 2))
        std::cout << "Divisible" << endl;
    else
        std::cout << "Not divisible" << endl;

    return EXIT_SUCCESS;
}