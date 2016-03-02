#include<stdio.h>
#include<stdlib.h>
main()
{
	int T;
	int N,H;
	int i,j,k,l,m;
	int start,end;
	int max;
	int sum;
	scanf("%d\n",&T);
	for(i=0;i<T;i++)
	{
		max=0;
		scanf("%d %d\n",&N,&H);
		int *wall=(int*)calloc(N,sizeof(int));
		for(j=0;j<N;j++)
		{
			scanf("%d %d",&start,&end);	
			k=start;
			while(k<=end)
			{
			wall[k]+=1;
			k++;	
			}
		
		}
	
		sum=0;	
		for(m=0;m<H;m++)
		{
			sum=sum+wall[m];
		}
		l=0;
		max=sum;	
		while(l<N-H)
		{
			sum=sum-wall[l]+wall[l+H];
			l++;
			if(sum>max)
			max=sum;
			
		}
		printf("%d\n",H*N-max);
	}
}
