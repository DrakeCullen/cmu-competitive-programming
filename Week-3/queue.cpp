#include <iostream>
#include <queue>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); 

    queue<int> q; 
    q.push(2);
    cout<<"Front element: "<<q.front()<<" Back element: "<<q.back()<<endl;
    q.push(5);
    cout<<"Front element: "<<q.front()<<" Back element: "<<q.back()<<endl;
    q.push(3);
    cout<<"Front element: "<<q.front()<<" Back element: "<<q.back()<<endl;
    cout<<endl<<endl;

    while(!q.empty()) {
        cout<<"Front element: "<<q.front()<<" Back element: "<<q.back()<<endl;
        q.pop();
    }
    cout<<endl;
    return 0;
}
