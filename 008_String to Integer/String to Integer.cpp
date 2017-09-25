//本题其实方法相当简单，就是需要考虑的情况较多；
//思路是先跳过所有空格, 寻找第一遇到的非空格元素,判断其具体值:
//	1.+，-：加一后判断后面的值
//	2.数字：继续向后判断，直到遇到非数字位置
//	3.其他：返回0
//需要注意的是数值越界的问题：
//	数值越界可以通过临界值与当前值进行比较得出



class Solution {
public:
	int myAtoi(string str) {
		int strSize = str.size();
		int ans = 0;
		int tag = 1;							/*符号标志*/
		int start;
		for (int i = 0; i < strSize; i++) {		/*寻找计算的起始位*/
			if (str[i] == '+') {
				start = i;
				break;
			}
			if (str[i] == '-') {
				start = i;
				tag = -1;
				break;
			}
			if (str[i] >= '0' && str[i] <= '9') {
				start = i;
				ans = str[i] - '0';
				break;
			}
			if (str[i] == ' ') {
				continue;
			}
			return 0;
		}
		for (int i = start + 1; i < strSize; i++) {		/*计算转化后的数值*/
			if (str[i] < '0' || str[i] > '9')			/*遇到非数字字符终止*/
				return tag * ans;
			int tmp = ans;
			ans = 10 * ans + (str[i] - '0');
			if (ans < 0 || ans / 10 != tmp) {			/*判断越界*/
				if (tag == 1)
					return INT_MAX;
				else
					return INT_MIN;
			}
		}
		return tag * ans;
	}
};