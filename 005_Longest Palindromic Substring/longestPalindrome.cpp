//�ⷨ˼·��
//	��������һ�������Ӵ���˵����һ����һ������ֵ��ʹ�������ֵ��Ϊ����
//	����������ֵΪm����ôһ����m - i = m + i��
//	һ���ַ������ܵ�����ֵΪ��ÿ��Ԫ�ػ����ڵ�������ͬԪ�ء�
//	����ֻҪ�������еĿ�������ֵ���ҵ������Ļ����Ӵ����ȼ��ɡ�
//	���ڽ�����������ֻ��Ҫ֪���������Ӵ�����ʼֵ�ͳ��ȾͿ����ˡ�

//ע�����⣺
//	1.ע�ⲻҪʹ���ַ����±�Խ�硣
//	2.��ô�������Ӵ�����ʼֵ��

//�ⷨ����
//	ʱ�临�Ӷȣ�O(n2)	�ռ临�Ӷȣ�O(1)

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