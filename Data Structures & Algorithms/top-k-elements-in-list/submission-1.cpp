class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> numbers;
        
        
        for(int i=0;i<nums.size();i++)
        {
            
                numbers[nums[i]]++;
           
        }
        vector<pair<int, int>> numberstemp(numbers.begin(), numbers.end());
        sort(numberstemp.begin(), numberstemp.end(), [] (const pair<int, int> &a, const pair<int, int> &b){
            return a.second>b.second;
        });
        vector<int> num;
        for(int i=0;i<k;i++)
        {
            num.push_back(numberstemp[i].first);
        }
        return num;
    }
};
