#define _GNU_SOURCE         /* See feature_test_macros(7) */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>         /* For syscall (getpid) */
#include <sys/types.h>      /* For syscall (getpid) */
#include <sys/time.h>       /* For gettimeofday */

// Number of times (loops) to complete the process
#define NUM 100000

int main()
{
    // Declare time variables
    struct timeval start, finish;
    unsigned long elapsed;

    // Loop counter
    int i;

    // Start the timer
    gettimeofday(&start, NULL);

    // Complete the processes
    for (i = 0; i < NUM; i++)
    {
        getpid();
    }
    
    // Stop the timer
    gettimeofday(&finish, NULL);

    // Determine the time to complete the total processes
    elapsed = (finish.tv_sec - start.tv_sec) * 1000000;
    elapsed += (finish.tv_usec - start.tv_usec);

    // Print the average time taken to complete one process
    printf("Average time for a system call = %f microseconds\n",
           (float) elapsed / (float) NUM);

    return 0;
}
