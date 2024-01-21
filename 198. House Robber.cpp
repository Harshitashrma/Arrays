class Solution {
public:
    int rob(vector<int>& nums) {
        int roberry=0;
        int noRoberry=0;

        for(int i=0;i<nums.size();i++){
            int newRob=nums[i]+noRoberry;
            int noNewRoberry=max(roberry,noRoberry);

            roberry=newRob;
            noRoberry=noNewRoberry;
        }

        return max(roberry,noRoberry);
    }
};
