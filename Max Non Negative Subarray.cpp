vector<int> Solution::maxset(vector<int> &A) {
    
              
       int sum = -1;
    int start = 0;
    int end = 0;
    int sum2 = 0;
    vector<int> v1;
    vector<int> v2;
    for (int i = 0; i < A.size(); i++){
        if (A[i] >= 0){
            v1.push_back(A[i]);

            sum2 += A[i];
            
            if (sum2 > sum){
                v2 = v1;
                sum = sum2;
            }
            else if (sum2 == sum){
                if (v1.size() >  v2.size()){
                    v2 = v1;
                }
            }            
        }
        else {
            v1.clear();
            sum2 = 0;
        }

    }
    return  v2;

}
