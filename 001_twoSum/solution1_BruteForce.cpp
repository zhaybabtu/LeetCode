//�ⷨ1 �����ƽ�

//ʹ�ö���ѭ����ͨ��������ı����ҵ�ƥ���ֵ��
//�����ܲ�Ҫʹ����������ᵼ�������ٶȱ�����
//ʱ�临�Ӷȣ� O(n2)
//�ռ临�Ӷȣ� O(1)



class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {	/*������Solution���е�һ�������������λ��Ϊnums����������Ϊtarget������������ֵλ�������͵Ķ�̬�����*/
		int numsSize = nums.size();						/*��ǰ��������鳤�ȣ�����ѭ������ʱʹ��*/
		for (int i = 0; i < numsSize; i++) {			/*������ĵ�0��Ԫ�ص���n-2��Ԫ�ر���*/
			for (int j = i + 1; j < numsSize; j++) {	/*�鿴����ĵ�i��Ԫ�ص����һ��Ԫ��*/
				if (target == nums[i] + nums[j]) {		/*�ж�����ֵ֮���Ƿ����target*/
					return { i,j };						/*���Ƿ��ؽ����������������*/
				}
			}
		}
	}
};