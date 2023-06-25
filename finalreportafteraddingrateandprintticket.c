#include<stdio.h>
#include<string.h>

#include <stdbool.h>

#define MAX_USERNAME_LENGTH 20
#define MAX_PASSWORD_LENGTH 20
int tashu=2;
void logger() {
    char username[MAX_USERNAME_LENGTH + 1];
    char password[MAX_PASSWORD_LENGTH + 1];
   
    char correct_username[] = "ashu";
    char correct_password[] = "agni121";
    bool is_authenticated = false;

printf("press 1 for login and 2 for signup\n");
int logsign;
scanf("%d",&logsign);
switch(logsign)
{

case(1):
    printf("Enter username:\n ");
    scanf("%s", username);

    printf("Enter password:\n ");
    scanf("%s", password);

    if (strcmp(username, correct_username) == 0 && strcmp(password, correct_password) == 0) {
        is_authenticated = true;
    }


else if (strcmp(username,"dhruv") == 0 && strcmp(password,"aurangabad") == 0) {
        is_authenticated = true;
    }

else if (strcmp(username, "ninad") == 0 && strcmp(password, "kulkarni") == 0) {
        is_authenticated = true;
    }
   else if (strcmp(username, "vrindha") == 0 && strcmp(password,"cpiitbombay") == 0) {
        is_authenticated = true;
    }


    if (is_authenticated) {
        printf("Login successful!\n");
         tashu=1;
    } else {
        printf("Login failed. Incorrect username or password.\n");
      
        
    }
break;

case(2):

printf("Enter username:\n ");
    scanf("%s", username);

    printf("Enter password:\n ");
    scanf("%s", password);
    tashu=1;
    break;
    default:
    printf("wrong input\n");
    }
    
}
//idhar maine login ke liye aur signup ke liye features diye h ab tu return username aur password lele to call/
int passengerdetails()

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

    return(numofpass);
}

int main()
{
    while(tashu!=1)
logger();
plane();

}

