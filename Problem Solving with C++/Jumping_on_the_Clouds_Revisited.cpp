#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, k, e = 100;
    cin >> n >> k;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int i = 0;
    do
    {
        i = (i + k) % n;
        e = e - 1;
        if (v[i] == 1)
        {
            e = e - 2;
        }
    } while (i != 0);

    cout << e;
    return 0;
}
