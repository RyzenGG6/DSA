class Solution {
public:
      vector<bool> sieve(int n) {
        vector<bool> prime(n, true);
        prime[0] = false; // 0 is not prime
        if (n > 1) prime[1] = false; // 1 is not prime

        for (int i = 2; i * i < n; i++) { // Corrected condition
            if (prime[i]) {
                for (int j = i * i; j < n; j += i) {
                    prime[j] = false; // Marking multiples of i as non-prime
                }
            }
        }
        return prime;
    }

    int countPrimes(int n) {
        if (n <= 2) return 0; // Handle edge case for n <= 2
        vector<bool> ans = sieve(n);
        int c = 0;
        for (int i = 0; i < n; i++) { // Count primes less than n
            if (ans[i]) {
                c++;
            }
        }
        return c;
    }
};