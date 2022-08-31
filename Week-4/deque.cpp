#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

void print(deque<int> &dq)
{
    for (auto element : dq)
        cout << element << " ";
    cout << endl << endl;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); 
    cout << endl;
    deque<int> dq;
    dq.push_back(10);
    dq.push_front(20);
    dq.push_back(30);
    dq.push_front(15);
    cout << "The deque dq is : ";
    print(dq);
  
    cout << "\ndq.size() : " << dq.size();  
    cout << "\ndq.at(2) : " << dq[2];
    cout << "\ndq.front() : " << dq.front();
    cout << "\ndq.back() : " << dq.back() << endl;
  
    cout << "\ndq.pop_front() : ";
    dq.pop_front();
    print(dq);
  
    cout << "\ndq.pop_back() : ";
    dq.pop_back();
    print(dq);

    return 0;
}
