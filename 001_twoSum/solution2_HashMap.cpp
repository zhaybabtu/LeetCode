//解法2 hash表查找

//使用一次循环，将数组映射到hash表中。
//在遍历的过程中，不断查看目标值与当前值的差是否在hash表中，若已存在即可求得结果
//时间复杂度： O(n)
//空间复杂度： O(n)


class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		int numsSize = nums.size();
		map<int, int> numsMap;							/*建立哈希表*/
		for (int i = 0; i < numsSize; i++) {			/*从数组的第0个元素到第n-1个元素遍历*/
			int temp = target - nums[i];				/*求出target与当前对象的差值*/
			if (numsMap.count(temp)) {					/*若哈希表中已经存在差值，则直接返回，否则将当前数组值存入哈希表*/
				return { numsMap[target - nums[i]],i };
			}
			else {
				numsMap[nums[i]] = i;
			}
		}
	}
};