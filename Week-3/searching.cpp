#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void print(const vector<int> &v) {
    for (auto i : v) cout << i << " ";
    cout << endl;
}


int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); 
    cout<<endl<<endl;
    vector<int> v = {10,20,30,30,20,10,10,20};
    sort(v.begin(), v.end());
    print(v);
    cout<<endl;

    if (binary_search(v.begin(), v.end(), 20)) cout << "20 exists in vector";
    else cout << "15 does not exist";
    cout << endl;
 
    if (binary_search(v.begin(), v.end(), 23)) cout << "23 exists in vector";
    else cout << "23 does not exist";
    cout<<endl;
    auto low=lower_bound (v.begin(), v.end(), 20); //          ^
    auto up= upper_bound (v.begin(), v.end(), 20); //                   ^

    cout << "lower_bound at position " << (low- v.begin()) << '\n';
    cout << "upper_bound at position " << (up - v.begin()) << '\n';
    
    cout << endl;
    return 0;
}
