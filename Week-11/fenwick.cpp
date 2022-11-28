#include <bits/stdc++.h>

using namespace std;
#define LSOne(S) ((S) & -(S))  
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

class FenwickTree {                              // index 0 is not used
private:
  vl ft;                                        // internal FT is an array
public:
  FenwickTree(int m) { ft.assign(m+1, 0); }      // create an empty FT
  void build(const vl &f) {
    int m = (int)f.size()-1;                     // note f[0] is always 0
    ft.assign(m+1, 0);
    for (int i = 1; i <= m; ++i) {               // O(m)
      ft[i] += f[i];                             // add this value
      if (i+LSOne(i) <= m)                       // i has parent
        ft[i+LSOne(i)] += ft[i];                 // add to that parent
    }
  }

  FenwickTree(const vl &f) { build(f); }        // create FT based on f

  ll rsq(int j) {                                // returns RSQ(1, j)
    ll sum = 0;
    for (; j; j -= LSOne(j))
      sum += ft[j];
    return sum;
  }

  ll rsq(int i, int j) { return rsq(j) - rsq(i-1); } // inc/exclusion

  // updates value of the i-th element by v (v can be +ve/inc or -ve/dec)
  void update(int i, ll v) {
    for (; i < (int)ft.size(); i += LSOne(i))
      ft[i] += v;
  }
};

int main() {
	vl input = {0, 3, 4, -2, 7, 3, 11, 5, -8, -9, 2, 4, -8};
	FenwickTree ft(input);
	cout << "Original vector: ";
	for (unsigned i = 1; i < input.size(); i++) cout << input[i] << " ";
	cout << endl;

	cout<< "rsq(1,3) = " << ft.rsq(1,3)<<endl;
	cout<< "rsq(1,4) = " << ft.rsq(1,4)<<endl;
	cout<<endl;
	
	ft.update(3, 5);
	cout<< "rsq(1,3) = " <<ft.rsq(1,3)<<endl;
	cout<< "rsq(1,4) = " << ft.rsq(1,4)<<endl;
}