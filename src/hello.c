#include <config.h>
#include <stdio.h>
#include "utils/debug.h"

int main(int argc, char *argv[]){
	printf("Hello, this is %s\n", PACKAGE_STRING);
	debug("debug enabled\n");
	lwarn("ewlog enabled\n");
	return 0;
}
