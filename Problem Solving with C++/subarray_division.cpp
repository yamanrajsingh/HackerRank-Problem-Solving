#include <iostream>
#include <vector>

using namespace std;

int birthday(vector<int> s, int d, int m) {
    int count = 0;
    int n = s.size();

    if (n < m) { // edge case
        return 0;
    }

    int sum = 0;
    for (int i = 0; i < m; i++) {
        sum += s[i];
    }
    if (sum == d) {
        count++;
    }

    for (int i = m; i < n; i++) {
        sum += s[i] - s[i - m];
        if (sum == d) {
            count++;
        }
    }

    return count;
}

int main() {
    int n, d, m;
    cin >> n;

    vector<int> s(n);
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }

    cin >> d >> m;

    int result = birthday(s, d, m);

    cout << result << endl;

    return 0;
}