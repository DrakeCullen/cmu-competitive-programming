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