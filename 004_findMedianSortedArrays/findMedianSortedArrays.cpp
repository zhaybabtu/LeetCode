//咋一看很复杂的题，但是只要明白中位数的定义就非常简单。
//先来看中位数的定义：数列中最中间的数或是中间两个数的平均值。
//那么问题就很简单了，既然是中位数，数列中一定会有N/2个元素的值比中位数大。
//我们只需要依次拿去两个数列中的最大值N/2次就可以找到中位数了。
//并且对于已经排好序的数组，我们每次只需要比较该数组的最后一个值就可以了。

//下面是具体实现时的一些注意事项：
//	1.注意处理数组为空时的情况。
//	2.数组长度为奇数和偶数时，输出形式并不一样。
//	3.注意在输出时的数据类型，一个是整型的动态数组，一个是双精度浮点数。



class Solution {
public:
	double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

		/*判断给入的数组是否为空*/
		if (nums1.empty()) {
			if (nums2.empty()) {
				return 0;
			}
			if (nums2.size() % 2)
				return nums2[nums2.size() / 2];
			else {
				int a1 = nums2[nums2.size() / 2];
				int a2 = nums2[nums2.size() / 2 - 1];
				return (a1 + a2) / 2.0;
			}
		}
		if (nums2.empty()) {
			if (nums1.size() % 2)
				return nums1[nums1.size() / 2];
			else {
				int a1 = nums1[nums1.size() / 2];
				int a2 = nums1[nums1.size() / 2 - 1];
				return (a1 + a2) / 2.0;
			}
		}


		int n1 = nums1.size();
		int n2 = nums2.size();
		int numsSize = n1 + n2;
		int ans = 0;
		int tmp = 0;

		/*依次去除N/2个最大值*/
		for (int i = 0; i <= numsSize / 2; i++) {
			tmp = ans;
			if (nums1.back() >= nums2.back()) {
				ans = nums1.back();
				nums1.pop_back();
			}
			else {
				ans = nums2.back();
				nums2.pop_back();
			}
		}

		/*返回结果*/
		if (numsSize % 2)
			return ans;
		else
			return (ans + tmp) / 2.0;
	}
};