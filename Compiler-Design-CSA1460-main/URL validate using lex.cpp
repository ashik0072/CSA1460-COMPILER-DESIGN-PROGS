%%
((http)|(ftp))s?:\/\/[a-zA-Z0-9]{2, }(\.[a-z]{2, })
	+(\/[a-zA-Z0-9+=?]*)* {printf("\nURL Valid\n");}

.+ {printf("\nURL Invalid\n");}

%%


// driver program
void main()
{
	printf("\nEnter URL : ");
	yylex();
	printf("\n");
}

