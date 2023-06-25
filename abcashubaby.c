#include <stdio.h>
void passengerdetails()

{
    int numofpass;
    printf("Enter the number of passenger(s) travelling: ");
    scanf("%d",&numofpass);
    char nameofpass[numofpass][50];
    int ageofpass[numofpass];
    int i,j;
    for(i=0;i<numofpass;i++)
    { int p=i+1;
        printf("\nEnter the age and name of passenger %d:\n",p);
		scanf("%d",&ageofpass[i]);
		fgets(nameofpass[i],50,stdin);
    }
    printf("\n\nSr. No.\tAge\tName\n\n");
    for(i=0;i<numofpass;i++)
    {
        //printf("The age and name of passenger %d is:\n",i+1);
        printf("%d\t%d\t",i+1,ageofpass[i]);
        puts(nameofpass[i]);
    }
}
int main()
{
    passengerdetails();

    return 0;
}
