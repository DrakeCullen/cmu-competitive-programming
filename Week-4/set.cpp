#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); 
    cout << endl;

    set<int> s;
    s.insert(1);
    s.insert(2);
    for (auto i : s)
        cout << i << " ";
    cout << endl;
    cout << (s.count(1) ? "The set contains 1" : "The set does not contain 1") << endl;
    cout << (s.count(4) ? "The set contains 4" : "The set does not contain 4") << endl;

    auto pos = s.find(6);

    if (pos != s.end()) cout << "Element found at position : " << *pos;
    else cout << "Element not present in set";

    cout << endl;

    // The same can be done with unordered_set

    return 0;
}
