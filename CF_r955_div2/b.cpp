#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

void solve()
{
    int x, y, k;
    cin >> x >> y >> k;
    for (int j = 0; j < k; j++) {
        ++x;
        if (x >= y) {
            while (x % y == 0) {
                x /= y;
            }
        }
    }
    cout << x << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(nullptr);

    int NUMBER_OF_TESTS;
    cin >> NUMBER_OF_TESTS;
    for (int t = 1; t <= NUMBER_OF_TESTS; t++)
        solve();
    return 0;
}
