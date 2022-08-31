#include <iostream>
#include <vector>

using namespace std;

void printVectorTraditional(const vector<int> &v) {
    for(unsigned int i = 0; i < v.size(); i++) 
        cout << v[i] << " ";
    cout << endl;
}

void printVectorRangeBased(const vector<int> &v) {
    for(int element : v) 
        cout << element << " ";
    cout << endl;
}



int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); 
    cout<<endl<<endl;
    
    vector<int> evenNumbers;
    cout<<"Original size: "<<evenNumbers.size()<<endl;
    cout<<"Capacity: "<<evenNumbers.capacity()<<endl<<endl;

    evenNumbers.push_back(2);
    cout<<"Size after push_back(2): "<<evenNumbers.size()<<endl;
    cout<<"Capacity after push_back(2): "<<evenNumbers.capacity()<<endl<<endl;

    evenNumbers.push_back(4);
    cout<<"Size after push_back(4): "<<evenNumbers.size()<<endl;
    cout<<"Capacity after push_back(4): "<<evenNumbers.capacity()<<endl<<endl;

    evenNumbers.push_back(6);
    cout<<"Size after push_back(6): "<<evenNumbers.size()<<endl;
    cout<<"Capacity after push_back(6): "<<evenNumbers.capacity()<<endl<<endl;

    cout<<"Traditional printing: ";
    printVectorTraditional(evenNumbers);
    cout<<"Range printing: ";
    printVectorTraditional(evenNumbers);

    evenNumbers.clear();
    cout<<endl<<"Size after clear(): "<<evenNumbers.size()<<endl;
    cout<<"Capacity after clear(): "<<evenNumbers.capacity()<<endl;
    
    return 0;
}