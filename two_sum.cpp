class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		vector<int> res;
		int16_t pos_zero = -1;
		int16_t pos_target = -1;
		for (int i = 0; i < nums.size(); ++i){
			if (nums[i] == 0){
				pos_zero = i;
				break;
			}
		}
		for (int i = 0; i < nums.size(); ++i){
			if (nums[i] == target){
				pos_target = i;
				break;
			}
		}

		if (pos_zero != -1 && pos_target != -1){
			res.emplace_back(pos_zero);
			res.emplace_back(pos_target);
			if (res[0] > res[1]){
				swap(res[0], res[1]);
			}
			return res;
		}

		// common sense
		for (int i = 0; i < nums.size() - 1; ++i){
			for (int j = i + 1; j < nums.size(); ++j){
				if (nums[i] + nums[j] == target){
					res.emplace_back(i);
					res.emplace_back(j);
					break;
				}
			}
		}
		return res;
	}
};
