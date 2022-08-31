#include <iostream>
#include <vector>

using namespace std;

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

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cout<<endl<<endl;

    vector<pair<int,int>> vp;
    vp.push_back(make_pair(1,2));
    vp.push_back(make_pair(3,4));
    vp.push_back(make_pair(5,6));
    for (auto pair : vp) {
        cout<<pair.first<<" "<<pair.second<<endl;
    }
    cout<<endl;

    vector<string> names = {"John", "Paul", "George"};
    for(auto elem : names) 
        cout<<elem<<' ';
    cout<<endl<<endl;
    

    vector<Dog> dogs = {Dog("Fido", 2, "Labrador"), Dog("Spot", 1, "Poodle")};
    for(auto dog : dogs) 
        cout<<"Name: "<<dog.getName()<<" Age: "<<dog.getAge()<<" Breed: "<<dog.getBreed()<<endl;
        
    return 0;
}
