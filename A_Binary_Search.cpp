#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    while (k--)
    {
        int x;
        cin >> x;
        int l = 0, r = n - 1;
        bool flag = false;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (v[mid] == x)
            {
                flag = true;
                break;
            }
            else if (v[mid] > x)
            {
                r = mid - 1;
            }
            else
                l = mid + 1;
        }
        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}