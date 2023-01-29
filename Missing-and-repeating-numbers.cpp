#include <bits/stdc++.h> 
#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &b, int n)
{
	// Write your code here 
	pair<int,int>r;
    int a[n+1]={};
    for(int i=0;i<n;i++){
        if(a[b[i]]==1){
            r.second=b[i];
        }
        else{
            a[b[i]]++;
        }
    }
    for(int i=1;i<=n;i++){
        if(a[i]==0){
            r.first=i;
        }
    }
    return r;
}
