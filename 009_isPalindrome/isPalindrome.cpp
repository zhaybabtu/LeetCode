//˼·������
//	ֱ�Ӱ����ַ��򣬱���룬���Խ��Խ�鷳��



class Solution {
public:
	bool isPalindrome(int x) {
		if (x < 0)
			return false;
		int a = 0;
		int tmp = x;
		while (tmp)
		{
			a = 10 * a + tmp % 10;
			tmp /= 10;
		}
		return x == a;
	}
};