 #include<stdio.h>
#include<conio.h>
#include<string.h>
FILE *fp;
void gettoken();
void chkopr();
int n,num,num1,n1,n2,n3,n4,nm;
struct token
{
	char tkn[20];
};
struct token t[20],d[20],m[20],a[20],s[20];
struct temp
{
	char tmp[10];
};
struct temp tp[10];
struct t1
{
	char *tmp;
};
struct t1 alpha[10];
int main()
{
	num=0;
	gettoken();
	chkopr();
	getch();
}
void gettoken()
{
	int i,j;
	char c;

	fp=fopen("inp.txt","r");
	i=0;while(!feof(fp))
	{
		c=getc(fp);
		if(c==',')

			break;
		t[i].tkn[0]=c;
		i++;
	}
	n=i+1;
	printf("\nThe tokens are \n");
	for(i=0;i<n;i++)
	{
		printf("%s",t[i].tkn);
	}
}
void chkopr()
{
	int i,j=0,p,pntr,flag=0;
	num1=0;
	printf("\n\n");
	for(k=0,j=0;k<n;k++,j++)
	{
		if(t[k].tkn[0]=='/'
		{
			j--;
			d[j].tkn[0]='D';
			k++;
			pntr=j;
		}
		else
		{
			d[j].tkn[0]=t[k].tkn[0];
		}
	}
	for(p=0;p<3;p++)
	{
		tp[num].tmp[p]=t[pntr].tkn[0];
		pntr++;
	}
	num++;
	nn++;
	for(k=0;k<n1;k++)
	{
		printf("%s",d[k].tkn);
	}
	num1++;
	for(k=0,j=0;k<n1;k++,j++)
	{
		if(d[k].tkn[0]=='*')
		{
			j--;
			m[j].tkn[0]='m';
			alpha[nn].tmp="M";
			k++;
			if(flag==0)
			{
				pntr=j;
				flag++;
			}
		}
		else
		{
			m[j].tkn[0]=d[k].tkn[0];
		}
	}
	n2=j;
	nn++;
	for(p=0;p<3;p++)
	{
		tp[num].tmp[p]=d[pntr].tkn[0];
		pntr++;
	}
	num++;
	printf("\n");
	for(k=0;k<n1;k++)
	{
		printf("%s",m[k].tkn);
	}
	num1++;
	for(k=0,j=0;k<n2;k++,j++)
	{
		if(m[k].tkn[0]=='+')
		{
			j--;
			a[j].tkn[0]='A';
			alpha[nn].tmp="A";
			k++;
			pntr=j;
		}
		else
		{
			a[j].tkn[0]=m[k].tkn[0];
		}
	}
	n3=j;
	for(p=0;p<3;p++)
	{
		tp[num].tmp[p]=m[pntr].tkn[0];
		pntr++;
	}
	nn++;
	num++;
	printf("\n");
	for(k=0;k<n3;k++)
	{
		printf("%s",a[k].tkn);
	}
	num1++;
	for(k=0,j=0;k<n3;k++,j++)
	{
		if(a[k].tkn[0]=='-')
		{
			j--;
			a[j].tkn[0]='s';
			alpha[nn].tmp='S';
			k++;
			pntr=j;
		}
		else
		{
			s[j].tkn[0]=a[k].tkn[0];
		}
	}
	n4=j;
	for(p=0;p<3;p++)
	{
		tp[num].tmp[p]=a[pntr].tkn[0];
		pntr++;
	}
	num++;
	nn++;
	printf("\n");
	for(k=0;k<n4;k++)
	{
		printf("%s",s[k].tkn);
	}
	num1++;
	printf("\n");
	for(i=0;i<num1;i++)
	{
		printf("\n\t%s=%s",alpha[i].tmp,tp[i].tmp);
	}
	return 0;
}
