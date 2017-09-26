//解法思路：
//	对于任意一个回文子串来说，其一定有一个中心值，使它两侧的值互为镜像。
//	这种设中心值为m，那么一定有m - i = m + i。
//	一个字符串可能的中心值为其每个元素或相邻的两个相同元素。
//	我们只要遍历所有的可能中心值，找到其最大的回文子串长度即可。
//	对于结果输出，我们只需要知道最大回文子串的起始值和长度就可以了。

//注意问题：
//	1.注意不要使得字符串下标越界。
//	2.怎么求出最大子串的起始值？

//解法分析
//	时间复杂度：O(n2)	空间复杂度：O(1)

class Solution {
public:
	string longestPalindrome(string s) {
		int strSize = s.size();
		int maxLength = 1;
		int start = 0;
		for (int i = 0; i < strSize; i++) {
			if (s[i] == s[i + 1]) {
				int tmp = 2;
				int j = 1;
				while (i - j >= 0 && i + j < strSize) {
					if (s[i - j] == s[i + 1 + j]) {
						j++;
						tmp += 2;
					}
					else
						break;
				}
				if (tmp > maxLength) {
					maxLength = tmp;
					start = i - j + 1;
				}
			}
			int j = 1;
			int tmp = 1;
			while (i - j >= 0 && i + j < strSize) {
				if (s[i - j] == s[i + j]) {
					j++;
					tmp += 2;
				}
				else
					break;
			}
			if (tmp > maxLength) {
				maxLength = tmp;
				start = i - j + 1;
			}
		}
		return s.substr(start, maxLength);
	}
};