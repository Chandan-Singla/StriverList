/*In test case 1, frequencies of occurrences of different elements are:

8 → 5 times
9 → 1 time
1 → 1 time

As 8 occurs more than floor(7/2) (i.e. floor(3.5) = 3) times, it is the majority element.

In test case 2, frequencies of occurrences of different elements are:

2 → 2 times
3 → 2 times

As no element occurs more than floor(4/2) = 2 times. Thus No majority element is present.*/
#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
int findMajorityElement(int arr[], int n) {
	// Write your code here.
    int r[n+1]={};
    unordered_map<int,int> g;
    int f=n/2;
    for(int i=0;i<n;i++){
     /*   if(!g[arr[i]]){
        g[arr[i]]=1;
        }*/
//         else{
            g[arr[i]]++;
//         }
        
    }
    for(int i=0;i<n;i++){
        if(g[arr[i]]>f){
            return arr[i];
        }
    }
    return -1;
}