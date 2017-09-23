//解法1 暴力破解

//使用二重循环，通过对数组的遍历找到匹配的值。
//尽可能不要使用类操作，会导致运行速度变慢。
//时间复杂度： O(n2)
//空间复杂度： O(1)



class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {	/*定义了Solution类中的一个函数，其参数位名为nums的数组与名为target的整数，返回值位整数类型的动态数组的*/
		int numsSize = nums.size();						/*提前计算出数组长度，便于循环遍历时使用*/
		for (int i = 0; i < numsSize; i++) {			/*从数组的第0个元素到第n-2个元素遍历*/
			for (int j = i + 1; j < numsSize; j++) {	/*查看数组的第i个元素到最后一个元素*/
				if (target == nums[i] + nums[j]) {		/*判断两个值之和是否等于target*/
					return { i,j };						/*若是返回结果，结束函数调用*/
				}
			}
		}
	}
};