#include <stdio.h>
#include "my_cstring.h"
#include <string.h>

int
test_my_strlen(){
	char *s[10] = {"", "a", "ab", "abc", "abcd", "abcde", "abcdef", "abcdefg", "abcdefgh", "abcdefghi"};
	//test my_strlen
	int i;
	for(i = 0; i < 10; ++i){
		size_t my_len = my_strlen(s[i]);
		size_t len = strlen(s[i]);
		if(my_len != len){
			printf("error: my_strlen(%s) = %lu, strlen(%s) = %lu\n", s[i], my_len, s[i], len);
			break;
		}
	}
	if(i == 10){
		printf("my_strlen: sucess\n");
		return 1;
	}
	return 0;
}

int
test_my_strncpy(){
	//test my_strncpy
	char s10[40] = "abc ";
	char s11[10] = "";
	char *s20 = "you stupid guy, check out the function carefully!";
	char *s21 = "";

	//nomal copy
	if(strcmp(my_strncpy(s10, s20, 14), "you stupid guy") != 0){
		printf("error: my_strncpy(s10, s20, 14) = %s\n", s10);
		goto END;
	}
	//copy empty string to s11
	if(strcmp(my_strncpy(s11, s21, 0), "") != 0){
		printf("error: my_strncpy(s11, s21, 3) = %s\n", s11);
		goto END;
	}

	printf("my_strncpy: sucess\n");
	return 1;

	END:
	return 0;
}

int
test_my_strcpy(){
	//test my_strcpy
	char s10[70] = "abc ";
	char s11[10] = "";
	char *s20 = "you stupid guy, check out the function carefully!";
	char *s21 = "";

	//nomal copy
	if(strcmp(my_strcpy(s10, s20), "you stupid guy, check out the function carefully!") != 0){
		printf("error: my_strcpy(s10, s20) = %s\n", s10);
		goto END;
	}
	//copy empty string to s11
	if(strcmp(my_strcpy(s11, s21), "") != 0){
		printf("error: my_strcpy(s11, s21) = %s\n", s11);
		goto END;
	}

	printf("my_strcpy: sucess\n");
	return 1;

	END:
	return 0;
}

int
test_my_strcmp(){
	//test my_strcmp
	char *s[10] = {"", "a", "ab", "abc", "abcd", "abcde", "abcdef", "abcdefg", "abcdefgh", "abcdefghi"};
	int i;
	for(i = 0; i < 10; ++i){
		if(my_strcmp(s[i], s[i]) != strcmp(s[i], s[i])){
			printf("error: my_strcmp(%s, %s) = %d, strcmp(%s, %s) = %d\n", s[i], s[i], my_strcmp(s[i], s[i]), s[i], s[i], strcmp(s[i], s[i]));
			break;
		}
	}
	if(i == 10){
		printf("my_strcmp: sucess\n");
		return 1;
	}
	return 0;
}

int 
test_my_strchr(){
	//test my_strchr
	char *s[10] = {"", "a", "ab", "abc", "abcd", "abcde", "abcdef", "abcdefg", "abcdefgh", "abcdefghi"};
	int i;
	for(i = 1; i < 10; ++i){
		char *ret_my_strchr = my_strchr(s[i], 'a'+i-1);
		char *ret_strchr = strchr(s[i], 'a'+i-1);
		if(ret_my_strchr != ret_strchr){
			printf("error: my_strchr(%s, %c) = %p, strchr(%s, %c) = %p\n", s[i], 'a'+i-1, ret_my_strchr, s[i], 'a'+i-1, ret_strchr);
			break;
		}
	}
	
	if(i == 10){
		printf("my_strchr: sucess\n");
		return 1;
	}
	return 0;
}

int 
test_my_strncat(){
	//test my_strncat
	char s10[40] = "abc ";
	char s11[10] = "";
	char *s20 = "you stupid guy, check out the function carefully!";
	char *s21 = "";

	//nomal cat
	if(strcmp(my_strncat(s10, s20, 14), "abc you stupid guy") != 0){
		printf("error: my_strncat(s10, s20, 14) = %s\n", s10);
		goto END;
	}
	//cat empty string to s11
	if(strcmp(my_strncat(s11, s21, 0), "") != 0){
		printf("error: my_strncat(s11, s21, 3) = %s\n", s11);
		goto END;
	}

	printf("my_strncat: sucess\n");
	return 1;
	END:
	return 0;
}

int
test_my_strcat(){
	//test my_strcat
	char s10[70] = "abc ";
	char s11[10] = "";
	char *s20 = "you stupid guy, check out the function carefully!";
	char *s21 = "";

	//nomal cat
	if(strcmp(my_strcat(s10, s20), "abc you stupid guy, check out the function carefully!") != 0){
		printf("error: my_strcat(s10, s20) = %s\n", s10);
		goto END;
	}
	//cat empty string to s11
	if(strcmp(my_strcat(s11, s21), "") != 0){
		printf("error: my_strcat(s11, s21) = %s\n", s11);
		goto END;
	}

	printf("my_strcat: sucess\n");
	return 1;
	END:
	return 0;	
}

int 
test_my_strstr(){
	//test my_strstr
	char *s[10] = {"", "a", "ab", "abc", "abcd", "abcde", "abcdef", "abcdefg", "abcdefgh", "abcdefghi"};
	char *t[10] = {"", "a", "b", "c", "cd", "cde", "ef", "defg", "efgh", "hi"};
	int i, j;
	for(i = 0; i < 10; ++i){
		char *ret_my_strstr = my_strstr(s[i], t[i]);;
		char *ret_strstr = strstr(s[i], t[i]);
		if(*ret_my_strstr != *ret_strstr){
			printf("error: my_strstr(%s, %s) = %s, strstr(%s, %s) = %s\n", s[i], t[i], ret_my_strstr, s[i], t[i], ret_strstr);
			break;
		}
	}
	if(i == 10){
		printf("my_strstr: sucess\n");
		return 1;
	}
	return 0;
}

int main(int ac, char **av){
	int cnt = 0;
	cnt += test_my_strlen();
	cnt += test_my_strncpy();
	cnt += test_my_strcpy();
	cnt += test_my_strcmp();
	cnt += test_my_strchr();
	cnt += test_my_strncat();
	cnt += test_my_strcat();
	cnt += test_my_strstr();

	if(cnt == 8)printf("all check success!\n");
	return 0;
}



