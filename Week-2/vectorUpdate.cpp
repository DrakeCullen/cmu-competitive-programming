#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void printVector(const vector<int> &v) {
    for(int element : v) 
        cout << element << " ";
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cout<<endl<<endl;

    vector<int> v = {1,2,3,4,5,6,7,8,9,10};

    for(vector<int>::iterator it = v.begin(); it != v.end(); it++) 
       cout<<*it<<' ';
    cout<<endl<<endl;
    
    cout<<v[2]<<endl;
    v[2]=12;
    cout<<v[2]<<endl;
    v[2]+=2;
    cout<<v[2]<<endl;
    v[2]-=7;
    cout<<v[2]<<endl;
    cout<<endl;

    printVector(v);

    for(int i=0; i<v.size(); i++) 
        if (v[i] % 2 == 0) v[i]=-1;
    printVector(v);

    sort(v.begin(), v.end());
    printVector(v);

    
    return 0;
}
