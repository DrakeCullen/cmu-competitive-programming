#include <iostream>
#include <stack>
#include <algorithm>

using namespace std;



int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); 

    stack<int> stk; 
    stk.push(2);
    cout<<"Top element: "<<stk.top()<<endl;
    stk.push(5);
    cout<<"Top element: "<<stk.top()<<endl;
    stk.push(3);
    cout<<"Top element: "<<stk.top()<<endl<<endl;

    while(!stk.empty()) {
        cout<<stk.top()<<' ';
        stk.pop();
    }
    cout<<endl;
    return 0;
}
