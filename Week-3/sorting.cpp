#include <bits/stdc++.h>

using namespace std;
#define LSOne(S) ((S) & -(S))  
#define isOn(S, j) (S & (1<<j))
#define setBit(S, j) (S |= (1<<j))
#define clearBit(S, j) (S &= ~(1<<j))
#define toggleBit(S, j) (S ^= (1<<j))
#define lowBit(S) (S & (-S))
#define setAll(S, n) (S = (1<<n)-1)
#define modulo(S, N) ((S) & (N-1))   // returns S % N, where N is a power of 2
#define isPowerOfTwo(S) (!(S & (S-1)))
#define nearestPowerOfTwo(S) (1<<lround(log2(S)))
#define turnOffLastBit(S) ((S) & (S-1))
#define turnOnLastZero(S) ((S) | (S+1))
#define turnOffLastConsecutiveBits(S) ((S) & (S+1))
#define turnOnLastConsecutiveZeroes(S) ((S) | (S-1))
#define FOR(i, j, k, in) for (int i=j ; i<k ; i+=in)
#define RFOR(i, j, k, in) for (int i=j ; i>=k ; i-=in)
#define REP(i, j) FOR(i, 0, j, 1)
#define RREP(i, j) RFOR(i, j, 0, 1)
#define all(cont) cont.begin(), cont.end()
#define rall(cont) cont.end(), cont.begin()
#define FOREACH(it, l) for (auto it = l.begin(); it != l.end(); it++)
#define IN(A, B, C) assert( B <= A && A <= C)
#define MP make_pair
#define PB push_back
#define INF (int)1e9
#define LLINF 4e18;
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define F first
#define S second
#define isOn(S, j) (S & (1<<j))
#define setBit(S, j) (S |= (1<<j))
#define clearBit(S, j) (S &= ~(1<<j))
#define toggleBit(S, j) (S ^= (1<<j))
#define lowBit(S) (S & (-S))
#define setAll(S, n) (S = (1<<n)-1)
#define modulo(S, N) ((S) & (N-1))   // returns S % N, where N is a power of 2
#define isPowerOfTwo(S) (!(S & (S-1)))
#define nearestPowerOfTwo(S) (1<<lround(log2(S)))
#define turnOffLastBit(S) ((S) & (S-1))
#define turnOnLastZero(S) ((S) | (S+1))
#define turnOffLastConsecutiveBits(S) ((S) & (S+1))
#define turnOnLastConsecutiveZeroes(S) ((S) | (S-1))
const double pi=acos(-1.0);
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<string, int> psi;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<pii> vii;
typedef vector<pair<string,int>> vsi;
typedef vector<vi> vvi;
typedef map<int,int> mpii;
typedef map<int,bool> mpib;
typedef map<int,list<pii>> mpili;
typedef set<int> seti;
typedef multiset<int> mseti;
typedef unordered_set<int> usi;
typedef priority_queue<int> pqi;
typedef priority_queue<int,vi,greater<int>> rpqi;
typedef stack<int> stki;
typedef deque<int> dqi;
typedef queue<int> qi;
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;
typedef long double ld;

void print(const vi &v) {
    for (auto i : v) cout << i << " ";
    cout << endl;
}

// sort of like increasing order but a bit different
void nonDecreasing() {
    vi v = {1,9,3,5,3,6,3};
    sort(v.rbegin(), v.rend());
    print(v);
}

bool nonDecreaseCmp(int a, int b) {
    return a > b;
}

void nonDecreasing2() {
    vi v = {1,9,3,5,3,6,3};
    sort(v.begin(), v.end(), nonDecreaseCmp);
    print(v);
}

void stringSort() {
    vs v = {"abc", "ab", "a", "b", "c", "abcd"};
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
