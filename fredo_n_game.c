#include <stdio.h>

int main()
{
	int T,A,N;
	int arr[100000]={0};
	int i,j,t;
	scanf("%d", &T);
	for(t=0;t<T;t++)
	{
		scanf("%d %d", &A,&N);
		for(i = 0;i<N;i++)
		{
			scanf("%d",&arr[i]);
			if(arr[i]==0)
				A-=1;
			else
				A+=2;
			if(A==0)
				break;
		}
		if(i>=N-1)
			printf("Yes %d\n",A);
		else
			printf("No %d\n",i+1);
	}
	
	return 0;
}