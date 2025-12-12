#include <stdio.h>

struct book
{
	char name[10];
	char author[15];
	int page;
	int year;
}book[3];

int main()
{
	scanf("%s",&book[0].name);
	scanf("%s",&book[0].author);
	scanf("%d",&book[0].page);
	scanf("%d",&book[0].year);
	
	printf("%s\n",book[0].name);
	printf("%s\n",book[0].author);
	printf("%d\n",book[0].page);
	printf("%d\n",book[0].year);
	
	strcpy(book[1].name,"wild");
	strcpy(book[1].author,"wulf dorn");
	book[1].page=250;
	book[1].year=2010;
	
	printf("%s\n",book[1].name);
	printf("%s\n",book[1].author);
	printf("%d\n",book[1].page);
	printf("%d\n",book[1].year);
	
	strcpy(book[2].name,"animals tomb");
	strcpy(book[2].author,"dan brown");
	book[2].page=300;
	book[2].year=2009;

	printf("%s\n",book[2].name);
	printf("%s\n",book[2].author);
	printf("%d\n",book[2].page);
	printf("%d\n",book[2].year);
}
