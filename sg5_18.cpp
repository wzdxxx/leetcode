#include<stdio.h>
#include<string.h>
#include<malloc.h>
//5
//
////判断是否回文数
//bool isPalindrome(char* s,int len) {
//	for(int i=0;i<len/2;i++){
//		//TODO
//		if(s[i]!=s[len-i-1]){
//			//TODO
//			return false;
//		}
//	}
//	return true;
//}
//
//char* longestPalindrome(char* s) {
//	int length, maxlength;
//	length= maxlength=0;
//	char*tem=s;
//	//empty string
//	if(*s=='\0'){
//		return s;
//	}
//	//遍历算字符数
//	while(*tem!='\0'){
//		//TODO
//		length++;
//		tem++;
//	}
//	tem=s;
//	for(int i=0;i<length;i++){
//		for(int j=i+1;j<=length;j++){
//			//TODO
//			if(isPalindrome(s+i,j-i)&&maxlength<j-i){
//				//TODO
//				tem=s+i;
//				maxlength=j-i;
//			}
//		}
//	}
//	char*ret = (char*)malloc(sizeof(char)*maxlength+1);
//	for(length=0;length<maxlength;length++){
//		*(ret+length)=*(tem+length);
//	}
//	*(ret+length)='\0';
//	return ret;
//}


//6

//char* convert(char* s, int numRows) {
//	int num = strlen(s);
//	//不用排或者排不下
//	if (numRows == 1 || num < numRows) {
//		return s;
//	}
//	//周期
//	int t = numRows * 2 - 2;
//	int arrn = 0;
//	char*arr = (char*)malloc(sizeof(char) * num + 1);
//	for (int i = 0; i < numRows; i++) {
//		for (int j = 0; j + i < num; j += t) {
//			arr[arrn++] = s[i + j];
//			//不是第一个也不是最后一个而且还未越界就有第二个字符
//			if (0 < i && i < numRows - 1 && j + t - i < num) {
//				arr[arrn++] = s[j + t - i];
//			}
//		}
//	}
//	arr[arrn] = '\0';
//	return arr;
//}

//7

//int reverse(int x) {
//	int ret = 0;
//	while (x != 0) {
//		//判断是否超过限制
//		if (ret < INT_MIN / 10 || ret > INT_MAX / 10) {
//			return 0;
//		}
//		ret = ret * 10 + (x % 10);
//		x /= 10;
//	}
//	return ret;
//}

//8
//
//int myAtoi(char* s) {
//	//读入空格
//	int x = 0;
//	int flag = 1;
//	while(*s==' '){
//		s++;
//	}
//	//判断是否为负
//	if(*s=='-'){
//		flag = -1;
//		s++;
//	}
//	else if(*s=='+'){
//		s++;
//	}
//	while(*s<='9'&&*s>='0'&&*s!='\0'){
//		if(x > ((INT_MAX - (*s-'0')) )/10){
//			return INT_MAX;
//		}
//		if(x < ((INT_MIN + (*s-'0')) /10)){
//			return INT_MIN;
//		}
//		x*=10;
//		x+=flag * (*s-'0');
//		s++;
//	}
//	return x;
//}

//9

//bool isPalindrome(int x) {
//	//负数绝对不是回文数
//	if(x<0){
//		return false;
//	}
//	char arr[32]={'a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a'};
//	int i = 0;
//	while(x!=0){
//		arr[i++]=x%10;
//		x/=10;
//	}
//	for(int j=0;j<i/2;j++){
//		if(arr[j]!=arr[i-j-1]){
//			return false;
//		}
//	}
//	return true;
//}

//10
//暴力算法，这道题感觉挺难，参考的别人的

bool isMatch(char * s, char * p){
	//如果p为空，s为空匹配，s非空不匹配
	if (!*p) return !*s;
	//s非空，p == s || p == '.'时第一个字符匹配
	bool first_match = *s && (*s == *p || *p == '.');
	
	if (*(p+1) == '*') {
		//*匹配0个字符,s匹配剩下的||*匹配1个字符,继续用p匹配剩下的s
		return isMatch(s, p+2) || (first_match && isMatch(++s, p));
	} 
	else {
		//(p+1) != ''，则递归判断剩下的是否匹配
		return first_match && isMatch(++s, ++p);
	}
}


//11
//int max(int x,int y){
//	return x>y?x:y;
//}
//int min(int x,int y){
//	return x<y?x:y;
//}
//int maxArea(int* height, int heightSize) {
//	int i=0;
//	int j=heightSize-1;
//	int tem = 0;
//	int ret = 0;
//	while(i<j){
//		tem = min(height[i],height[j])*(j-i);
//		if(height[i]<height[j])
//			i++;
//		else
//			j--;
//		ret=max(ret,tem);
//	}
//	return ret;
//}

//12

////对应0,1,2,3
//char* a[] = {"", "M", "MM", "MMM"};
////对应0,1,2,3,4,5,6,7,8,9
//char* b[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
////对应0,1,2,3,4,5,6,7,8,9
//char* c[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
////对应0,1,2,3,4,5,6,7,8,9
//char* d[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
//
//char* intToRoman(int num) {
//	char* arr = (char*)malloc(sizeof(char) * 16);
//	arr[0] = '\0';
//	strcpy(arr + strlen(arr), a[num / 1000]);
//	strcpy(arr + strlen(arr), b[num % 1000 / 100]);
//	strcpy(arr + strlen(arr), c[num % 100 / 10]);
//	strcpy(arr + strlen(arr), d[num % 10]);
//	return arr;
//}

//13

int romanToInt(char* s) {
	int arr[26];
	arr['I' - 'A'] = 1;
	arr['V' - 'A'] = 5;
	arr['X' - 'A'] = 10;
	arr['L' - 'A'] = 50;
	arr['C' - 'A'] = 100;
	arr['D' - 'A'] = 500;
	arr['M' - 'A'] = 1000;
	int n = strlen(s);
	int ret,tem;
	ret = tem = 0;
	for(int i=0;i<n;i++){
		tem = arr[s[i]-'A'];
		//当前位置的元素比下个位置的元素小，就减去当前值，否则加上当前值
		if(i<n-1&&tem<arr[s[i+1]-'A']){
			ret-=tem;
		}
		else
			ret+=tem;
	}
	return ret;
}


int main() {
	//测试
	
	return 0;
}
