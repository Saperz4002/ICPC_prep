#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll solve(ll N){

    ll dp[N + 1] = {};
    dp[0] = 1;

    // Iterate over all possible sums from 1 to N
    for (int i = 1; i <= N; i++) {
        // Iterate over all the possible values of the last die, that is from 1 to 6
        for (int j = 1; j <= 6 && j <= i; j++) {
            dp[i] = (dp[i] + (dp[i - j]));
        }
    }
    // Return the number of ways to construct sum = N
    return dp[N];
}


int main()
{
    // Sample Input
    ll N = 4;

    cout << solve(N) << "\n";
}


