//分支结构的使用，没有智商的问题。
//唯一涉及的知识是罗马数字的组数规则，具体百度即可

class Solution {
public:
	int romanToInt(string s) {
		int ans = 0;
		int tmp = 0;
		int strSize = s.size();
		for (int i = 0; i < strSize; i++)
		{
			switch (s[i])
			{
			case 'I':
				tmp = 1;
				if (s[i + 1] == 'V')
				{
					tmp = 4;
					i++;
				}
				if (s[i + 1] == 'X')
				{
					tmp = 9;
					i++;
				}
				break;
			case 'V':
				tmp = 5;
				break;
			case 'X':
				tmp = 10;
				if (s[i + 1] == 'L')
				{
					tmp = 40;
					i++;
				}
				if (s[i + 1] == 'C')
				{
					tmp = 90;
					i++;
				}
				break;
			case 'L':
				tmp = 50;
				break;
			case 'C':
				tmp = 100;
				if (s[i + 1] == 'D')
				{
					tmp = 400;
					i++;
				}
				if (s[i + 1] == 'M')
				{
					tmp = 900;
					i++;
				}
				break;
			case 'D':
				tmp = 500;
				break;
			case 'M':
				tmp = 1000;
				break;
			}
			ans += tmp;
		}
		return ans;
	}
};