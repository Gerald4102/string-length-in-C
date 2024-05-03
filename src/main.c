#include <stdio.h>

int lengthOfStr(const char* str) {
	int offset = 0;
	printf("%i: %c\n", offset + 1, str[offset]);
	while (str[offset] != 0) {
		offset++;
		printf("%i: %c\n", offset + 1, str[offset]);
	}
	return offset;
}

int main() {
	const char* str = "Hello World!";
	int num = lengthOfStr(str);
	printf("%i\n", num);
	return 0;
}