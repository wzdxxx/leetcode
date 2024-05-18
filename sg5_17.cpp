#include<stdio.h>
#include<malloc.h>
//3
//int lengthOfLongestSubstring(char* s) {
//	int len, returnlen;
//	char * arr1 = s;
//	char * arr2 = s;
//	len  = returnlen = 1;
//	int flag = 0;
//	if((*s)=='\0')
//		return 0;
//	while((*s)!='\0'){
//		len = 1;
//		arr1 = s + 1;
//		arr2 = s + 1;
//		while((*arr2) != '\0'){
//			for(flag = 0, arr1 = s;arr1 != arr2;arr1++){
//				if(*arr1 == *arr2){
//					flag = 1;
//				}
//			}
//			if(flag)
//				break;
//			++len;
//			++arr2;
//		}
//		if(returnlen < len)
//			returnlen = len;
//		++s;
//	}
//	return returnlen;
//}

//4
double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
	int x=nums1Size + nums2Size;
	int i,j,k,x1,x2;
	double ret = 0;
	x1=x/2;
	x2=-1;
	if(x%2==0)
		x2=(x/2)-1;
	for(i=0,j=0,k=0;i<x&&j<nums1Size&&k<nums2Size;i++){
		if(nums1[j]>nums2[k]){
			if(i==x1||i==x2){
				ret+=nums2[k];
			}
			k++;
		}
		else{
			if(i==x1||i==x2){
				ret+=nums1[j];
			}
			j++;
		}
	}
	if(j>=nums1Size){
		for(;k<nums2Size;k++,i++){
			if(i==x1||i==x2){
				ret+=nums2[k];
			}
		}
	}
	if(k>=nums2Size){
		for(;j<nums1Size;j++,i++){
			if(i==x1||i==x2){
				ret+=nums1[j];
			}
		}
	}
	if(x%2==0)
		ret/=2;
	return ret;
}



