#include <bits/stdc++.h>
using namespace std;

int calculateValue(vector<int>& arr) {
    int n = arr.size();
    int sum = 0;
    int maxi = INT_MIN;
    
    for(int i = 0; i < n; i++) {
        maxi = max(maxi, arr[i]);
        sum += maxi;
    }
    
    return sum;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> arr(n);
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        int maxValue = calculateValue(arr);
        
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                swap(arr[i], arr[j]);
                int newValue = calculateValue(arr);
                maxValue = max(maxValue, newValue);
                swap(arr[i], arr[j]);
            }
        }
        
        cout << maxValue << "\n";
    }
    
    return 0;
}