int Solution::solve(vector<int> &A) {
	sort(A.begin(), A.end()) ;
	int size = A.size();
	for(int i=0;i<size;i++){
		while(i+1<size && A[i]==A[i+1])
			i++;
		if(A[i]==size-1-i)
			return 1;
	}
	return -1;
}

OR
//the alternative is not the optimal solution

int Solution::solve(vector<int> &A) {
    int n = A.size();
    
   
    sort(A.begin(),A.end());
    for(int i=0;i<n;i++)
    {
        int count  = 0 ;
        for(int j=0;j<n;j++)
        {
            if(A[j] > A[i])
             count++;
            if(count > A[i])
              break;
        }
        if(count == A[i])
        return 1;
    }
    return -1;
}
