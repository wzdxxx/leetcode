#include<stdio.h>
#include<string.h>
#include<malloc.h>
#include<math.h>

//14

//char* longestCommonPrefix(char** strs, int strsSize) {
//	int i,j,k;
//	i=j=0;
//	int flag = 0;
//	k=strlen(strs[0]);
//	for(int i=0;i<strsSize;i++){
//		if(k>strlen(strs[i])){
//			k=strlen(strs[i]);
//		}
//	}
//	for(i=0;i<k;i++){
//		for(j=0;j<strsSize;j++){
//			if(strs[0][i]!=strs[j][i]){
//				flag = 1;
//			}
//			if(flag){
//				break;
//			}
//		}
//		if(flag){
//			break;
//		}
//	}
//	if(i==0){
//		return "";
//	}
//	else{
//		char*s=(char*)malloc(sizeof(char)*(i+1));
//		for(j=0;j<i;j++){
//			s[j]=strs[0][j];
//		}
//		s[i]='\0';
//		return s;
//	}
//}

//15
//一堆**不太会，下一个



//16

//int threeSumClosest(int* nums, int numsSize, int target) {
//	int ret = nums[0]+nums[1]+nums[2];
//	for(int i=0;i<numsSize-2;i++){
//		for(int j=i+1;j<numsSize-1;j++){
//			for(int k=j+1;k<numsSize;k++){
//				if(abs(target - (nums[i]+nums[j]+nums[k])) < abs(target - ret)){
//					ret = nums[i]+nums[j]+nums[k];
//				}
//			}
//		}
//	}
//	return ret;
//}

//17
//没思路


//18
//一堆**不太会，下一个

//19

//struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
//	struct ListNode* dummy = (struct ListNode*)malloc(sizeof(struct ListNode));
//	dummy->val = 0, dummy->next = head;
//	struct ListNode * beg = dummy;
//	struct ListNode * end = head;
//	for(int i=0;i<n;i++){
//		end=end->next;
//	}
//	while(end){
//		beg=beg->next;
//		end=end->next;
//	}
//	end = beg->next;
//	beg->next=end->next;
//	free(end);
//	struct ListNode* ret = dummy->next;
//	free(dummy);
//	return ret;
//}

//20
//char ret(char a) {
//	if (a == '{')
//		return '}';
//	else if (a == '[')
//		return ']';
//	else
//		return ')';
//}
//bool isValid(char* s) {
//	int n = strlen(s);
//	int num = 0;
//	if(n%2==1)
//		return false;
//	char arr[n];
//	for(int i=0;s[i]!='\0';i++){
//		if(s[i]=='('|| s[i]=='{'||s[i]=='['){
//			arr[num++] = ret(s[i]);
//		}
//		else{
//			if(num!=0&&arr[num-1]==s[i]){
//				num--;
//			}
//			else
//				return false;
//		}
//	}
//	if(num==0){
//		return true;
//	}
//	return false;
//}

//21

//struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
//	struct ListNode* head = (struct ListNode*)malloc(sizeof(struct ListNode));
//	struct ListNode* tem = head;
//	while(list1&&list2){
//		if(list1->val<=list2->val){
//			tem->next = list1;
//			tem=tem->next;
//			list1=list1->next;
//		}
//		else{
//			tem->next = list2;
//			tem=tem->next;
//			list2=list2->next;
//		}
//	}
//	if(list1 == NULL){
//		tem->next =list2;
//	}
//	else{
//		tem->next=list1;
//	}
//	tem = head->next;
//	free(head);
//	return tem;
//}

//22
//又是一堆**

//23

//struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
//	struct ListNode* head = (struct ListNode*)malloc(sizeof(struct ListNode));
//	struct ListNode* tem = head;
//	while(list1&&list2){
//		if(list1->val<=list2->val){
//			tem->next = list1;
//			tem=tem->next;
//			list1=list1->next;
//		}
//		else{
//			tem->next = list2;
//			tem=tem->next;
//			list2=list2->next;
//		}
//	}
//	if(list1 == NULL){
//		tem->next =list2;
//	}
//	else{
//		tem->next=list1;
//	}
//	tem = head->next;
//	free(head);
//	return tem;
//}
//
//struct ListNode* mergeKLists(struct ListNode** lists, int listsSize) {
//	struct ListNode* a = NULL;
//	for(int i = 0;i<listsSize;i++){
//		a = mergeTwoLists(a,lists[i]);
//	}
//	return a;
//}

//24

//struct ListNode* swapPairs(struct ListNode* head) {
//	struct ListNode* ret = (struct ListNode*)malloc(sizeof(struct ListNode));
//	struct ListNode* beg,*end;
//	ret->next = head;
//	head = ret;
//	while(ret){
//		if(ret->next!=NULL){
//			//TODO
//			beg = ret->next;
//		}
//		else
//			break;
//		if(beg->next!=NULL){
//			//TODO
//			end = beg->next;
//		}
//		else
//			break;
//		beg->next=end->next;
//		end->next=beg;
//		ret->next=end;
//		ret = beg;
//	}
//	ret = head->next;
//	free(head);
//	return ret;
//}

//25
//没思路




int main() {
	//测试

	return 0;
}


