//�ⷨԭ���ӷ���ʽ����

/*
���⽫����������ֵ��ÿһλ�����洢����������˼����ʹ����������ÿһλ��Ӧ����ڼ�����һλ�Ľ�λֵ��
������Ҫ���������Ԫ�ؽ��д����Ĳ�����
��Ҫע��ĵ����£�
	1.�����������Ϊ0��ô�죿
	2.�����������ݳ��Ȳ�ͬ��ô�죿
	3.���һλ������0��ô�죿
������������⣬�Ϳ��������Ľ�������ˡ�
*/

/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     ListNode *next;
*     ListNode(int x) : val(x), next(NULL) {}
* };
*/
class Solution {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

		if (!l1) return l2;
		else if (!l2) return l1;

		ListNode* head = new ListNode(0);		/*�½�ͷ���*/
		ListNode* t = head;						/*������������ָ�������������Ӻ�ɾ��*/
		ListNode* tp = head;
		int carry = 0;							/*��ʼ����λֵ*/
		int n1 = l1->val, n2 = l2->val;			/*����n1��n2Ϊ��ǰ�����ֵ��������Ϊ�գ���Ϊ0*/

		while (l1 || l2) {						/*�����λ�ӵ����λ*/
			t->val = (n1 + n2 + carry) % 10;
			carry = (n1 + n2 + carry) / 10;
			t->next = new ListNode(carry);
			tp = t;
			t = t->next;
			if (l1) {
				l1 = l1->next;
				if (l1)
					n1 = l1->val;
				else
					n1 = 0;
			}
			if (l2) {
				l2 = l2->next;
				if (l2)
					n2 = l2->val;
				else
					n2 = 0;
			}
		}
		if (!carry)								/*�������λΪ0�����*/
			tp->next = NULL;
		return head;
	}
};