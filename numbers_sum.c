#include <stdio.h>
//1≤N≤10^15
int gcd(int n, int m)
{
	if(n==0)return m;
	else return gcd(m%n,n);
} 
int fsqrt(int n)
{
	int s;
	int left=0;
	int right=n;
	while(left<=right)
	{
		int middle= (left+right)/2;
		if(middle*middle>n)
		{
			right = middle-1;
		}
		else
		{
			left = middle +1;
			s= middle;
		}
	}
	return s;
}
int min(int a, int b)
{
	if(a>b) return b;
	else return a;
}
int main()
{
    int N;
	int i,j,k;
    scanf("%d",&N);
	int sum  =0;
	
	
	int mod = (1000000000 + 7);
    for(i=1; i<=N; i++)
	{
		int temp_sum =0;
		int m = min(i*2-1,N);
		for(j=i; j<=m; j++)      //as gcd(a,b)= gcd(a,b-a)
		{
			int g = gcd(i,j);
			int s = fsqrt(g);
			for(k =1;k<=s;k++)
			{
				if(g%k==0)  //if k is a divisor of g%k
				{
					if((g/k)!=k)    //if both the divisors are not equal
					{
						temp_sum+=(g/k);
					}
					temp_sum+=k;
					temp_sum%=mod;
				}
			}
			printf("F(%d,%d) = %d\n",i,j,temp_sum);
			
		}		
		if(m!=N)
		{
			sum+=(N/i-1)*temp_sum;
			sum %= mod;
			int temp_sum =0;
			for(j=(N/i)*i;j<=N;j++)
			{
				int g = gcd(i,j);
				int s = fsqrt(g);
				for(k =1;k<=s;k++)
				{
					if(g%k==0)  //if k is a divisor of g%k
					{
						if((g/k)!=k)    //if both the divisors are not equal
						{
							temp_sum+=(g/k);
						}
						temp_sum+=k;
						temp_sum%=mod;
					}
					printf("F(%d,%d) = %d\n",i,j,temp_sum);
				}
			}
			sum+=temp_sum;
			sum %= mod;
			
				
		}
		else
			sum +=temp_sum;

		
	}
	
	printf("%d\n",sum);
    return 0;
}

