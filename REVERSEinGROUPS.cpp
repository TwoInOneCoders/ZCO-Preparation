// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{
public:
   //Function to reverse every sub-array group of size k.
   void revers(vector<long long>& arr,int i,int j){
       while(i<j){
           swap(arr[i++],arr[j--]);
       }
   }
   void reverseInGroups(vector<long long>& arr, int n, int k){
       // code here
       for(int i=0;i<n;i=i+k){
           int ed=i+k-1;
           if(ed<=(n-1)) revers(arr,i,ed);
           else    revers(arr,i,n-1);
       }
   }
};

// { Driver Code Starts.
int main() {
    int t; 
    cin >> t; 
    while(t--){ 
        int n;
        cin >> n; 
        vector<long long> arr; 
        int k;
        cin >> k; 

        for(long long i = 0; i<n; i++)
        {
            long long x;
            cin >> x; 
            arr.push_back(x); 
        }
        Solution ob;
        ob.reverseInGroups(arr, n, k);
        
        for(long long i = 0; i<n; i++){
            cout << arr[i] << " "; 
        }
        cout << endl;
    }
}

  // } Driver Code Ends
