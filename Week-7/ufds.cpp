#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

class UnionFind {                                
private:
  vi p, rank, setSize;                           // vi p is the key part
  int numSets;
public:
  UnionFind(int N) {
    p.assign(N, 0); for (int i = 0; i < N; ++i) p[i] = i;
    rank.assign(N, 0);                           // optional speedup
    setSize.assign(N, 1);                        // optional feature
    numSets = N;                                 // optional feature
  }

  int findSet(int i) { return (p[i] == i) ? i : (p[i] = findSet(p[i])); }
  bool isSameSet(int i, int j) { return findSet(i) == findSet(j); }

  int numDisjointSets() { return numSets; }      // optional
  int sizeOfSet(int i) { return setSize[findSet(i)]; } // optional

  void unionSet(int i, int j) {
    if (isSameSet(i, j)) return;                 // i and j are in same set
    int x = findSet(i), y = findSet(j);          // find both rep items
    if (rank[x] > rank[y]) swap(x, y);           // keep x 'shorter' than y
    p[x] = y;                                    // set x under y
    if (rank[x] == rank[y]) ++rank[y];           // optional speedup
    setSize[y] += setSize[x];                    // combine set sizes at y
    --numSets;                                   // a union reduces numSets
  }
};

int main() {
  printf("Assume that there are 5 disjoint sets initially\n");
  UnionFind UF(5); // create 5 disjoint sets
  cout << UF.numDisjointSets() << endl; // 5
  UF.unionSet(0, 1);
  cout << UF.numDisjointSets() << endl; // 4
  UF.unionSet(2, 3);
  cout << UF.numDisjointSets() << endl; // 3
  UF.unionSet(4, 3);
  cout << UF.numDisjointSets() << endl; // 2
  cout << "isSameSet(0, 3) = " << UF.isSameSet(0, 3) << endl; // 0
  cout << "isSameSet(4, 3) = " << UF.isSameSet(4, 3) << endl; // 1
  for (int i = 0; i < 5; i++) // findSet will return 1 for {0, 1} and 3 for {2, 3, 4}
    cout << "findSet(" << i << ") = " << UF.findSet(i) << " sizeOfSet(" << i << ") = " << UF.sizeOfSet(i) << endl;
  UF.unionSet(0, 3);
  cout << UF.numDisjointSets() << endl; // 1
  for (int i = 0; i < 5; i++) // findSet will return 3 for {0, 1, 2, 3, 4}
    cout << "findSet(" << i << ") = " << UF.findSet(i) << " sizeOfSet(" << i << ") = " << UF.sizeOfSet(i) << endl;
  return 0;
}