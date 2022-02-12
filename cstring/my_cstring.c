#include <stdlib.h>
#include "my_cstring.h"

size_t
my_strlen(const char *s){
	//write your code
    int length;
    for(length=0;s[length]!='\0';length++){}    
	return length;
}

char *
my_strncpy(char *dst, const char *src, size_t len){
	//write your code
    for(int i=0;i<len;i++){
        dst[i]=src[i];
    }
	return dst;
}

char *
my_strcpy(char *dst, const char *src){
	//write your code
    for(int i=0;src[i]!='\0';i++){
        dst[i]=src[i];
        if(src[i+1]=='\0'){
             dst[i+1]=src[i+1];
         }
    } 
	return dst;
}

int
my_strcmp(const char *s1, const char *s2){
    int flag;
    if(s1[0]=='\0' && s2[0]=='\0'){
         return 0;
    }else if(s1[0]=='\0' || s2[0]=='\0'){
         return -1;
    }
    for(int i=0;s1[i]!='\0' || s2[i]!='\0';i++){
        int c1=s1[i];
        int c2=s2[i];
        if(c1<c2){
            flag= -1;
            break;
        }else if(c1>c2){
            flag=1;
            break;
        }
        if(s1[i+1]=='\0' && s2[i+1]!='\0'){
            flag= -1;
            break;
        }else if(s1[i+1]!='\0' && s2[i+1]=='\0'){
            flag= 1;
            break;
        }else if(s1[i+1]=='\0' && s2[i+1]=='\0'){
            flag= 0;
            break;
        }
    }
	return flag;
}

char *
my_strchr(const char *s, int c){
	//write your code
	char *location;
    int index=-1;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]-c==0){
            index=i;
            break;
        }
    }
    if(index>-1){
       location=(char *)&s[index];
    }else{
       location=NULL;
    }
	return location;
}

char *
my_strncat(char *dst, const char *src, size_t n){
	//write your code
    int index=0;
    for(int i=0;dst[i]!='\0';i++){
        index++;
    }
    for(int i=0;src[i]!='\0';i++){
        dst[index]=src[i];
        index++;
        if(src[i+1]=='\0') dst[index]=src[i+1];
        if(i+1==n) break;
    }
	return dst;
}

char *
my_strcat(char *dst, const char *src){
	//write your code
    int index=0;
    for(int i=0;dst[i]!='\0';i++){
        index++;
    }
    for(int i=0;src[i]!='\0';i++){
        dst[index]=src[i];
        index++;
        if(src[i+1]=='\0') dst[index]=src[i+1];
    }
    return dst;
}

char *
my_strstr(const char *haystack, const char *needle){
	//write your code
	int len = my_strlen(needle);
	if(len == 0)return (char *)haystack;
	
	char *ret = (char *)haystack;
    int index=0,flag=0;
    for(int i=0;haystack[i]!='\0';i++){
        if(haystack[i]==needle[index]){
            index++;
        }else{
            index=0;
        }
        if(needle[index]=='\0'){
            flag=1;
            break;
        }
    }
    if(flag==1){
        ret=(char *)needle;
    }else{
        ret=NULL;
    }
	return ret;
}
