//解法1 暴力破解

//使用二重循环，通过对数组的遍历找到匹配的值。
//尽可能不要使用类操作，会导致运行速度变慢。
//时间复杂度： O(n2)
//空间复杂度： O(1)



class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		int n = nums.size();
		for (int i = 0; i < n; i++) {
			for (int j = i + 1; j < n; j++) {
				if (target == nums[i] + nums[j]) {
					return { i,j };
				}
			}
		}
	}
};