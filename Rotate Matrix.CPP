#include <bits/stdc++.h> 
// #include <bits/stdc++.h> 

void rotateMatrix(vector<vector<int>> &arr, int n, int m)
{
    // Write your code hereqqq
    int r,re,cb,ce,a,b,c,d;
    int total=n*m;
    int count=0;
    r=0,re=n-1,cb=0,ce=m-1;
    while (re>r&&ce>cb){
    a=arr[r][cb],b=arr[r][ce],c=arr[re][ce],d=arr[re][cb];
     for (int i=ce;i>cb;i--){
         arr[r][i]=arr[r][i-1];
       //  count++;
     }
       for(int i=re;i>r;i--){
           arr[i][ce]=arr[i-1][ce];
       
//        count++;
       }
        for(int i=cb;i<ce;i++){
            arr[re][i]=arr[re][i+1];
//         count++;
        }
        for(int i=r;i<re;i++){
            arr[i][cb]=arr[i+1][cb];
//         count++;
        }
        arr[r][cb+1]=a;
        r++;
        arr[r][ce]=b;
        ce--;
        arr[re][ce]=c;
        re--;
        arr[re][cb]=d;
        cb++;
        
    }

}