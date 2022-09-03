#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define LSOne(S) ((S) & -(S))  


int main() {
    vector<int> sub = {1,2,3,4};
    for (int i = 0; i < (1<<sub.size()); i++) {
        cout<<"[ ";
        int mask = i;
        while (mask) {
            int twoPowJ = LSOne(mask);
            int j = __builtin_ctz(twoPowJ);
            cout<<sub[j]<<' ';
            mask -= twoPowJ;
        }
        cout<<']'<<endl;
    }
}