class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        
        for(int i = 0; i < nums.size(); i++){
            for(int j = i+1 ; j < nums.size(); j++){
                int a = nums[i];
                int b = nums[j];
                int suma = nums[i] + nums[j];
                if(suma == target){
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans;
                }
            }
        }
        
        return ans;
    }
};