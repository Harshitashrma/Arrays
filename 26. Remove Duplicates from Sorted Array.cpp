class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>ans;
        for(auto i:nums)
        {
            ans.insert(i);
        }
        int i=0;
        for(auto j:ans)
        {
            nums[i]=j;
            i++;
        }

        return i;
    }
};
