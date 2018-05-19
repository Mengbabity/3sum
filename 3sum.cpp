class Solution {
public:
	vector<vector<int>> threeSum(vector<int> nums) {
		vector<vector<int>> res;
		sort(nums.begin(), nums.end());
		int n = nums.size();
		for (int i = 0; i < n; i++)
		{
			while (i != 0 && nums[i] == nums[i - 1])
				i++;
			set<int> temp;
			for (int j = i + 1; j < n; j++)
			{
				if (temp.count(-nums[i] - nums[j]))
				{
					res.push_back({ nums[i],nums[j],-nums[i] - nums[j] });
					while (nums[j] == nums[j + 1] && j + 1 < n)
						j++;
				}
				temp.insert(nums[j]);
			}
		}
		return res;
	}
};
