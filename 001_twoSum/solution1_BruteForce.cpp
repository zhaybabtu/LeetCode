//�ⷨ1 �����ƽ�

//ʹ�ö���ѭ����ͨ��������ı����ҵ�ƥ���ֵ��
//�����ܲ�Ҫʹ����������ᵼ�������ٶȱ�����
//ʱ�临�Ӷȣ� O(n2)
//�ռ临�Ӷȣ� O(1)



class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		int n = nums.size();
		for (int i = 0; i < n; i++) {
			for (int j = i + 1; j < n; j++) {
				if (target == nums[i] + nums[j]) {
					return { i,j };
				}
			}
		}
	}
};