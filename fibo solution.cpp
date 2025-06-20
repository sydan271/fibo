#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int n, a;
    while (cin >> n >> a) {
        vector<unsigned long long> F(n + 1);
        F[0] = 0;
        F[1] = 1;
        for (int i = 2; i <= n; ++i) {
            F[i] = a * F[i - 1] + F[i - 2];
        }
        string s = to_string(F[n]);
        cout << s.substr(0, 5) << endl;
    }
    return 0;
}

