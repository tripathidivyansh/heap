// in this question we first find all the subarray sum and then put in the ans then return the kth largest sum

// apporch one

// in this question we first find all the subarray sum and then put in the ans then return the kth largest sum

// apporch one
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k;
    cin >> k;

    vector<int> ans;

    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += arr[j];
            ans.push_back(sum);  
        }
    }

    sort(ans.begin(), ans.end());

    cout << ans[ans.size() - k] << endl;  
}
