//必须明确的点有3个:
//	1.最大面积为当前面积和当前最大面积之间较大的一个
//	2.当前面积为宽度与高度较小值得乘积
//	3.必须要使宽度或高度至少有一个变化,变化的应该是短板
//
//那么解题的思路就很明确了,只有从两端开始,先使宽度最大,不断改变高度的最小值即可

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