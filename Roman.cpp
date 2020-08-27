#include<stdio.h>
#include<string.h>

//function(rtod) use for convert roman to decimal
int rtod(char a[1000])
{		
	char b[1000];
	int sum=0,i=0,l=0;
	
	l=strlen(a);
	while(a[i]!='\0')
	{
		b[i]=a[i];
		i++;
	}
	
    i=0;
    while(i<l)
    {
	switch (a[i])
		{
			case 'I' :	a[i]=1;   break;
			case 'V' :	a[i]=2;   break;
			case 'X' :  a[i]=3;   break;
			case 'L' :  a[i]=4;   break;
			case 'C' :  a[i]=5;   break;
			case 'D' :  a[i]=6;   break;
			case 'M' :  a[i]=7;   break;
		}
			switch (a[i+1])
		{
			case 'I' :	a[i+1]=1;   break;
			case 'V' :	a[i+1]=2;   break;
			case 'X' :  a[i+1]=3;   break;
			case 'L' :  a[i+1]=4;   break;
			case 'C' :  a[i+1]=5;   break;
			case 'D' :  a[i+1]=6;   break;
			case 'M' :  a[i+1]=7;   break;	
		}
		
		if(a[i]>=a[i+1])
		{
			switch(b[i])
			{
				case 'I' :   sum=sum+1;   break;
				case 'V' :   sum=sum+5;   break;
				case 'X' :   sum=sum+10;   break;
				case 'L' :   sum=sum+50;   break;
				case 'C' :   sum=sum+100;   break;
				case 'D' :   sum=sum+500;   break;
				case 'M' :   sum=sum+1000;   break;
			}
		}
		
		else
		{
			switch(b[i])
			{
				case 'I' :   sum=sum-1;   break;
				case 'V' :   sum=sum-5;   break;
				case 'X' :   sum=sum-10;   break;
				case 'L' :   sum=sum-50;   break;
				case 'C' :   sum=sum-100;   break;
				case 'D' :   sum=sum-500;   break;
				case 'M' :   sum=sum-1000;   break;
			}
		}
		a[i]=b[i];					//to restore the value of a[i]
		a[i+1]=b[i+1];				//to restore the value of a[i+1]
		i++;
		}
return sum;
}

//function(dtor) use for convert decimal to roman
char dtor(int n)
{
    int i=0;
 
 while(n!=0)
 {
    if(n>=1000)
    {
        for(i=0;i<(n/1000);i++)
        {  
            printf("M");
        }
        n=n%1000;
    }

   	else if(n>99 && n<1000)
   		{
   			if(n>=900 && n<1000)
   			{
   				printf("C");							//roman of 900 is CM
   				printf("M");
				n=n-900;	
			}
			else if(n>=500 && n<900)
				{
   					printf("D");
   					for(i=0;i<((n/100)-5);i++)
   					{
							printf("C");				//roman of 600 is DC
	   						printf("C");			
	   						n=n-100;
   					}
					n=n-500;
				}
			else if(n>=400 && n<500)
				{
	   				printf("C");						//roman of 400 CD
	   				printf("D");	
	   				n=n-400;
				}
			else if(n>=100 && n<400)
				{
   					for(i=0;i<(n/100);i++)
   					{
   						printf("C");
   						n=n-100;
					}
				}
	}
	else if(n>=90 && n<100)
				{	
						printf("X");					//roman of 90 is XC
						printf("C");
						n=n-90;
				}
			else if(n>=50 && n<90)
			{
					printf("L");
				for(i=0;i<(n/10)-5;i++)
					{	
						printf("X");					//roman of 60 is LX
						n=n-10;
					}
					n=n-50;
			}
			else if(n>=400 && n<500)
				{
	   				printf("X");						//roman of 40 XL
	   				printf("L");	
	   				n=n-40;
	   			}
			else if(n>=10 && n<40)
			{
				for(i=0;i<(n/10);i++)
				{
					printf("X");
					n=n-10;
				}
			}
			else if(n==9)
				{
					printf("I");				    	//roman of 40 XL
					printf("X");
					n=n-9;
				}
			else if(n>=5 && n<9)
			{
				printf("V");
					for(i=0;i<n-5;i++)
				{
					printf("X");
					n=n-1;
				}
				n=n-5;
			}
			else if(n==4)
			{
				printf("I");							//roman of 4 IV
				printf("V");
				n=n-4;
			}
			else if(n>=1 && n<4)
			{
				for(i=0;i<n;i++)
				{
					printf("I");	
					n=n-1;
				}
			}
				
		}
printf("\n");
}


int main()
{
    int m=1,prod=0,sum,k;
    char a[1000];

    printf("\nEnter roman number : ");
    gets(a);											//Get roman number 

    printf("Enter a decimal number : ");
    scanf("%d",&m);										//Get decimal number

    prod=rtod(a)*m;										//call the fuction rtod
    printf("%d\n",prod);								//print product in decimal

    printf("%c",dtor(prod));   							//call the fuction dtor and print product in roman
}
