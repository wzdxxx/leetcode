#include<stdio.h>
#include<malloc.h>
//1
//int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
//	for(int i=0;i<numsSize;i++){
//		for(int j=i+1;j<numsSize;j++){
//			if(target == nums[i]+nums[j]){
//				int* arr = (int *)malloc(sizeof(int)*2);
//				arr[0]=i;
//				arr[1]=j;
//				*returnSize = 2;
//				return arr;
//			}
//		}
//	}
//	*returnSize = 0;
//	return NULL;
//}
//2


struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
	int x = 0;
	int xx = 0;
	struct ListNode*l3 = NULL;
	struct ListNode*l = NULL;
	while (l1  || l2 ) {
		int n1 = l1 ? l1->val : 0;
		int n2 = l2 ? l2->val : 0;
		x = n1 + n2 + xx;
		if (l3) {
			l->next = (struct ListNode*)malloc(sizeof(struct ListNode));
			l = l->next;
			l->next = NULL;
			l->val = x % 10;
		} else {
			l3 = l = (struct ListNode*)malloc(sizeof(struct ListNode));
			l->next = NULL;
			l->val = x % 10;
		}
		xx = x / 10;
		if (l1) {
			l1 = l1->next;
		}
		if (l2) {
			l2 = l2->next;
		}
	}
	if (xx > 0) {
		l->next = (struct ListNode*)malloc(sizeof(struct ListNode));
		l->next->val = xx;
		l->next->next = NULL;
	}
	return l3;
}
