vector<int> Solution::plusOne(vector<int> &A) {
    vector<int> v;
    int n = A.size();
    int i = 0;
    int k = 0;
    int e = n-1;
    int count = 0;
    if(A[n-1] != 9)
    {
        if(A[i] == 0)
        {
            while(A[i] == 0)
            {
                i++;
            }
        }
        for(int j = i;j<n-1;j++)
        {
            v.push_back(A[j]);
        }
        v.push_back(A[n-1]+1);
        
    }
    else
    {
        while(A[e] == 9)
        {
            e--;
            count++;
        }
        if(A[k] == 0)
        {
            while(A[k] == 0)
            {
                k++;
            }
        }
        for(int m = k;m<e;m++)
        {
            v.push_back(A[m]);
        }
        v.push_back(A[e]+1);
        while(count--)
        {
            v.push_back(0);
        }
        
    }
    return v;
    
}


OR
class Solution {
    public:
        vector<int> plusOne(vector<int> &digits) {
            reverse(digits.begin(), digits.end());
            vector<int> ans;
            int carry = 1;
            for (int i = 0; i < digits.size(); i++) {
                int sum = digits[i] + carry;
                ans.push_back(sum%10);
                carry = sum / 10;
            }
            while (carry) {
                ans.push_back(carry%10);
                carry /= 10;
            }
            while (ans[ans.size() - 1] == 0 && ans.size() > 1) {
                ans.pop_back();
            }
            reverse(ans.begin(), ans.end());
            reverse(digits.begin(), digits.end());
            return ans;
        }
};

