#include <stdio.h>

int main(int argc, char **argv){

	int secret = 0x12345678;
	char name[64];

	char flag[64];
	FILE *f = fopen("flag.txt","r");
	if (f == NULL) {
		printf("%s %s", "There's supposed to be a flag.txt file in this directory. If you are testing an attack on your computer, create a flag.txt file. If this is the server, please let the PACTF organizers know immediately.\n");
		exit(0);
	}
	fgets(flag,64,f);

	puts("Please enter your name: ");
	gets(name);

    if (secret == 0x1337) {
        puts(flag);
    } else {
        printf("Hi %s!", name);
    }
}