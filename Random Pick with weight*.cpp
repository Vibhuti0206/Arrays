class Solution {
    
public:
    
     //  vector<int> sums;
     vector<int> v;
    Solution(vector<int>& w) {
     
    /*   v[0]=w[0];
        int n=w.size();
        for(int i=1;i<n;i++)
            v[i]=v[i-1]+w[i]; 
    
    }*/
    int total = 0;
        for(int i=0;i<w.size();i++)
        {
            total += w[i];
            v.push_back(total);
        }
    }
    int pickIndex() {
       int s=0;
        int e=v.size()-1;
         int idx =  (rand() % v[v.size()-1])+1;
        while(s<e)
        {
            int mid=(s+e)/2;
            if(v[mid] == idx)
               return mid;
            else if(v[mid] < idx) 
             s=mid+1;
            else
                e=mid;
        }
        return s;
    
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */
