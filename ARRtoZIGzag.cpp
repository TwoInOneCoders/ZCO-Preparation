#include <bits/stdc++.h>
using namespace std;
class Solution{
public:	
	// Program for zig-zag conversion of array
	void zigZag(int arr[], int n) {
	    // code here
	    for(int i = 0; i < n-1; i++)
	    {
	        int j = i+1;
	        if(arr[i] < arr[j] && i%2!=0)   //3 7
	        {
	            int shit = arr[j];  //shit = 7
	            arr[j] = arr[i];    //3 3
	            arr[i] = shit;  // 7 3
	        }
	        else if(arr[i] > arr[j] && i%2==0)
	        {
	            int shit = arr[i];
	            arr[i] = arr[j];
	            arr[j] = shit;
	        }
	    }
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.zigZag(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends
