#include <singalCtrlC.h>


/*Input the elements of array*/
/*FUNCTION=================================================================
*  Funtion Name : Input
*  Description  : Input the element of array
==========================================================================*/
void sigintHandler(int sig_num)
{
	signal(SIGINT, sigintHandler);
	printf("\nCannot be terminated using Ctrl+C");
	printf("\nContinue program !!\n");
    fflush(stdout);
}