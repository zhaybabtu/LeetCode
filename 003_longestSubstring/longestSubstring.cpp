//�ⷨ�����ù�ϣ��

//������Է���Ϊ��һ���ַ�������ͬ������Ԫ�ص������롣
//ͬ������ʹ�ù�ϣ��Ѹ�ٲ鿴
//���ǿ��Խ���һ����ϣ�������ַ�����ÿ���ַ������ϣ���С�
//�����ַ������鿴��ǰ�ַ��Ƿ��ѳ����ڹ�ϣ���У�
//���Ѿ����֣������Ԫ��֮���ַ������Ⱥ��뵱ǰ����Ӵ�������Ƚϣ�ȡ�ϴ�ֵΪ����Ӵ����ȡ�
//����Ԫ�ز�δ���֣�����Ԫ�ص�����ֵ�����ϣ���С�
//ע�⣺
//	��ϣ����Զ�洢ĳһԪ�����һ�γ��ֵ�ֵ��




class Solution {
public:
	int lengthOfLongestSubstring(string s) {
		int strLength = s.size();
		int maxLength = 0;
		int idx = -1;
		vector<int> dic(256, -1);				//������ϣ��keyֵΪԪ�ص�ASCII��ֵ
		for (int i = 0; i < strLength; i++) {	//�����ַ���
			char tmp = s[i];
			if (dic[tmp] > idx)
				idx = dic[tmp];
			maxLength = max(maxLength, i - idx);
			dic[tmp] = i;
		}
		return maxLength;
	}
};