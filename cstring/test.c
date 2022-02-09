#include <stdio.h>
#include "my_cstring.h"

void
test_my_strlen(){
	printf("test_my_strlen success!\n");
}

void
test_my_strncpy(){
}

void
test_my_strcpy(){
}

void
test_my_strcmp(){
}

void 
test_my_chr(){
}

void 
test_my_strncat(){
}

void
test_my_strcat(){
}

void 
test_my_strstr(){
}


int main(int ac, char **av){
	test_my_strlen();
	test_my_strncpy();
	test_my_strcpy();
	test_my_strcmp();
	test_my_chr();
	test_my_strncat();
	test_my_strcat();
	test_my_strstr();

	printf("all check success!\n");
	return 0;
}


