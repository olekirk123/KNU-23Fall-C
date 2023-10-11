#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{
    double x = 0;
    double y = 0;
    int count = 0, circle = 0;
    srand(time(NULL));

    while (count < 1000000000)
    {
        x = (double)rand() / (double)RAND_MAX;
        y = (double)rand() / (double)RAND_MAX;

        if (sqrt(x * x + y * y) <= 1.0)
        {
            circle++;
        }

        if (count % 10000000 == 0)
        {
            double pi_estimate = 4.0 * circle / count;
            printf("%d%%진행..원주율 : % lf\n", count / 10000000, pi_estimate);
        }

        count++;
    }

    double final_pi = 4.0 * circle / count;
    printf("원주율: %lf\n", final_pi);

    return 0;
}
