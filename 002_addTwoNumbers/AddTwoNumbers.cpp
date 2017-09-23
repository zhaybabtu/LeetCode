//解法原理：加法列式运算

/*
本题将两个整数的值的每一位单独存储，基本解题思想是使用两个数的每一位对应相加在加上上一位的进位值。
本题主要考察对链表元素进行创建的操作。
需要注意的点如下：
	1.如果输入数据为0怎么办？
	2.两个输入数据长度不同怎么办？
	3.最后一位若出现0怎么办？
解决了以上问题，就可以完美的解决本题了。
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

		ListNode* head = new ListNode(0);		/*新建头结点*/
		ListNode* t = head;						/*建立两个链表指针用于数据增加和删除*/
		ListNode* tp = head;
		int carry = 0;							/*初始化进位值*/
		int n1 = l1->val, n2 = l2->val;			/*定义n1和n2为当前链表的值，若链表为空，则为0*/

		while (l1 || l2) {						/*从最低位加到最高位*/
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
		if (!carry)								/*处理最高位为0的情况*/
			tp->next = NULL;
		return head;
	}
};