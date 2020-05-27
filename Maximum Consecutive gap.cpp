int Solution::maximumGap(const vector<int> &A) {
   int n=A.size();
    
    if(n<2)
    return 0;// return 0 if number of elements is <2
    
    // find the minimum and maximum elements
    int mi=*min_element(A.begin(),A.end());
    int ma=*max_element(A.begin(),A.end());
    
    double gap1=(ma-mi)*1.0;
    gap1=gap1/(n-1);
    gap1=ceil(gap1);
    int gap=gap1; // finding the maximum possible gap.
    
    if(gap==0) // if maximum possible gap is 0 => all elements are same!
    return 0;
    
    vector <pair<int, int> > vp(n);
    for(int i=0;i<n;i++)
    {
        vp[i].first=INT_MAX;//+inf
        vp[i].second=INT_MIN;//-inf
    }
        
    for(int i=0;i<n;i++)
    {
        int g=A[i]-mi;
        g/=gap;//finding appropriate buckets
        vp[g].first=min(vp[g].first,A[i]);//putting min elememt in gth bucket
        vp[g].second=max(vp[g].second,A[i]);//putting maximum element in gth bucket
    }
    
    vector < pair<int,int> > ans;
    // removing those buckets that don't have any elemtnts
    for(int i=0;i<n;i++)
    {
        if(vp[i].first!=INT_MAX && vp[i].second!=INT_MIN)
        ans.push_back({vp[i].first,vp[i].second});
    }
    
    int res=0;
    for(int i=1;i<ans.size();i++)
    {
        res=max(res,abs(ans[i].first-ans[i-1].second));//calc max difference
    }
    
    return res;
}
//using pigenhole sorting kind of logic
