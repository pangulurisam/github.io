#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;

vector<ll> productExceptSelf(vector<ll>& nums) {
    ll n = nums.size();
    vector<ll> prefix(n, 1);  // prefix product
    vector<ll> suffix(n, 1);  // suffix product

    for (ll i = 1; i < n; i++) {
        prefix[i] = (prefix[i - 1] * nums[i - 1]) % 1000000007;
    }

    for (ll i = n - 2; i >= 0; i--) {
        suffix[i] = (suffix[i + 1] * nums[i + 1]) % 1000000007;
    }

    vector<ll> output(n);
    for (ll i = 0; i < n; i++) {
        output[i] = (prefix[i] * suffix[i]) % 1000000007;
    }

    return output;
}

int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        ll n;
        cin >> n;
        vector<ll> nums(n);
        for (ll i = 0; i < n; i++) {
            cin >> nums[i];
        }
        vector<ll> output = productExceptSelf(nums);
        for (ll i = 0; i < n; i++) {
            cout << output[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
