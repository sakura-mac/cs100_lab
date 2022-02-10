#include <stdio.h>
#include "my_cstring.h"
#include <string.h>

int
test_my_strlen(){
	char *s[10] = {"", "a", "ab", "abc", "abcd", "abcde", "abcdef", "abcdefg", "abcdefgh", "abcdefghi"};
	//test my_strlen
	int i;
	for(i = 0; i < 10; ++i){
		if(my_strlen(s[i]) != strlen(s[i])){
			printf("error: my_strlen(%s) = %lu, strlen(%s) = %lu\n", s[i], my_strlen(s[i]), s[i], strlen(s[i]));
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
	if(my_strncpy(s10, s20, 14) != strncpy(s10, s20, 14)){
		printf("error: my_strncpy(%s, %s, %d) = %s, strncpy(%s, %s, %d) = %s\n", s10, s20, 14, my_strncpy(s10, s20, 14), s10, s20, 14, strncpy(s10, s20, 14));
		goto END;
	}
	//copy empty string to s11
	if(my_strncpy(s11, s21, 3) != strncpy(s11, s21, 3)){
		printf("error: my_strncpy(%s, %s, %d) = %s, strncpy(%s, %s, %d) = %s\n", s11, s21, 3, my_strncpy(s11, s20, 3), s11, s21, 3, strncpy(s11, s21, 3));
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
	char s10[40] = "abc ";
	char s11[10] = "";
	char *s20 = "you stupid guy, check out the function carefully!";
	char *s21 = "";

	//nomal copy
	if(my_strcpy(s10, s20) != strcpy(s10, s20)){
		printf("error: my_strcpy(%s, %s) = %s, strcpy(%s, %s) = %s\n", s10, s20, my_strcpy(s10, s20), s10, s20, strcpy(s10, s20));
		goto END;
	}
	//copy empty string to s11
	if(my_strcpy(s11, s21) != strcpy(s11, s21)){
		printf("error: my_strcpy(%s, %s) = %s, strcpy(%s, %s) = %s\n", s11, s21, my_strcpy(s11, s21), s11, s21, strcpy(s11, s21));
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
		if(my_strchr(s[i], 'a'+i-1) != strchr(s[i], 'a'+i-1)){
			printf("error: my_strchr(%s, %c) = %s, strchr(%s, %c) = %s\n", s[i], 'a'+i-1, my_strchr(s[i], 'a'+i-1), s[i], 'a'+i-1, strchr(s[i], 'a'+i-1));
			break;
		}
	}
	if(my_strchr(s[0], 'a') != strchr(s[0], 'a')){
		printf("error: my_strchr(%s, %c) = %s, strchr(%s, %c) = %s\n", s[0], 'a', my_strchr(s[0], 'a'), s[0], 'a', strchr(s[0], 'a'));
		return 0;
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
	if(my_strncat(s10, s20, 14) != strncat(s10, s20, 14)){
		printf("error: my_strncat(%s, %s, %d) = %s, strncat(%s, %s, %d) = %s\n", s10, s20, 14, my_strncat(s10, s20, 14), s10, s20, 14, strncat(s10, s20, 14));
		goto END;
	}
	//cat empty string to s11
	if(my_strncat(s11, s21, 3) != strncat(s11, s21, 3)){
		printf("error: my_strncat(%s, %s, %d) = %s, strncat(%s, %s, %d) = %s\n", s11, s21, 3, my_strncat(s11, s20, 3), s11, s21, 3, strncat(s11, s21, 3));
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
	char s10[40] = "abc ";
	char s11[10] = "";
	char *s20 = "you stupid guy, check out the function carefully!";
	char *s21 = "";

	//nomal cat
	if(my_strcat(s10, s20) != strcat(s10, s20)){
		printf("error: my_strcat(%s, %s) = %s, strcat(%s, %s) = %s\n", s10, s20, my_strcat(s10, s20), s10, s20, strcat(s10, s20));
		goto END;
	}
	//cat empty string to s11
	if(my_strcat(s11, s21) != strcat(s11, s21)){
		printf("error: my_strcat(%s, %s) = %s, strcat(%s, %s) = %s\n", s11, s21, my_strcat(s11, s20), s11, s21, strcat(s11, s21));
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
		if(my_strstr(s[i], t[i]) != strstr(s[i], t[i])){
			printf("error: my_strstr(%s, %s) = %s, strstr(%s, %s) = %s\n", s[i], t[j], my_strstr(s[i], t[i]), s[i], t[i], strstr(s[i], t[i]));
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



