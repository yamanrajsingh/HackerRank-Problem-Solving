#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, r, count = 0;
        cin >> n;
        int temp = n;
        while (n > 0)
        {
            r = n % 10;
            if (r != 0)
            {

                if (temp % r == 0)
                {

                    count++;
                }
            }
            n = n / 10;
        }
        cout << count << endl;
    }

    return 0;
}
