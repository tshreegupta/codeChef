#include<stdio.h>

main()
{
	int T;
	int i,j,k;
	int l1,l2,ll1,ll2,curr;
	char temp;
	scanf("%d\n",&T);
	int count; //length of path
	int ans,ans2;  // no. of switches
	for(i=0;i<T;i++)
	{
		
		count=0;
		l1=0;
		l2=0;
		ans=0;
		ans2=0;
		scanf("%c",&temp);
		int a[200000]={0};
		while(temp!='\n')
		{
			if(temp=='#')
			a[count]=1;
			else
			a[count]=0;
			count++;
			scanf("%c",&temp);
		}
	
		
		int b[200000]={0};
		for(j=0;j<count;j++)
		{
			scanf("%c",&temp);
			if(temp=='#')
			b[j]=1;
			else
			b[j]=0;
		
		}
							
		scanf("%c",&temp);
		if((l1&l2)!=0)
		printf("No\n");
		else
		{
			int flag;
			if(l1%2==0)
			{
				flag=0;
				curr=l1;
				while(curr!=0)
				{	
							
				
					l1=l1>>1;
					l2=l2>>1;
					switch (flag)
						{
						case 0:
							curr=l1;
							break;
						case 1:
							curr=l2;
							break;
						}
							if(curr%2!=0)
					{
						flag=!flag;
						ans++;
										
					}
				}
		
	   		}
	   		else ans=999999;
			////
			if(ll2%2==0)
			{
			
				flag=1;
				curr=ll2;
				while(curr!=0)
				{					
				
					ll1=ll1>>1;
					ll2=ll2>>1;
					switch (flag)
						{
						case 0:
							curr=ll1;
							break;
						case 1:
							curr=ll2;
							break;
						}
							if(curr%2!=0)
					{
						flag=!flag;
						ans2++;
										
					}
				}
			}
			else
			ans2=999999;
		
			printf("Yes\n%d\n",(ans<ans2)?ans:ans2);
		}
		
	}
}
