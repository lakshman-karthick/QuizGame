#include<stdio.h>
struct question 
{
	char statement[300];
	char answer;
	char optiona[30];
	char optionb[30];
	char optionc[30];
	char optiond[30];
	int questionno;
};
int main()
{    struct question q[50];
	int n,i;
	printf("Enter the no.of questions to be added\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
        q[i].questionno=i+1;
        fflush(stdin);
		printf("Enter the question:\n");
		gets(q[i].statement);
		printf("Enter option A\n");
		gets(q[i].optiona);
		printf("Enter option B\n");
		gets(q[i].optionb);
		printf("Enter option C\n");
		gets(q[i].optionc);
		printf("Enter option D\n");
		gets(q[i].optiond);
		
		printf("Enter the correct option:\n");
		scanf(" %c",&q[i].answer);
	}
	FILE *fp;
	fp=fopen("Questions.bin","wb");
	fwrite(q,sizeof(struct question),n,fp);
	fclose(fp);	
}
