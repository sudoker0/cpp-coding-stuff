#include <bits/stdc++.h>
using namespace std;

// Utility function to do modular exponentiation.
// It returns (x^y) % p
inline auto power(int x, unsigned y, int p) -> int {
	int res = 1;
	x = x % p; // Update x if it is more than or
				// equal to p
	while (y > 0) {
		// If y is odd, multiply x with result
		if (y & 1) {
			res = (res*x) % p;
		}

		y = y >> 1; // y = y/2
		x = (x*x) % p;
	}
	return res;
}

// This function is called for all k trials. It returns
// false if n is composite and returns true if n is
// probably prime.
// d is an odd number such that (d*2)^r = n-1
// for some r >= 1
inline auto millerTest(int d, int n) -> bool {
	// Pick a random number in [2..n-2]
	// Corner cases make sure that n > 4
	int a = 2 + rand() % (n - 4);

	// Compute a^d % n
	int x = power(a, d, n);

	if (x == 1 || x == n-1){
		return true;
	}

	// Keep squaring x while one of the following doesn't
	// happen
	// (i) d does not reach n-1
	// (ii) (x^2) % n is not 1
	// (iii) (x^2) % n is not n-1
	while (d != n-1) {
		x = (x * x) % n;
		d *= 2;

		if (x == 1)	 {
			return false;
		}

		if (x == n-1) {
			return true;
		}
	}

	// Return composite
	return false;
}

// It returns false if n is composite and returns true if n
// is probably prime. k is an input parameter that determines
// accuracy level. Higher value of k indicates more accuracy.
inline auto isPrimeRM(int n, int k) -> bool {
	// Corner cases
	if (n <= 1 || n == 4) {
		return false;
	}
	if (n <= 3) {
		 return true;
	}

	// Find r such that n = 2^d * r + 1 for some r >= 1
	int d = n - 1;
	while (d % 2 == 0) {
		d /= 2;
	}

	// Iterate given nber of 'k' times
	for (int i = 0; i < k; ++i) {
		if ( !millerTest(d, n) ) {
			return false;
		}
	}
	return true;
}

int main() {
    long long n;
    cin >> n;
    long long a;
    for (long long i = 0; i < n; i++) {
        cin >> a;
        if (isPrimeRM(a, 10)) {
            cout << 1 << "\n";
        } else {
            cout << 0 << "\n";
        }
    }

    return 0;
}