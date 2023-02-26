#include <stdio.h>
#include <time.h> 
#define val  100.0

long long fib(long long n) 
{
        if (n < 2) {
                return 1;
        }
        return fib(n - 2) + fib(n - 1);
}

int main(int argc, char ** argv) 
{
        long long n = 0;
        int num;
		printf("Enter the number of iterations: ");
		scanf("%d",&num);
        #pragma omp parallel for schedule(guided, 1)
        for (n = 0; n <= num; n++) {
                printf(" %lld ", fib(n));
        }
 struct timespec start, end;
	clock_gettime(CLOCK_REALTIME, &end);
	double time_spent = (end.tv_sec - start.tv_sec) +
						(end.tv_nsec - start.tv_nsec) / val;
printf("Time elpased is %f seconds", time_spent);

}