void plane()
{
  char board[20];
  char destination[20];
  printf("enter boarding\n");
  scanf("%s",board);
  printf("enter destination\n");
  scanf("%s",destination);
  int u;

  
  
  
  
    if(strcmp("delhi",board)==0)
    {
	      if(strcmp("mumbai",destination)==0)
        {
          
           printf("The flights available for Delhi to Mumbai are\n\n");
           printf("FLIGHTNUMBER\tFLIGHT \tDEPARTURE\tARRIVAL\tJOURNEY TIME\t  PRICE \n\n");
           printf("    6E 2112 \tIndiGo \t 4:45am  \t 7:15am\t   2h30min  \tRs.4,201\n\n");
           printf("    G8 530  \tGofirst\t 6:00am  \t 8:10am\t   2h10 min \tRs.4,202\n\n");
           printf("press 1 for flight 1 and 2 for flight 2\n");
           scanf("%d",&u);
            if(u==1)
            {
                int k=passengerdetails();
                printf("CONGRATULATIONS!YOUR TICKET HAS BEEN BOOKED\n");
                printf("6E 2112 \tIndiGo \t 4:45am  \t 7:15am\t   2h30min  \tRs.%d\n\n",(4201*k));
                printf("happy journey\n");

                
            }
            if(u==2)
            {
                int k=passengerdetails();
                printf("CONGRATULATIONS!YOUR TICKET HAS BEEN BOOKED\n");
                printf("    G8 530  \tGofirst\t 6:00am  \t 8:10am\t   2h10 min \tRs.%d\n\n",(4,202*k));
                printf("Happy Journey\n");
                
            }
        }

        else if (strcmp("hyderabad",destination)==0)
        {
             printf("The flights available for Delhi to Hyderabad are\n\n");
           printf("FLIGHT NUMBER\t flight  \t depaarture\t arrival \t  Journey time \t    Price \n");
           printf("   6E 2596   \t IndiGo  \t  10:30 pm \t 0:50 am \t   2h 20min    \t Rs. 5,945\n");
           printf("   AI 5540   \tAirindia \t   4:50 pm \t 7:00 pm \t   2h 10 min   \t Rs. 6,480\n");
           printf("press 1 for flight 1 and 2 for flight 2\n");
           scanf("%d",&u);
            if(u==1)
            {
                int k=passengerdetails();
                printf("CONGRATULATIONS!YOUR TICKET HAS BEEN BOOKED\n");
                printf("   6E 2596   \t IndiGo  \t  10:30 pm \t 0:50 am \t   2h 20min    \t Rs.%d\n\n" ,(5945*k));
                printf("happy journey");



            }
            if(u==2)
            {
                int k=passengerdetails();
                printf("CONGRATULATIONS!YOUR TICKET HAS BEEN BOOKED\n");
                           printf("   AI 5540   \tAirindia \t   4:50 pm \t 7:00 pm \t   2h 10 min   \t Rs.%d\n\n", (6,480*k));

                printf("Happy Journey");
            }
        }


        else if(strcmp("madras",destination)==0)
        {
            printf("The flights available for Delhi to Madras are\n\n");
           printf("FLIGHT NUMBER \t  Flight \t departure\t  arrival\t Journey time\t    Price \n");
           printf("    6E 2059   \t  IndiGo \t  7:10 am \t 10:05 am\t    2h 55min \t  Rs.5,902\n");
           printf("    AI 439    \tAir india\t  5:45 pm \t  8:50 pm\t    3h 05 min\t Rs. 6,018\n");
           printf("press 1 for flight 1 and 2 for flight 2\n");
           scanf("%d",&u);
          
             if(u==1)
            {
                int k=passengerdetails();
                printf("CONGRATULATIONS!YOUR TICKET HAS BEEN BOOKED\n");
                printf("    6E 2059   \t  IndiGo \t  7:10 am \t 10:05 am\t    2h 55min \tRs.%d\n ",(5902*k)");
                printf("happy journey\n");

                
            }
            if(u==2)
            {
                int k=passengerdetails();
                printf("CONGRATULATIONS!YOUR TICKET HAS BEEN BOOKED\n");
                
           printf("    AI 439    \tAir india\t  5:45 pm \t  8:50 pm\t    3h 05 min\t Rs.%d\n " ,(6018*k));
                printf("Happy Journey\n");
                    }
        }
else if (strcmp("nagpur",destination)==0)
        {   printf("The flights available for Delhi to Nagpur are\n\n");
           printf("FLIGHT NUMBER\t flight \t depaarture\t  arrival  \t Journey time   \t    Price   \n");
           printf("    6E 6554  \t IndiGo \t   9:35 am \t  11:20 am \t   1h 45min     \t   Rs. 5,114\n");
           printf("    6E 2141  \t IndiGo \t   2:50 pm \t   4:35 pm \t   1h 45 min    \t   Rs. 5,114\n");
           printf("press 1 for flight 1 and 2 for flight 2\n");
           scanf("%d",&u);
          
               if(u==1)
            {
                int k=passengerdetails();
                printf("CONGRATULATIONS!YOUR TICKET HAS BEEN BOOKED\n");
                      printf("    6E 6554  \t IndiGo \t   9:35 am \t  11:20 am \t   1h 45min     \t   Rs.%d\n" ,(5114)*k);
                printf("happy journey\n");

                
            }
            if(u==2)
            {
                int k=passengerdetails();
                printf("CONGRATULATIONS!YOUR TICKET HAS BEEN BOOKED\n");
                 printf("    6E 2141  \t IndiGo \t   2:50 pm \t   4:35 pm \t   1h 45 min    \t   Rs.%d\n", ((5114)*k));
                printf("Happy Journey\n");
            } 

        }
    }
    

else if(strcmp("mumbai",board)==0)
{



    
        if(strcmp(destination,"delhi")==0)
        { 
            printf("The flights available for Mumbai to Delhi are\n\n");
         printf("     FLIGHT NUMBER \t  flight \t departure \t  arrival \t Journey time \t   Price  \n");
           printf("      6E 2083    \t  IndiGo \t  11:15 pm \t 1:40 am  \t  2h 25min    \t Rs. 4,190\n");
           printf("      G8 339     \t GoFirst \t   8:45 pm \t 10:55 pm \t  2h 10 min   \t Rs. 5,434\n");
           printf("press 1 for flight 1 and 2 for flight 2\n");
           scanf("%d",&u);

             if(u==1)
            {
                int k=passengerdetails();
                printf("CONGRATULATIONS!YOUR TICKET HAS BEEN BOOKED\n");
                printf("      6E 2083    \t  IndiGo \t  11:15 pm \t 1:40 am  \t  2h 25min    \t Rs.%d\n" ,((4190)*k));
          
                printf("happy journey\n");

                }
            if(u==2)
            {
                int k=passengerdetails();
                printf("CONGRATULATIONS!YOUR TICKET HAS BEEN BOOKED\n");
                
           printf("      G8 339     \t GoFirst \t   8:45 pm \t 10:55 pm \t  2h 10 min   \t Rs.%d\n" ,(5434*k));
                printf("Happy Journey\n");
            } 
        }

           else if (strcmp(destination,"hyderabad")==0)
       {    printf("The flights available for Mumbai to Hyderabad are\n\n");
           printf("FLIGHT NUMBER \t flight  \t departure \t  arrival  \t Journey time \t    Price \n");
           printf("  6E 2486     \t IndiGo  \t   4:05 pm \t  05:35 pm \t   1h 30min   \t Rs. 5,103\n");
           printf("  UK 869      \t Vistara \t  10:30 pm \t  12:05 pm \t   1h 35 min  \t Rs. 5,102\n");
           printf("press 1 for flight 1 and 2 for flight 2\n");
           scanf("%d",&u);
        
           if(u==1)
            {
                int k=passengerdetails();
                printf("CONGRATULATIONS!YOUR TICKET HAS BEEN BOOKED\n");
                
           printf("  6E 2486     \t IndiGo  \t   4:05 pm \t  05:35 pm \t   1h 30min   \t Rs.%d\n" ,(5103*k));
                
                printf("happy journey\n");

                }
            if(u==2)
            {
                int k=passengerdetails();
                printf("CONGRATULATIONS!YOUR TICKET HAS BEEN BOOKED\n");
            
           printf("  UK 869      \t Vistara \t  10:30 pm \t  12:05 pm \t   1h 35 min  \t Rs.%d\n", (5102*k));
                printf("Happy Journey\n");
                
            } 
        }

       else if (strcmp("madras",destination)==0)
        {
             printf("The flights available for Mumbai to Chennai are\n\n");
           printf("FLIGHT NUMBER \t flight  \t departure\t arrival \t   Journey time \t    Price \n");
           printf("   6E 5265    \t IndiGo  \t  5:35 am \t 7:30 am \t     1h 55 min  \t Rs. 3,547\n");
           printf("   G8 305     \t GoFirst \t  5:45 am \t 7:35 am \t     1h 50 min  \t Rs. 3,211\n");
           printf("press 1 for flight 1 and 2 for flight 2\n");

          scanf("%d",&u);
        
           if(u==1)
            {
                int k=passengerdetails();
                printf("CONGRATULATIONS!YOUR TICKET HAS BEEN BOOKED\n");
                
           printf("   6E 5265    \t IndiGo  \t  5:35 am \t 7:30 am \t     1h 55 min  \t Rs.%d\n" ,(3547*k));
                printf("happy journey\n");

            }
            if(u==2)
            {
                int k=passengerdetails();
                printf("CONGRATULATIONS!YOUR TICKET HAS BEEN BOOKED\n");
            printf("   G8 305     \t GoFirst \t  5:45 am \t 7:35 am \t     1h 50 min  \t Rs.%d\n", ((3211)*k));
           
                printf("Happy Journey\n");
            }  

        }
        else if(strcmp("nagpur",destination)==0)
        {
              printf("The flights available for Mumbai to Nagpur are\n\n");
           printf("  FLIGHT NUMBER \t flight \t  departure \t  arrival  \t  Journey time \t    Price \n");
           printf("     6E 6206    \t IndiGo \t   1:35 pm  \t  3:30 pm  \t    1h 25 min  \t Rs. 3,947\n");
           printf("     6E 6064    \t IndiGo \t   5:30 pm  \t  7:00 pm  \t    1h 30 min  \t Rs. 3,947\n");
           printf("press 1 for flight 1 and 2 for flight 2\n");

          scanf("%d",&u);
        
           if(u==1)
            {
                int k=passengerdetails();
                printf("CONGRATULATIONS!YOUR TICKET HAS BEEN BOOKED\n");
                
           printf("     6E 6206    \t IndiGo \t   1:35 pm  \t  3:30 pm  \t    1h 25 min  \t Rs.%d\n" ,((3947)*k));
                printf("happy journey\n");

            }
            if(u==2)
            {
                int k=passengerdetails();
                printf("CONGRATULATIONS!YOUR TICKET HAS BEEN BOOKED\n");
                
           printf("     6E 6064    \t IndiGo \t   5:30 pm  \t  7:00 pm  \t    1h 30 min  \t Rs.%d\n" ,((3947)*k));
                printf("Happy Journey\n");
            }  
        }
    }
    
   else  if (strcmp("hyderabad",board)==0)
    {
        if(strcmp("mumbai",destination)==0)
        {
              printf("The flights available for Hyderabad to Mumbai are\n\n");
           printf("  FLIGHT NUMBER \t flight  \t departure \t arrival \t Journey time \t    Price \n");
           printf("     6E 5268    \t IndiGo  \t   6:45 am \t 8:20 am  \t 1h 35 min   \t Rs. 5,527\n");
           printf("     UK 878     \t Vistara \t  12:55 pm \t 2:00 pm \t  1h 40 min   \t Rs. 5,527\n");
           printf("press 1 for flight 1 and 2 for flight 2\n");

          scanf("%d",&u);
        
           if(u==1)
            {
                int k=passengerdetails();
                printf("CONGRATULATIONS!YOUR TICKET HAS BEEN BOOKED\n");
    
           printf("     6E 5268    \t IndiGo  \t   6:45 am \t 8:20 am  \t 1h 35 min   \t Rs.%d\n", ((5527)*k));
                printf("happy journey\n");

            }
         else    if(u==2)
            {
                int k=passengerdetails();
                printf("CONGRATULATIONS!YOUR TICKET HAS BEEN BOOKED\n");
                
           printf("     UK 878     \t Vistara \t  12:55 pm \t 2:00 pm \t  1h 40 min   \t Rs.%d\n",((5527)*k));
                printf("Happy Journey\n");
            }  
        }
else if(strcmp("delhi",destination)==0)
{


            printf("The flights available for Mumbai to Delhi are\n\n");
           printf("FLIGHT NUMBER \t flight \t departure\t arrival \t Journey time \t    Price \n");
           printf("   6E 6206    \t IndiGo \t  1:35 pm \t 3:30 pm \t  1h 25min    \t Rs. 3,947\n");
           printf("   6E 6064    \t IndiGo \t  5:30 pm \t 7:00 pm \t  1h 30 min   \t Rs. 3,947\n");
           printf("press 1 for flight 1 and 2 for flight 2\n");

          scanf("%d",&u);
        
           if(u==1)
            {
                int k=passengerdetails();
                printf("CONGRATULATIONS!YOUR TICKET HAS BEEN BOOKED\n");
                
           printf("   6E 6206    \t IndiGo \t  1:35 pm \t 3:30 pm \t  1h 25min    \t Rs.%d\n",(3947)*k));
            
                printf("happy journey\n");

            }
            if(u==2)
            {
                int k=passengerdetails();
                printf("CONGRATULATIONS!YOUR TICKET HAS BEEN BOOKED\n");
                
           printf("   6E 6064    \t IndiGo \t  5:30 pm \t 7:00 pm \t  1h 30 min   \t Rs.%d\n",((3947)*k));
                printf("Happy Journey\n");
           
 }
  }  
       else if(strcmp("nagpur",destination)==0)
        {
             printf("The flights available for Hyderabad to Nagpur are\n\n");
           printf("  FLIGHT NUMBER \t flight \t departure \t  arrival  \t Journey time \t   Price  \n");
           printf("    6E 7136     \t IndiGo \t  10:50 am \t  12:35 pm \t   1h 25min   \t Rs. 7,209\n");
           printf("    6E 7271     \t IndiGo \t  05:20 am \t  02:35 pm \t   9h 15 min  \t Rs.16,197\n");
           printf("press 1 for flight 1 and 2 for flight 2\n"); 

          scanf("%d",&u);
        
           if(u==1)
            {
                int k=passengerdetails();
                printf("CONGRATULATIONS!YOUR TICKET HAS BEEN BOOKED\n");
                
           printf("    6E 7136     \t IndiGo \t  10:50 am \t  12:35 pm \t   1h 25min   \t Rs.%d\n",((7209)*k));
            
                printf("happy journey\n");

            }
            if(u==2)
            {
                int k=passengerdetails();
                printf("CONGRATULATIONS!YOUR TICKET HAS BEEN BOOKED\n");
            
           printf("    6E 7271     \t IndiGo \t  05:20 am \t  02:35 pm \t   9h 15 min  \t Rs.%d\n",((16197)*k));
                printf("Happy Journey\n");
            }            }

            else if(strcmp("madras",destination)==0)
        {
             printf("The flights available for Hyderabad to Madras are\n\n");
           printf("FLIGHT NUMBER \t flight \t departure \t arrival  \t Journey time \t   Price   \n");
           printf("   6E 7134    \t IndiGo \t  10:50 am \t 12:35 pm \t   1h 25min   \t Rs. 7,209 \n");
           printf("   6E 727     \t IndiGo \t   5:20 am \t  2:35 pm \t   9h 15 min  \t Rs. 16,197\n");
           printf("press 1 for flight 1 and 2 for flight 2/n");

          scanf("%d",&u);
        
           if(u==1)
            {
                int k=passengerdetails();
                printf("CONGRATULATIONS!YOUR TICKET HAS BEEN BOOKED\n");
        
           printf("   6E 7134    \t IndiGo \t  10:50 am \t 12:35 pm \t   1h 25min   \t Rs.%d\n",((7209)*k));
                printf("happy journey/n");

            }
            if(u==2)
            {
                int k=passengerdetails();
                printf("CONGRATULATIONS!YOUR TICKET HAS BEEN BOOKED\n");
               
           printf(" 6E 727     \t IndiGo \t   5:20 am \t  2:35 pm \t   9h 15 min  \t Rs.%d\n",((16197)*k));
                
                printf("Happy Journey\n");
               
            }            }
        }


else if(strcmp("madras",board)==0)
{

if(strcmp("nagpur",destination)==0)
{     printf("The flights available for Madras to Nagpur are\n\n");
           printf(" FLIGHT NUMBER \t flight \t departure\t arrival \t Journey time \t    Price \n");
           printf("   6E 6149     \t IndiGo \t  1:35 pm \t 3:30 pm \t  1h 25 min   \t Rs. 3,947\n");
           printf("   6E 6897     \t IndiGo \t  4:55 am \t 12:35 pm\t  7h 40 min   \t Rs. 5,576\n");
           printf("press 1 for flight 1 and 2 for flight 2\n");

          scanf("%d",&u);
        
           if(u==1)
            {
                int k=passengerdetails();
                printf("CONGRATULATIONS!YOUR TICKET HAS BEEN BOOKED\n");
                printf("   6E 6149     \t IndiGo \t  1:35 pm \t 3:30 pm \t  1h 25 min   \t Rs.%d\n",((3947)*k));
           
                printf("happy journey\n");

            }
            if(u==2)
            {
                int k=passengerdetails();
                printf("CONGRATULATIONS!YOUR TICKET HAS BEEN BOOKED\n");
                
           printf("   6E 6897     \t IndiGo \t  4:55 am \t 12:35 pm\t  7h 40 min   \t Rs.%d\n",((5576)*k));
                printf("Happy Journey\n");
            
 }
    }
    else if(strcmp("delhi",destination)==0)
    {
         printf("The flights available for Madras to Delhi are\n\n");
           printf("FLIGHT NUMBER \t flight  \t departure \t arrival  \t  Journey time \t    Price    \n");
           printf("    6E 804    \t IndiGo  \t  4:55 pm  \t 07:50 pm \t   02h 55min   \t Rs. 5,991   \n");
           printf("    I5 612    \t AirAsia \t  12:55 pm \t 12:25 am \t   12h 30 min  \t Rs. 6,024   \n");
           printf("press 1 for flight 1 and 2 for flight 2\n");

          scanf("%d",&u);
        
           if(u==1)
            {
                int k=passengerdetails();
                printf("CONGRATULATIONS!YOUR TICKET HAS BEEN BOOKED\n");
                
           printf("    6E 804    \t IndiGo  \t  4:55 pm  \t 07:50 pm \t   02h 55min   \t Rs.%d\n",((5991)*k));
            
                printf("happy journey\n");

            }
            if(u==2)
            {
                int k=passengerdetails();
                printf("CONGRATULATIONS!YOUR TICKET HAS BEEN BOOKED\n");
                
           printf("    I5 612    \t AirAsia \t  12:55 pm \t 12:25 am \t   12h 30 min  \t Rs.%d\n",((6024)*k));
                printf("Happy Journey\n");
            
 }
    }
    else if(strcmp("mumbai",destination)==0)
    {
          printf("The flights available for Madras to Mumbai are\n\n");
           printf(" FLIGHT NUMBER \t  flight   \t departure \t arrival  \t Journey time \t    Price \n");
           printf("    6E 5306    \t  IndiGo   \t  10:25 pm \t 12:20 am \t   1h 55min   \t Rs. 4,807\n");
           printf("    QP 1305    \t Akasa Air \t   8:50 pm \t 10:50 pm \t   2h 00min   \t Rs. 5,191\n");
           printf("press 1 for flight 1 and 2 for flight 2\n");

          scanf("%d",&u);
        
           if(u==1)
            {
                printf("CONGRATULATIONS!YOUR TICKET HAS BEEN BOOKED\n");
            
           printf("    6E 5306    \t  IndiGo   \t  10:25 pm \t 12:20 am \t   1h 55min   \t Rs.%d\n",((4807)*k));
                printf("happy journey\n");

            }
            if(u==2)
            {
                int k=passengerdetails();
                printf("CONGRATULATIONS!YOUR TICKET HAS BEEN BOOKED\n");
                
                
                printf("Happy Journey\n");
                
 }

    }
   else  if(strcmp("hyderabad",destination)==0)
    {
          printf("The flights available for Madras to hyderabad are\n:\n");
           printf("  FLIGHT NUMBER \t    flight    \t departure \t arrival  \t Journey time \t   Price   \n");
           printf("     6E 7446    \t    IndiGo    \t  10:05 pm \t  6:25 am \t   8h 20 min  \t Rs. 4,283 \n");
           printf("     9I 894     \t Alliance Air \t   2:25 pm \t  4:15 pm \t   1h 50 min  \t Rs. 4,363 \n");
           printf("press 1 for flight 1 and 2 for flight 2\n");

          scanf("%d",&u);
        
           if(u==1)
            {
                int k=passengerdetails();
                printf("CONGRATULATIONS!YOUR TICKET HAS BEEN BOOKED\n");
        
        
           printf("     6E 7446    \t    IndiGo    \t  10:05 pm \t  6:25 am \t   8h 20 min  \t Rs.%d\n",((4283)*k));
                printf("happy journey\n");

            }
            if(u==2)
            {
                int k=passengerdetails();
                printf("CONGRATULATIONS!YOUR TICKET HAS BEEN BOOKED\n");
                
           printf("     9I 894     \t Alliance Air \t   2:25 pm \t  4:15 pm \t   1h 50 min  \t Rs.%d\n",((4363)*k));
                printf("Happy Journey\n");
                
 }

    }
}
else if(strcmp("nagpur",board)==0)
{
  if (strcmp("delhi",destination)==0)
    {
          printf("The flights available for Nagpur to Delhi are\n\n");
           printf("   FLIGHT NUMBER \t flight \t departure\t  arrival \t Journey time \t   Price  \n");
           printf("     6E 6602     \t IndiGo \t  5:10 pm \t  7:00 pm \t  1h 50 min   \t Rs. 6,561\n");
           printf("     6E 6099     \t IndiGo \t 11:55 am \t  1:45 pm \t  1h 50 min   \t Rs. 7,262\n");
           printf("press 1 for flight 1 and 2 for flight 2\n");

          scanf("%d",&u);
        
           if(u==1)
            {
                int k=passengerdetails();
                printf("CONGRATULATIONS!YOUR TICKET HAS BEEN BOOKED\n");

               printf("     6E 6602     \t IndiGo \t  5:10 pm \t  7:00 pm \t  1h 50 min   \t Rs.%d\n",((6561)*k));
                printf("happy journey\n");

                    }
            if(u==2)
            {
                int k=passengerdetails();
                printf("CONGRATULATIONS!YOUR TICKET HAS BEEN BOOKED\n");
                
           printf("     6E 6099     \t IndiGo \t 11:55 am \t  1:45 pm \t  1h 50 min   \t Rs.%d\n",((7262)*k));
                printf("Happy Journey\n");
                
 }
    }
    else if(strcmp("mumbai",destination)==0)
    {


          printf("The flights available for Nagpur to Mumbai are\n\n");
           printf("  FLIGHT NUMBER \t   flight \t departure \t arrival  \t  Journey time \t     Price \n");
           printf("   G8 2607      \t  GoFirst \t  10:40 pm \t 12:10 am \t    1h 30min   \t Rs.  4,556\n");
           printf("   G8 141       \t  GoFirst \t   9:25 am \t 10:50 am \t    1h 25 min  \t Rs. 10,027\n");
           printf("press 1 for flight 1 and 2 for flight 2\n");

          scanf("%d",&u);
        
           if(u==1)
            {
                int k=passengerdetails();
                printf("CONGRATULATIONS!YOUR TICKET HAS BEEN BOOKED\n");
        
           printf("   G8 2607      \t  GoFirst \t  10:40 pm \t 12:10 am \t    1h 30min   \t Rs.%d\n",((4556)*k));
                printf("happy journey\n");

            }
            if(u==2)
            {
                int k=passengerdetails();
                printf("CONGRATULATIONS!YOUR TICKET HAS BEEN BOOKED\n");
                
           printf("   G8 141       \t  GoFirst \t   9:25 am \t 10:50 am \t    1h 25 min  \t Rs.%d\n",((10027)*k));
                printf("Happy Journey\n");
           
 }
    }

   else  if(strcmp("hyderabad",destination)==0)
    {
          printf("The flights available for Nagpur to Hyderabad are\n:\n");
           printf("  FLIGHT NUMBER \t  flight \t departure \t  arrival \t Journey time \t     Price \n");
           printf("    6E 7137     \t  IndiGo \t   2:55 pm \t  4:40 pm \t  1h 45min    \t Rs.  8,064\n");
           printf("    6E 7109     \t  IndiGo \t  12:55 pm \t  6:45 pm \t  5h 50 min   \t Rs. 11,207\n");
           printf("press 1 for flight 1 and 2 for flight 2\n");

          scanf("%d",&u);
        
           if(u==1)
            {
                int k=passengerdetails();
                printf("CONGRATULATIONS!YOUR TICKET HAS BEEN BOOKED\n");
                
           printf("    6E 7137     \t  IndiGo \t   2:55 pm \t  4:40 pm \t  1h 45min    \t Rs.%d\n",((8064)*k));
                
                printf("happy journey\n");

            }
            if(u==2)
            {
                int k=passengerdetails();
                printf("CONGRATULATIONS!YOUR TICKET HAS BEEN BOOKED\n");
                
           printf("    6E 7109     \t  IndiGo \t  12:55 pm \t  6:45 pm \t  5h 50 min   \t Rs.%d\n",((11207)*k));
                printf("Happy Journey\n");
                
 }
    }

    else if(strcmp("madras",destination)==0)
    {
          printf("The flights available for Nagpur to Madras are\n:\n");
           printf("FLIGHT NUMBER \t flight \t departure\t  arrival \t  Journey time \t    Price \n");
           printf("   6E 612     \t IndiGo \t  8:35 pm \t 10:15 pm \t   1h 40 min   \t Rs. 4,824\n");
           printf("   6E 909     \t IndiGo \t  8:50 pm \t  3:10 pm \t   6h 20 min   \t Rs. 5,707\n");
           printf("press 1 for flight 1 and 2 for flight 2\n");

          scanf("%d",&u);
        
           if(u==1)
            {
                int k=passengerdetails();
                printf("CONGRATULATIONS!YOUR TICKET HAS BEEN BOOKED\n");
                
           printf("   6E 612     \t IndiGo \t  8:35 pm \t 10:15 pm \t   1h 40 min   \t Rs.%d\n",((4824)*k));
    
                printf("happy journey\n");

            }
            if(u==2)
            {
                int k=passengerdetails();
                printf("CONGRATULATIONS!YOUR TICKET HAS BEEN BOOKED\n");
                
           printf("   6E 909     \t IndiGo \t  8:50 pm \t  3:10 pm \t   6h 20 min   \t Rs.%d\n",((5707)*k));
                printf("Happy Journey\n");
                
 }
    }
}


}