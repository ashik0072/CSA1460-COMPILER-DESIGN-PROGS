#include<stdio.h>
#include<conio.h>
#include<string.h>
int f(char x)
{
	int p;
	switch(x)
	{
		case '+': p=2;break;
		case '-': p=2;break;
		case '*': p=4;break;
		case '/': p=4;break;
		case '^': p=4;break;
		case '(': p=0;break;
		case ')': p=6;break;
		case 'a': p=6;break;
		case '$': p=0;break;
	}
	return p;
}
int g(char x)
{
	int q;
	switch(x)
	{
		case '+': q=1;break;
		case '-': q=1;break;
		case '*': q=3;break;
		case '/': q=3;break;
		case '^': q=5;break;
		case '(': q=5;break;
		case ')': q=0;break;
		case 'a': q=5;break;
		case '$': q=0;break;
	}
	return q;
}
int main()
{
	char stack[20],input[20];
	int i,j,l,x,y;
	char pop;
	printf("Enter the input string to be parsed : ");
	scanf("%s",input);
	l=strlen(input);
	input[l]='$';
input[l+1]='\0';
stack[0]='$';
stack[1]='\0';
i=0;j=0;
	printf("\n\n");
	printf("------------------------------------------\n");
	printf("STACK\tINPUT\tACTION\n");
	printf("------------------------------------------\n");
	printf("%s\t%s\tINITIAL CONFIGURATION\n",stack,input);
while(!(stack[i]=='$'&&input[0]=='$'))
	{
		if((stack[i]=='a')&&(input[0]=='a'))
		{
			printf("Not a sentence\n");
			goto a;
		}
		else if(stack[i]=='a'&&input[0]=='(')
		{
			printf("Not a sentence\n");
			goto a;
		}
		else if(stack[i]==')'&&input[0]=='a')
		{
			printf("Not a Sentence\n");
			goto a;
		}
		else if(stack[i]==')'&&input[0]=='(')
		{
			printf("Not a Sentence\n");
			goto a;
		}
		else if(stack[i]=='('&&input[0]=='$')
		{
			printf("Not a Sentence\n");
			goto a;
		}
		else if(stack[i]=='$'&&input[0]==')')
		{
			printf("Not a Sentence\n");
			goto a;
		}
		else
		{
			if(f(stack[i])<g(input[0])||f(stack[i])==g(input[0]))
			{
				i++;
				stack[i]=input[0];
				stack[i+1]='\0';
				l=strlen(input);
				for(j=0;j<l-1;j++)
				{
					input[j]=input[j+1];
				}
				input[l-1]='\0';
				printf("%s\t%s\tSHIFT\n",stack,input);
			}
			else
			{
				do
				{
					pop=stack[i];
					i--;
				}while(!(f(stack[i])<g(pop)));
				stack[i+1]='\0';
				printf("%s\t%s\tREDUCE\n",stack,input);
			}

		}
	}
	printf("ACCEPT\n");
	a:
	getch();
	return 0;
}
