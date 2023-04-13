#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
  int n, a;
  cin >> n;
  vector<int> arr;
  for (int i = 0; i < n; i++)
  {
    cin >> a;
    arr.push_back(a);
  }
  sort(arr.begin(),arr.end());
  while (arr.size() > 0)
  {
    cout << arr.size() << endl;
    int min = arr[0];

    for (int i = 0; i < arr.size(); i++)
    {
      arr[i] = arr[i] - min;
    }

    arr.erase(remove(arr.begin(), arr.end(), 0), arr.end());
  }


return 0;
}