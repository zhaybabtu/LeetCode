//�ⷨ2 hash�����

//ʹ��һ��ѭ����������ӳ�䵽hash���С�
//�ڱ����Ĺ����У����ϲ鿴Ŀ��ֵ�뵱ǰֵ�Ĳ��Ƿ���hash���У����Ѵ��ڼ�����ý��
//ʱ�临�Ӷȣ� O(n)
//�ռ临�Ӷȣ� O(n)


class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		int numsSize = nums.size();
		map<int, int> numsMap;							/*������ϣ��*/
		for (int i = 0; i < numsSize; i++) {			/*������ĵ�0��Ԫ�ص���n-1��Ԫ�ر���*/
			int temp = target - nums[i];				/*���target�뵱ǰ����Ĳ�ֵ*/
			if (numsMap.count(temp)) {					/*����ϣ�����Ѿ����ڲ�ֵ����ֱ�ӷ��أ����򽫵�ǰ����ֵ�����ϣ��*/
				return { numsMap[target - nums[i]],i };
			}
			else {
				numsMap[nums[i]] = i;
			}
		}
	}
};