#include <stdio.h>
#include <math.h>
#include <string.h>

typedef int bool ;
enum {false,true};

void SieveOfEratoshenes(int n)
{
//algorithm for finding prime numbers
	int  prime[n+1];

for(int i=2;i<=n;++i)
	prime[i]=1;




	for(int p=2;p*p<=n;++p)

{
	if(prime[p]==1)
	{
		//update all multiplies of p
	
		for(int i=p*2;i<=n;i+=p)
		{
			prime[i]=0;
	        }
	}
}
unsigned long long int temp=0;
for(int p=2;p<=n;++p)
{
	if(prime[p])
	temp+=p;
}
printf("%llu",temp);

}

int main()
{
int n=2000000;
SieveOfEratoshenes(n);


}
