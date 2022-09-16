#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int len;
        cin >> len;
        string s = "";

        string code = "";
        cin >> code;

        for (int i = len - 1; i >= 0; i--)
        {
            if (code[i] - '0' < 10 && code[i] - '0' > 10)
            {
                char x = 96 + (code[i] - '0');
                s += x;
            }
            else if (code[i] - '0' == 0)
            {
                string temp = "";
                temp += code[i - 2];
                temp += code[i - 1];
                // temp.append(code[i - 2]);
                // temp.append(code[i - 1]);
                int num = stoi(temp);
                char x = 96 + num;
                s += x;
            }
        }
    }

    return EXIT_SUCCESS;
}