#include <dirent.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
	DIR *dp;
	struct dirent *p;
    if ((dp = opendir(argv[1]))== NULL)
    {
    	return -1;
    }

    while((p = readdir(dp)) != NULL)
    	printf("%s\n", p->d_name);
    closedir(dp);
	return 0;
}
