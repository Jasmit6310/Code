#include<stdio.h>
int main()
{
	int i,j,p,q,c=0,t[9],k[9],m[9],n[9];
	
	for(i=0;i<9;i++)
	{
		m[i]=0;
		n[i]='_';
	}
	
	for(i=0;i<9;i++)
	{
		t[i]=i+1;
		printf("%d ",t[i]);
		if(t[i]%3==0)
		{
			printf("\n");
		}
	}
	
	printf("\nEnter number from 1 to 9\n");
	
	for(i=0;i<9;i++)
	{
		if(i%2==0)
		{
			printf("Player 1(x) :");
		}
		else
		{
			printf("Player 2(o) :");
		}
		
		scanf("%d",&k[i]);
		p=0;
		if(k[i]<1 || k[i]>9)
		{
			printf("Invalid input\n");
			i--;
			p=1;
		}
		if(m[k[i]-1]==1)
		{
			i--;
			printf("Input repeted\n");
			p=1;
		}
		m[k[i]-1]=1;
		
		if(p==0)
		{
			if(i%2==0)
			{
				t[k[i]-1]='x';
				n[k[i]-1]='x';

			}
			else
			{
				t[k[i]-1]='o';
				n[k[i]-1]='o';
			}
			
			if( (t[0]==t[1] && t[0]==t[2]) || (t[0]==t[3] && t[0]==t[6]) || (t[0]==t[4] && t[0]==t[8]) )	
			{
				c++;
				if(t[0]=='x')
				{
					printf("\nPlayer 1 win");
				}
				else
				{
					printf("\nPlayer 2 win");
				}
				break;
			}
			
			else if( (t[2]==t[5] && t[2]==t[8]) || (t[2]==t[4] && t[2]==t[6]) )
			{
				c++;
				if(t[2]=='x')
				{
					printf("\nPlayer 1 win");
					
				}
				else
				{
					printf("\nPlayer 2 win");
				}
				break;
			}
			
			else if(t[1]==t[4] && t[1]==t[7])
			{
				c++;
				if(t[1]=='x')
				{
					printf("\nPlayer 1 win");
				}
				else
				{
					printf("\nPlayer 2 win");
				}
				break;
			}
			
			else if(t[3]==t[4] && t[3]==t[5])
			{
				c++;
				if(t[3]=='x')
				{
					printf("\nPlayer 1 win");
				}
				else
				{
					printf("\nPlayer 2 win");
				}
				break;
			}
			
			else if(t[6]==t[7] && t[6]==t[8])
			{
				c++;
				if(t[6]=='x')
				{
					printf("\nPlayer 1 win");
				}
				else
				{
					printf("\nPlayer 2 win");
				}
				break;
			}
		}
		
		for(q=0;q<9;q++)
		{
		printf("%c  ",n[q]);
		if((q+1)%3==0)
			{
				printf("\n");
			}
		}
	}
	
	printf("\n");
	for(i=0;i<9;i++)
	{
	printf("%c  ",n[i]);
	if((i+1)%3==0)
		{
			printf("\n");
		}
	}
	
	printf("\n");
	
	if(c==0)
	{
		printf("Match tie");
	}	
}
