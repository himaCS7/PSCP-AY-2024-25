#include <stdio.h>
#include <stdbool.h>
//#include <string.h>

void SieveOfEratosthenes(int);

int main()
{
    int n;
    printf("enter n, to find prime nos below it : ");
    scanf("%d", &n);
    printf("\nFollowing are the prime numbers smaller than or equal to %d \n", n);
    SieveOfEratosthenes(n);
    return 0;
}
void SieveOfEratosthenes(int n)
{
  
    /* Create a boolean array "prime[0..n]" and initialize all entries it as true. A value in prime[i] will finally be false if i is Not a prime, else true.*/
    bool prime[n + 1];
    for(int i=2; i <= n; i++)
		prime[i] = true;
    for (int p = 2; p*p  <= n; p++) { //p<=sqrt(n) is achieved with p*p<=n

        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true) {
            /* Update all multiples of p greater than or equal to the square of it; numbers which are multiple of p and are less than p^2 are already been marked due to being multiples of numbers less than p.*/
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }

    // Print all prime numbers
    for (int p = 2; p <= n; p++)
        if (prime[p])
            printf("%d ",p);
    putchar('\n');
}
