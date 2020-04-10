/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
 bool compare(Interval e1,Interval e2)
 {
     return (e1.start<e2.start);
 }
vector<Interval> Solution::merge(vector<Interval> &A) {
    vector<Interval> res;
    int n = A.size();
    stack<Interval> s;
    sort(A.begin(),A.end(),compare);
    s.push(A[0]);
    for(int i=1;i<n;i++)
    {
        Interval topele = s.top();
        if(topele.end < A[i].start)
         s.push(A[i]);
        else if(topele.end <= A[i].end)
        {
            
            topele.end = A[i].end;
            s.pop();
            s.push(topele);
        }
       
       
        
        
    }
    while(!s.empty())
    {
        res.push_back(s.top());
        s.pop();
    }
    sort(res.begin(),res.end(),compare);
    return res;
}
