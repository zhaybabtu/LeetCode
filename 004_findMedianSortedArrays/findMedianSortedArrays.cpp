//զһ���ܸ��ӵ��⣬����ֻҪ������λ���Ķ���ͷǳ��򵥡�
//��������λ���Ķ��壺���������м���������м���������ƽ��ֵ��
//��ô����ͺܼ��ˣ���Ȼ����λ����������һ������N/2��Ԫ�ص�ֵ����λ����
//����ֻ��Ҫ������ȥ���������е����ֵN/2�ξͿ����ҵ���λ���ˡ�
//���Ҷ����Ѿ��ź�������飬����ÿ��ֻ��Ҫ�Ƚϸ���������һ��ֵ�Ϳ����ˡ�

//�����Ǿ���ʵ��ʱ��һЩע�����
//	1.ע�⴦������Ϊ��ʱ�������
//	2.���鳤��Ϊ������ż��ʱ�������ʽ����һ����
//	3.ע�������ʱ���������ͣ�һ�������͵Ķ�̬���飬һ����˫���ȸ�������



class Solution {
public:
	double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

		/*�жϸ���������Ƿ�Ϊ��*/
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

		/*����ȥ��N/2�����ֵ*/
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

		/*���ؽ��*/
		if (numsSize % 2)
			return ans;
		else
			return (ans + tmp) / 2.0;
	}
};