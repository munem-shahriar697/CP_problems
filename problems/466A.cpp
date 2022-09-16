#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, a, b;
    std ::cin >> n >> m >> a >> b;

    int normal = n * a;
    int special = ((n / m) + (n % m)) * b;

    if (normal <= special)
        std::cout << normal << endl;
    else
        std ::cout << special << endl;

    return EXIT_SUCCESS;
}