#include <stdio.h>
#include <Windows.h>

int main(const int argc, char** argv){
	if(argc < 2){
		printf("Please input filename.\n");
		return -1;
	}
	const void* addr = LoadLibrary(argv[1]);
	if(addr == NULL){
		const int errorcode = GetLastError();
		printf("failed to load library: %s\n",argv[0]);
		printf("Error code: %d\n", errorcode);
		return -1;
	}
	printf("LoadLibrary ok. DLL address: %p\n", addr);
	return 0;
}
