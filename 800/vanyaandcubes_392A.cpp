#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int level = 1;
    int height = 0;

    while (true)
    {
        int need = level * (level + 1) / 2;

        if (n >= need)
        {
            n -= need;
            height++;
            level++;
        }
        else
        {
            break;
        }
    }

    cout << height;

    return 0;
}