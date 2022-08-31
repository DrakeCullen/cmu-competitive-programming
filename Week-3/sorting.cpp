#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void print(const vector<int> &v) {
    for (auto i : v) cout << i << " ";
    cout << endl;
}

// sort of like increasing order but a bit different
void nonDecreasing() {
    vector<int> v = {1,9,3,5,3,6,3};
    sort(v.rbegin(), v.rend());
    print(v);
}

bool nonDecreaseCmp(int a, int b) {
    return a > b;
}

void nonDecreasing2() {
    vector<int> v = {1,9,3,5,3,6,3};
    sort(v.begin(), v.end(), nonDecreaseCmp);
    print(v);
}

void stringSort() {
    vector<string> v = {"abc", "ab", "a", "b", "c", "abcd"};
    sort(v.begin(), v.end());
    for (auto i : v) cout << i << " ";
    cout << endl;
}

class Dog {
    private:
        string name;
        int age;
        string breed;
    public:
        Dog(string name, int age, string breed) {
            this->name = name;
            this->age = age;
            this->breed = breed;
        }
        string getName() {
            return name;
        }
        int getAge() {
            return age;
        }
        string getBreed() {
            return breed;
        }
};

bool dogsCmp(Dog &a, Dog &b) {
    if (a.getAge() != b.getAge()) 
        return a.getAge() < b.getAge();
    if (a.getBreed() != b.getBreed())
        return a.getBreed() < b.getBreed();
    return a.getName() < b.getName();
}

void sortDogs() {
    // Sort by age, then breed, then name
    vector<Dog> dogs = {Dog("Fido", 2, "Labrador"), Dog("Spot", 1, "Poodle"), Dog("George", 1, "Golden Retriever"), Dog("Ralph", 2, "Labrador")};
    sort(dogs.begin(), dogs.end(), dogsCmp);
    for(auto dog : dogs) 
        cout << "Age: "<<dog.getAge() << " Breed: " << dog.getBreed() << " Name: " << dog.getName() << endl;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); 
    
    nonDecreasing();
    cout<<endl;
    nonDecreasing2();
    cout<<endl;
    stringSort();
    cout<<endl;
    sortDogs();
    return 0;
}
