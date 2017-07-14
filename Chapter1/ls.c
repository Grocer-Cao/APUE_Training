#include <dirent.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	DIR	*dp;
	struct dirent	*dirp;
	
	if(argc != 2)
	{
		printf("usage: ls directory_name");
		exit(-1);
	}

	if((dp = opendir(argv[1])) == NULL)
	{
		printf("can't open %s", argv[1]);
		exit(-2);
	}

	while((dirp = readdir(dp)) != NULL)
		printf("%s\t", dirp->d_name);
	printf("\n");

	closedir(dp);
	exit(0);
}
