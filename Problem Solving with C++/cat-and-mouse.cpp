#include <iostream>
using namespace std;
int main()
{
    int q;
    cin >> q;
   
    for (int i = 0; i < q; i++)
    {
         int x, y, z;
        cin >> x >> y >> z;

        int d1, d2;
        d1 = z - x;
        d2 = z - y;
        if (d1 < 0)
        {
            d1 = d1 * (-1);
        }
        if (d2 < 0)
        {
            d2 = d2 * (-1);
        }

        if (d1 < d2)
        {
            cout << "Cat A" << endl;
        }
        else if (d1 == d2)
        {
            cout << "Mouse C" << endl;
            ;
        }

        else
        {
            cout << "Cat B" << endl;
        }
    }

    return 0;
}