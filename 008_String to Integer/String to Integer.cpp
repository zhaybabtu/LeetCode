//������ʵ�����൱�򵥣�������Ҫ���ǵ�����϶ࣻ
//˼·�����������пո�, Ѱ�ҵ�һ�����ķǿո�Ԫ��,�ж������ֵ:
//	1.+��-����һ���жϺ����ֵ
//	2.���֣���������жϣ�ֱ������������λ��
//	3.����������0
//��Ҫע�������ֵԽ������⣺
//	��ֵԽ�����ͨ���ٽ�ֵ�뵱ǰֵ���бȽϵó�



class Solution {
public:
	int myAtoi(string str) {
		int strSize = str.size();
		int ans = 0;
		int tag = 1;							/*���ű�־*/
		int start;
		for (int i = 0; i < strSize; i++) {		/*Ѱ�Ҽ������ʼλ*/
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
		for (int i = start + 1; i < strSize; i++) {		/*����ת�������ֵ*/
			if (str[i] < '0' || str[i] > '9')			/*�����������ַ���ֹ*/
				return tag * ans;
			int tmp = ans;
			ans = 10 * ans + (str[i] - '0');
			if (ans < 0 || ans / 10 != tmp) {			/*�ж�Խ��*/
				if (tag == 1)
					return INT_MAX;
				else
					return INT_MIN;
			}
		}
		return tag * ans;
	}
};