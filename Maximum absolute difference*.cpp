int Solution::maxArr(vector<int> &A) {
  int n = A.size();
 
    int max1 = INT_MIN; int max2 = INT_MIN;
    int min1 = INT_MAX; int min2 = INT_MAX;
    for(int i=0;i<n;i++)
    {
        
     /*  if(A[i]+i >max1)
         max1 = A[i]+i;
        if(A[i]+i < min1)
           min1 = A[i]+i;
     
        if(A[i]-i >max2)
         max2 = A[i]-i;
        if(A[i]-i < min2)
           min2 = A[i]-i;  */
         max1 = max(max1,A[i]+i);
         min1 = min(min1,A[i]+i);
         max2 = max(max2,A[i]-i);
         min2 = min(min2,A[i]-i); 
         
        
     }
   return max(max1-min1,max2-min2);

     
}
