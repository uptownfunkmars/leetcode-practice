class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        map<int, int> mp;
        vector<int> re;
        
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]] = i;
        }
        
        for(int i = 0; i < nums.size(); i++){
            map<int, int>::iterator it = mp.find(target - nums[i]);
            if(it != mp.end() && it->second != i){
                re.push_back(i);
                re.push_back(it->second);
                break;
            }
        }
        return re;
        
    }
};
