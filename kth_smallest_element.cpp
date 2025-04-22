#include<bits/stdc++.h>
using namespace std;

int kthsmallest(int arr[], int l, int r, int k){
    priority_queue<int> pq;
    for(int i = l; i < k; i++){
        pq.push(arr[i]);
    }
    for(int i = k; i <= r; i++){
        if(arr[i] < pq.top()){
            pq.pop();
            pq.push(arr[i]);
        }
    }
    int ans = pq.top();
    return ans;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int k;
    cin >> k;
    int ans = kthsmallest(arr, 0, n-1, k-1);  
    cout << ans << endl;

    return 0;
}
