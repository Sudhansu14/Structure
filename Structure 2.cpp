#include<stdio.h>

struct employee
{
	int id,age,experience;
	
	char name[100];
	char role[30];
	char city[20];
	char Company name[50];                              
	 
}s[100];


main()
{
    int n,i;
	printf("Enter size of Empolyee Array=");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("enter employee id=");
		scanf("%d",&s[i].id);

		printf("enter employee Name=");
		scanf("%d",&s[i].name);

		printf("enter employee age =");
		scanf("%d",&s[i].age);
                                 
		printf("enter employee role=");
		scanf("%d",&s[i].role);

		printf("enter employee city=");
		scanf("%d",&s[i].city);

		printf("enter employee experience=");
		scanf("%d",&s[i].experience);
		
		printf("enter employee Company name=");
        scanf("%d",&s[i].company name);
		
	}	
    printf("\n=====================================================\n");
    for(i=0;i,n;i++)
    {
    	printf("employee id.=%d\n",s[i].id);
    	printf("employee name.=%d\n",s[i].name);
    	printf("employee age.=%d\n",s[i].age);
    	printf("employee role.=%d\n",s[i].role);
    	printf("employee city.=%d\n",s[i].city);
    	printf("employee exprience.=%d\n",s[i].experience);
    	printf("employee company name.=%d\n",s[i].company name);
	}


}

