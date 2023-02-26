#include<stdio.h>
#include <time.h> 

#define BILLION  100.00

int f(int);
int main()
{
int  m= 0, i;
long long n;
printf("Enter the number of iterations: ");
scanf("%d", &n);
printf("Fibonacci series terms are: ");
for(i = 1; i <= n; i++)
{
printf("%lld  ", fibonacci(m));
m++;
}
struct timespec start, end;
	clock_gettime(CLOCK_REALTIME, &end);
	double time_spent = (end.tv_sec - start.tv_sec) +
		(end.tv_nsec - start.tv_nsec) / BILLION;
printf("Time elpased is %f seconds", time_spent);

}
int fibonacci(int n)
{
if(n == 0 || n == 1)
return n;
else
return(fibonacci(n-1) + fibonacci(n-2));
}
