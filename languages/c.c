#include <stdio.h>
#include <time.h>

int main(void)
{
    time_t start, end;
    double elapsed, prev_elapsed = 0.0;
    time(&start);  /* start the timer */
    do
    {
        time(&end);
        elapsed = difftime(end, start);
        if (elapsed >= prev_elapsed+3.0)// the time interval of 3.0 sec 
        {
            printf("Hello World!\n");
            prev_elapsed = elapsed;
        }
    } while(elapsed < 4.0);
}
