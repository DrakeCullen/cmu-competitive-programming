#include <iostream>
#include <queue>
#include <vector>

using namespace std;



int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); 
    cout << endl;
    
    priority_queue<int> maxPq;
    maxPq.push(5);
    maxPq.push(2);
    maxPq.push(3);
    maxPq.push(8);
    while (!maxPq.empty()) {
        cout << maxPq.top() << " ";
        maxPq.pop();
    }
    cout << endl << endl;

    priority_queue<int, vector<int>, greater<int>> minPq;
    minPq.push(5);
    minPq.push(2);
    minPq.push(3);
    minPq.push(8);
    while (!minPq.empty()) {
        cout << minPq.top() << " ";
        minPq.pop();
    }

    cout << endl;
    
    return 0;
}
