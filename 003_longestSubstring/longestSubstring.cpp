//解法：利用哈希表

//本题可以翻译为求一个字符串中相同的两个元素的最大距离。
//同样可以使用哈希表迅速查看
//我们可以建立一个哈希表来讲字符串的每个字符存入哈希表中。
//遍历字符串，查看当前字符是否已出现在哈希表中，
//若已经出现，求出该元素之间字符串长度后与当前最大子串长度相比较，取较大值为最大子串长度。
//若该元素并未出现，将该元素的索引值存入哈希表中。
//注意：
//	哈希表永远存储某一元素最后一次出现的值。




class Solution {
public:
	int lengthOfLongestSubstring(string s) {
		int strLength = s.size();
		int maxLength = 0;
		int idx = -1;
		vector<int> dic(256, -1);				//建立哈希表，key值为元素的ASCII码值
		for (int i = 0; i < strLength; i++) {	//遍历字符串
			char tmp = s[i];
			if (dic[tmp] > idx)
				idx = dic[tmp];
			maxLength = max(maxLength, i - idx);
			dic[tmp] = i;
		}
		return maxLength;
	}
};