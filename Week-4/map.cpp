#include <iostream>
#include <map>
#include <unordered_map>

using namespace std;


int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); 
    cout << endl;

    map<int, int> m;
 
    m[5] = 10;
    m[3] = 5;
    m[20] = 100;
    m[1] = 1;
    for (auto i : m) cout << i.first << " : " << i.second << endl;
    cout << endl;

    unordered_map<int, int> um;
 
    um[5] = 10;
    um[3] = 5;
    um[20] = 100;
    um[1] = 1;
 
    
    for (auto i : um) cout << i.first << " : " << i.second << endl;
    

    return 0;
}
