bool cmp(vector <int> v1, vector <int> v2){
   if(v1[0] == v2[0])
       return v1[1] < v2[1];
    else
      return v1[0] > v2[0];
}
class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        sort(people.begin(), people.end(), cmp);
      vector < vector <int> > ans;
      for(int i =0; i<people.size(); i++){
         ans.insert(ans.begin() + people[i][1], people[i]);
      }
      return ans;
        
    }
};
