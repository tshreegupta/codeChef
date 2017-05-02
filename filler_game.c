#include <stdio.h>

int main()
{
	int N,M,Q;	
	char bit;
	int i,j,q;
	scanf("%d %d %d\n",&N,&M,&Q);
	for( q=0;q<Q;q++)
	{
		int ans =1;
		int array[20]={0};
		for(i=0;i<N;i++)
		{
			for(j=0;j<M;j++)
			{
				bit =getc(stdin);
				array[i]=(array[i]<<1)+(bit-'0');
				
			}
			getc(stdin);
		}
		for(i =0;i<N;i++)
		{
			if(((array[i]|(array[i]>>1))&((1<<(M-1))-1))!=((1<<(M-1))-1))
			{
				ans =0;
				break;
			}
		}
		if(ans==1)
			for(i =1;i<N;i++)
			{
				if(((array[i]|(array[i-1]))&((1<<(M-1))-1))!=((1<<(M-1))-1))
				{
					ans =0;
					break;
				}
			}
		printf("%d\n",ans);
	}
	
    return 0;
}
