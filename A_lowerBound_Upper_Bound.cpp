#include <bits/stdc++.h>
using namespace std;

int main()
{

    // ===============================
    // VECTOR EXAMPLE
    // ===============================
    vector<int> v = {2, 3, 4, 4, 7, 9};

    cout << "Vector: ";
    for (int x : v)
        cout << x << " ";
    cout << "\n\n";

    // --------------------------------
    // 1️⃣ LOWER BOUND
    // --------------------------------
    cout << "----- LOWER BOUND -----\n";

    int target1 = 4;

    auto it1 = lower_bound(v.begin(), v.end(), target1);

    if (it1 != v.end())
    {
        cout << "Target = " << target1 << "\n";
        cout << "Index = " << it1 - v.begin() << "\n";
        cout << "Value = " << *it1 << "\n\n";
    }

    // If value NOT present
    int target2 = 5;

    auto it2 = lower_bound(v.begin(), v.end(), target2);

    if (it2 != v.end())
    {
        cout << "Target = " << target2 << " (Not Present)\n";
        cout << "Index = " << it2 - v.begin() << "\n";
        cout << "Immediate Bigger Value = " << *it2 << "\n\n";
    }

    // If target > maximum value
    int target3 = 12;

    auto it3 = lower_bound(v.begin(), v.end(), target3);

    if (it3 == v.end())
    {
        cout << "Target = " << target3 << "\n";
        cout << "Index = " << v.size() << " (last index + 1)\n";
        cout << "No greater value exists\n\n";
    }

    // --------------------------------
    // 2️⃣ UPPER BOUND
    // --------------------------------
    cout << "----- UPPER BOUND -----\n";

    int target4 = 4;

    auto it4 = upper_bound(v.begin(), v.end(), target4);

    if (it4 != v.end())
    {
        cout << "Target = " << target4 << "\n";
        cout << "Index = " << it4 - v.begin() << "\n";
        cout << "Value = " << *it4 << "\n\n";
    }

    int target5 = 5;

    auto it5 = upper_bound(v.begin(), v.end(), target5);

    if (it5 != v.end())
    {
        cout << "Target = " << target5 << "\n";
        cout << "Index = " << it5 - v.begin() << "\n";
        cout << "Value = " << *it5 << "\n\n";
    }

    // --------------------------------
    // 3️⃣ FREQUENCY COUNT
    // --------------------------------
    cout << "----- FREQUENCY COUNT -----\n";

    int target6 = 4;

    int count = upper_bound(v.begin(), v.end(), target6) -
                lower_bound(v.begin(), v.end(), target6);

    cout << "Frequency of " << target6 << " = " << count << "\n\n";

    // ===============================
    // SET EXAMPLE
    // ===============================
    cout << "----- SET EXAMPLE -----\n";

    set<int> s = {2, 3, 4, 7, 9};

    auto sit = s.lower_bound(4);

    if (sit != s.end())
    {
        cout << "Set lower_bound(4) = " << *sit << "\n";
    }

    auto suit = s.upper_bound(4);

    if (suit != s.end())
    {
        cout << "Set upper_bound(4) = " << *suit << "\n";
    }

    cout << "\n";

    // ===============================
    // MULTISET EXAMPLE
    // ===============================
    cout << "----- MULTISET EXAMPLE -----\n";

    multiset<int> ms = {2, 3, 4, 4, 7, 9};

    cout << "Frequency of 4 in multiset = "
         << ms.count(4) << "\n\n";

    // ===============================
    // MAP EXAMPLE
    // ===============================
    cout << "----- MAP EXAMPLE -----\n";

    map<int, string> mp;

    mp[2] = "A";
    mp[4] = "B";
    mp[7] = "C";

    auto mit = mp.lower_bound(4);

    if (mit != mp.end())
    {
        cout << "Map lower_bound(4): Key = "
             << mit->first
             << ", Value = "
             << mit->second
             << "\n";
    }

    return 0;
}
