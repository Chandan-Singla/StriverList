#include <bits/stdc++.h> 
void reverse(vector<int> &permutation,int i,int j){

    while(i<j){

        swap(permutation[i++],permutation[j--]);

    }

}
vector<int> nextPermutation(vector<int> &permutation, int n)

{

    //  Write your code here.

    if(n<=1){

        return permutation;

    }

    int i=n-2;

    // It gave us first smallest number present from right

    while(i>=0 && permutation[i]>=permutation[i+1]){

        i--;

    }

    if(i>=0){

        int j = n-1;
            
        while(permutation[j]<=permutation[i]){

            j--;

        }

        swap(permutation[i],permutation[j]);

    }

    reverse(permutation,i+1,n-1);

    return permutation;

}
    
    