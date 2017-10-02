//唯一需要注意的是：越界问题，可以选择之前问题的方法，也可以使用64位数存储数据直接比较越界
//思路很简单，倒序即将原数字的低位变成结果的高位
//只是在考察对整除和取余的理解的一道题

class Solution {
public:
	int reverse(int x) {
		long ans = 0;
		while (x) {
			ans = ans * 10 + x % 10;
			x /= 10;
			if ((ans > INT_MAX) || (ans < INT_MIN))
				return 0;
		}
		return ans;
	}
};