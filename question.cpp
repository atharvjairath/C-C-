#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>


int prime[1000001];
int ans[1000001];
void SieveOfEratosthenes()
{
        memset(prime, 1, sizeof(prime));

        for (int p = 2; p * p <= 1000001; p++)
        {

                if (prime[p] == 1)
                {

                        for (int i = p * p; i <= 1000001; i += p)
                                prime[i] = 0;
                }
        }
        ans[2]=1;
        for (int i =3; i<=1000001; i++) {
                if(prime[i])
                        ans[i]=ans[i-1]+1;
                else{
                        ans[i]=ans[i-1];
                }
        }
}
// Driver Code
int main(void)
{
        SieveOfEratosthenes();
        int t;
        scanf("%d",&t);
        while(t--) {
                int n,y;
                scanf("%d  %d",&n,&y);
                if(ans[n]>y)
                        printf("Divyam\n");
                else
                        printf("Chef\n");

        }
        return 0;
}
