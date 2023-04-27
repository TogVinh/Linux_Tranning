#include <stdio.h>
#include <signal.h>
#include <unistd.h>

int main()
{
	int count = 0;

	signal(SIGINT, SIG_IGN);

	while (1)
	{
		printf("%d \n", count);
		count++;
		sleep(1);
	}

	return 0;
}
