#include<stdio.h>
int age[100];
char from(char fromj[50]);
char towhere(char toj[50]);
int travellernumber();

//function 1 starts
char from(char fromj[50])
{printf("enter journey starting city\n");
    scanf("%s",fromj);
   
}

// function 2 starts
char towhere(char toj[50]) //khaan jaana h
{
    
    printf("enter journey final city\n");
    scanf("%s",toj);
    
}

//function 3 starts 


int travellernumber()
{
    printf("enter number of passengers\n");
    int numofpassenger;//no. of passengers lene ke liye
    scanf("%d",&numofpassenger);
    return numofpassenger;
}

//function 4 starts

int agef(int pass){


for(int i=0;i<pass;i++)
{
 
    printf("enter age of passenger %d\n",(i+1));
   
   scanf("%d",&age[i]);

}
}




int main()
{

char fromj[50];
from(fromj);
printf("%s\n",fromj);
char toj[50];
towhere(toj);
printf("%s\n",toj);
int pass=travellernumber();


return 0;


}