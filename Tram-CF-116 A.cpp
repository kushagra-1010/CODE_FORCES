#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    int current = 0;
    int maxCapacity = 0;
    
    for (int i = 0; i < n; i++) {
        int exit, enter;
        cin >> exit >> enter;
        
        current += (enter - exit);  // Can combine the operations
        maxCapacity = max(maxCapacity, current);
    }
    
    cout << maxCapacity << "\n";  // '\n' is slightly faster than endl
    
    return 0;
}