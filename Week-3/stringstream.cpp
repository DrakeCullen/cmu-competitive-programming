#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>
#include <sstream>

using namespace std;



int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); 

    string s = "The,quick,brown,fox,jumps,over,the,lazy,dog.", word;
    vector<string> v;

    stringstream ss(s);
    while(getline(ss, word, ','))
        v.push_back(word);

    for(auto element : v)
        cout << element << endl;
  
    return 0;
}
