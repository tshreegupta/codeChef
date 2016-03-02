#include <stdio.h>

main()
{
	int T;
	int A,B,dumA;
	int indexA,indexB;
	int count;
	int i;
	int flag;
	scanf("%d\n",&T);
	for(i=0;i<T;i++)
	{
		indexA=0;
		indexB=0;
		count=0;
		flag=0;
		dumA=1;
		scanf("%d %d",&A,&B);
		
		
		while(A!=1)
		{
			if(A%2==1)
			{
				A=(A-1)/2;
				indexA++;
				count=0;
			}
			else
			{
				if(count==0) dumA=A;
				A=A/2;
				indexA++;
				count++;
			}
		}
		if(dumA>B)
		flag=1;
		while(B!=1)
		{
			B=B/2;
			indexB++;
		}
	
		if(flag==0)
		printf("%d\n",indexA+indexB-2*count);
		else
		printf("%d\n",indexA-indexB);
	}
	return;
}
