#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    std ::cin >> n;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        std ::cin >> x;
        sum += x;
    }

    if (sum == 0)
        std ::cout << "EASY" << endl;
    else
        std ::cout << "HARD" << endl;

    return EXIT_SUCCESS;
}