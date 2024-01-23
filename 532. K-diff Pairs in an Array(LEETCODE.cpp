class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
     unordered_map<int,int>count;
     for(int i:nums)
     {
         count[i]++;
     }   
     int ans=0;
    for(auto x:count)
    {
        if(k==0)
        {
            if(x.second>1)
            {
                ans++;
            }
        }

        else if (count.find(x.first+k)!=count.end())
        ans++;
    }
    return ans;
    }
};
