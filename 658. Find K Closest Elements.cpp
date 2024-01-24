class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        multimap<int,int>map;
        multimap<int,int>map2;
        vector<int>ans;
        for(auto it:arr)  map.insert(pair<int, int>(it,abs(it-x)));
        for(auto c:map) map2.insert(pair<int, int>(c.second,c.first));
        for(auto v:map2){
            if(k>0)  ans.emplace_back(v.second);
            if( k == 0) break;
            k--;
        }
        sort(ans.begin(),ans.end());
        return ans ;
    }
};
