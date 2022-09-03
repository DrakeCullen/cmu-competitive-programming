#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
typedef long long ll;
typedef vector<ll> vl;

class FenwickTreeRangeQueryPointUpdate {
	private:
		// The size of the array holding the Fenwick tree values
		int N;

		// This array contains the Fenwick tree ranges
		vl tree;
		
		int lsb(int i) {
			// Isolates the lowest one bit value
			return i & -i;
		}

		// Computes the prefix sum from [1, i], O(log(n))
		long prefixSum(int i) {
			long sum = 0L;
			while (i != 0) {
				sum += tree[i];
				i &= ~lsb(i); // Equivalently, i -= lsb(i);
			}
			return sum;
		}
		
	public:
		// Create an empty Fenwick Tree with 'sz' parameter zero based.
		FenwickTreeRangeQueryPointUpdate(int sz) {
			N = sz + 1;
			tree.resize(N);
		}

		// Construct a Fenwick tree with an initial set of values.
		// The 'values' array MUST BE ONE BASED meaning values[0]
		// does not get used, O(n) construction.
		FenwickTreeRangeQueryPointUpdate(vl values) {
			N = values.size();
			values[0] = 0L;

			// Make a clone of the values array since we manipulate
			// the array in place destroying all its original content.
			tree = values;

			for (int i = 1; i < N; i++) {
				int parent = i + lsb(i);
				if (parent < N) tree[parent] += tree[i];
			}
		}		

		// Returns the sum of the interval [left, right], O(log(n))
		long sum(int left, int right) {
			return prefixSum(right) - prefixSum(left - 1);
		}

		// Get the value at index i
		long get(int i) {
			return sum(i, i);
		}

		// Add 'v' to index 'i', O(log(n))
		void add(int i, long v) {
			while (i < N) {
				tree[i] += v;
				i += lsb(i);
			}
		}

		// Set index i to be equal to v, O(log(n))
		void set(int i, long v) {
			add(i, v - sum(i, i));
		}
};

int main() {
	vl input = {0, 3, 4, -2, 7, 3, 11, 5, -8, -9, 2, 4, -8};
	FenwickTreeRangeQueryPointUpdate ft(input);
	cout<<ft.sum(1,3);
	return 0;
}