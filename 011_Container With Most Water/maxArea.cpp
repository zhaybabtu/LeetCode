//������ȷ�ĵ���3��:
//	1.������Ϊ��ǰ����͵�ǰ������֮��ϴ��һ��
//	2.��ǰ���Ϊ�����߶Ƚ�Сֵ�ó˻�
//	3.����Ҫʹ��Ȼ�߶�������һ���仯,�仯��Ӧ���Ƕ̰�
//
//��ô�����˼·�ͺ���ȷ��,ֻ�д����˿�ʼ,��ʹ������,���ϸı�߶ȵ���Сֵ����

class Solution {
public:
	int maxArea(vector<int>& height) {
		int area = 0;
		int i = 0, j = height.size() - 1;
		while (i < j)
		{
			area = max(area, min(height[i], height[j]) * (j - i));
			if (height[i] < height[j])   i++;
			else    j--;
		}
		return area;
	}
};