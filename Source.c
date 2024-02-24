#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int iochar;
	int isWord = 0; /* Flag to keep track of whether we are currently processing a word */

	while ((iochar = getchar()) != EOF) {
		/* Process alphabetical characters */
		if ((iochar >= 'A' && iochar <= 'Z') || (iochar >= 'a' && iochar <= 'z')) {
			putchar(iochar);
			isWord = 1;
		}
		else {
			/* Anything besides a letter we treat as the end of the word */
			if (isWord) {
				putchar('\n');
				isWord = 0;
			}
		}
	}

	return 0;
}
