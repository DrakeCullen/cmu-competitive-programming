#include <iostream>
#include <vector>

using namespace std;

void printVector(const vector<int> &v) {
    for(int element : v) 
        cout << element << " ";
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cout<<endl<<endl;

    // Equivalent
    vector<int> a = {1,1,1,1,1};
    vector<int> b(5,1);

    printVector(a);
    printVector(b);
    cout<<"a.size() = "<<a.size()<<endl;
    cout<<"b.size() = "<<b.size()<<endl;
    cout<<"a.capacity() = "<<a.capacity()<<endl;
    cout<<"b.capacity() = "<<b.capacity()<<endl;
    cout<<endl;

    vector<int> c;
    cout<<"c.size() = "<<c.size()<<endl;
    cout<<"c.capacity() = "<<c.capacity()<<endl;
    c.reserve(10); // reserve 10 elements but leave values uninitialized
    cout<<"c.size() = "<<c.size()<<endl;
    cout<<"c.capacity() = "<<c.capacity()<<endl;
    cout<<endl;

    a.resize(2);
    cout<<"a.size() = "<<a.size()<<endl;
    cout<<"a.capacity() = "<<a.capacity()<<endl;
    printVector(a);

    return 0;
}
