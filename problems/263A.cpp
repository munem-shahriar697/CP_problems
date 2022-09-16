#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[5][5];
    int move = 0;
    int row, col;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            std ::cin >> arr[i][j];
            if (arr[i][j] == 1)
            {
                row = i;
                col = j;
            }
        }
    }

    move += abs(row - 2);
    move += abs(col - 2);

    std ::cout << move << endl;

    return EXIT_SUCCESS;
}