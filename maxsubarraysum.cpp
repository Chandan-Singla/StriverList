#include <bits/stdc++.h> 

long long maxSubarraySum(int arr[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */long MaxSum=INT_MIN;

   long currSum=0;

   for(int i=0 ; i<n ; i++){

       currSum=currSum+arr[i];

           if(currSum<0){

       currSum=0;

           }     

        MaxSum=max(MaxSum,currSum);

   }

   return MaxSum;
}