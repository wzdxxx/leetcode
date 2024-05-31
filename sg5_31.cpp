#include<stdio.h>
#include<string.h>
#include<malloc.h>
#include<math.h>

//26

//int removeDuplicates(int* nums, int numsSize) {
//	if(numsSize==0){
//		return 0;
//	}
//	int i = 0;
//	int j = 1;
//	while(i<j&&j<numsSize){
//		if(nums[i]!=nums[j]){
//			nums[++i] = nums[j];
//		}
//		j++;
//	}
//	return i+1;
//}

//27

int removeElement(int* nums, int numsSize, int val) {
	if(numsSize==0){
		return 0;
	}
	int i , j;
	i = j = 0;
	while(j < numsSize){
		if(nums[j]!=val){
			nums[i++] = nums[j];
		}
		j++;
	}
	return i;
}


int main(){
	int arr[]={0,2,2,2,4,5,6};
	printf("%d",removeElement(arr,7,2));
	return 0;
}
