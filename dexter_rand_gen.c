#include <stdio.h>

int main()
{
	int N,Q;
	int arr[100000];
	int vertA[100000];
	int vertB[100000];
	int u[100000];
	int v[100000];
	scanf("%d %d",&N,&Q);
	int i;
	for(i=0;i<N;i++)
		scanf("%d",&arr[i]);
		
	for(i=0;i<N-1;i++)
		scanf("%d %d",&vertA[i],&vertB[i]);
	
	for(i=0;i<Q;i++)
		scanf("%d %d",&u[i],&v[i]);
	
	
	
	return 0;
}