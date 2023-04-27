#ifndef _signalCtrlC_H_

#include <stdio.h>
#include <signal.h>
#include <unistd.h>


/*!
* @brief <calculate the average all element of array>
*
* @param  arr[In] <the parameter of the array>
*
* @param num[In] <the numbers of elemnt of array>
*
* return <average variable>
*/
void sigintHandler(int sig_num);

#endif