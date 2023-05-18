#include<stdio.h>

struct students
{
	int id,std,age;
	
	char name[100];
	char course[30];
	char city[20];
	char school[30];                              
	
}s[100];


main()
{
    int n,i;
	printf("enter size of students Array=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter student id=");
		scanf("%d",&s[i].id);
		printf("enter student std=");
		scanf("%d",&s[i].std);
		printf("enter student age=");
		scanf("%d",&s[i].age);
		printf("enter student Name=");
		scanf("%d",&s[i].name);
		printf("enter student course=");
		scanf("%d",&s[i].course);
		printf("enter student city=");
		scanf("%d",&s[i].city);
		printf("enter student school=");
		scanf("%d",&s[i].school);
		
	}	
    printf("\n=====================================================\n");
    for(i=0;i,n;i++)
    {
    	printf("student id.=%d\n",s[i].id);
    	printf("student std.=%d\n",s[i].std);
    	printf("student age.=%d\n",s[i].age);
    	printf("student name.=%d\n",s[i].name);
    	printf("student course.=%d\n",s[i].course);
    	printf("student city.=%d\n",s[i].city);
    	printf("student school.=%d\n",s[i].school);
	}


}



