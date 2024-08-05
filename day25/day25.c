#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main() {
	int filedescriptor;

	// Open() Syscall to open a file that takes three parameters 
	// 1.file path
	// 2.oflags
	// 3.mode_t	it is only used when using O_CREAT flag in oflags arguments.
	filedescriptor = open("testfile.txt", O_WRONLY | O_CREAT, S_IRWXU);
	
	if (filedescriptor < 0) {
		printf("The open operation failed...");
		return -1;
	}

	printf("The open operation succeeded!\n");
	return 0;
}
