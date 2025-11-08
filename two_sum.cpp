class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		unordered_map<int, int> numbers;
		for (int i = 0; i < nums.size(); ++i){
			int temp = target - nums[i];
			if (numbers.count(temp)){
				return {numbers[temp], i};
			}
			numbers[nums[i]] = i;
		}
		return {0, 0};
	}
};
