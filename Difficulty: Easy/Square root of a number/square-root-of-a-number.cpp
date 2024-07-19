//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

  

// } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        // Your code goes here 
        long long int ans=0;
        long long start=0;
        long long end=x;
        while(start<=end){
            long long mid=(start+end)/2;
            if(mid*mid==x){
                return mid;
            }
            else if(mid*mid<x){
                start=mid+1;
                  ans=mid;
                   
            }
            else{
                end=mid-1;
              
             
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		Solution obj;
		cout << obj.floorSqrt(n) << endl;
	}
    return 0;   
}

// } Driver Code Ends