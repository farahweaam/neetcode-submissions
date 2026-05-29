class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int* pre= new int [nums.size()];
        int* suf= new int [nums.size()];
        vector<int> res;
        pre[0]=1;
        suf[nums.size()-1]=1;
        int j=nums.size()-2;
        for(int i=1;i<nums.size();i++)
        {
            pre[i]= pre[i-1]*nums[i-1];
            suf[j]=suf[j+1]*nums[j+1];
            j--;
        }
        for(int i=0;i<nums.size();i++)
        {
            res.push_back(pre[i]*suf[i]);
        }
        return res;
    }
};
