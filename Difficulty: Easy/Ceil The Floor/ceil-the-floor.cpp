//{ Driver Code Starts

#include <bits/stdc++.h>

using namespace std;

pair<int, int> getFloorAndCeil(int arr[], int n, int x);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        auto ans = getFloorAndCeil(arr, n, x);
        cout << ans.first << " " << ans.second << "\n";
    }
    return 0;
}

// } Driver Code Ends


pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    // code here
     int start=0;
    int end=n-1;
    int floors=INT_MIN;
    int ciel=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<=x){
            floors=max(floors,arr[i]);
        }
         if(arr[i]>=x){
              ciel=min(ciel,arr[i]);
        }
    }
     
    if(floors==INT_MIN) floors=-1;
    if(ciel==INT_MAX) ciel=-1;
    return {floors,ciel};
}