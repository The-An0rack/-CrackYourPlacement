//link: https://practice.geeksforgeeks.org/problems/chocolate-distribution-problem3825/1/#

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    
    sort(a.begin(),a.end());
    
    long long start = 0;
    long long end = m - 1;
    
    long long diff = a[end] - a[start];
    
    while(end < n)
    {
        if(a[end] - a[start] < diff)
        {
            diff = a[end] - a[start];
        }
        start++;end++;
    }
    return diff;
    
    }   
};

// { Driver Code Starts.
int main() {
	long long t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		vector<long long> a;
		long long x;
		for(long long i=0;i<n;i++)
		{
			cin>>x;
			a.push_back(x);
		}
		
		long long m;
		cin>>m;
		Solution ob;
		cout<<ob.findMinDiff(a,n,m)<<endl;
	}
	return 0;
}  // } Driver Code Ends
