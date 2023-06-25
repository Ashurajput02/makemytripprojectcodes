#include<stdio.h>
#include<string.h>
int main()
{


  char board[20];
  char destination[20];
  printf("enter boarding\n");
  scanf("%s",board);
  printf("enter destination\n");
  scanf("%s",destination);
  int u;

 if (strcmp("hyderabad",board)==0)
    {
        if(strcmp("mumbai",destination)==0)
        {
              printf("The flights available for Hyderabad to Mumbai are\n");
           printf("flight number\tflight\tdepaarture\tarrival\tJourney time\tPrice\n");
           printf("6E i5268\tIndiGo\t6:45am\t8:20am\t1h35min\tRs.5,527\n");
           printf("UK 878\tVistara\t12:55pm\t2:00pm\t1h40min\tRs.5,527\n");
           printf("press 1 for flight 1 and 2 for flight 2\n");

          scanf("%d",&u);
        
           if(u==1)
            {
                //passengerdetails();
                printf("CONGRATULATIONS!YOUR TICKET HAS BEEN BOOKED\n");
                printf("happy journey");
                //printf("Your Train has been Booked:\n22222 CSMT Rajdhani\t?5,000\n3:00pm\t18hrs Journey\n");
            }
         else    if(u==2)
            {
                //passengerdetails();
                printf("CONGRATULATIONS!YOUR TICKET HAS BEEN BOOKED\n");
                printf("Happy Journey\n");
                //printf("Your Train has been Booked:\n21223 Janshatabdi\t?4,000\n9:00pm\t23hrs Journey\n");
            }  
        }
else if(strcmp("delhi",destination)==0)
{


            printf("The flights available for Mumbai to Delhi are\n");
           printf("flight number\t flight \t depaarture\t arrival\t Journey time \t Price\n");
           printf("6E 6206 \t IndiGo \t 1:35 pm \t3:300 pm \t 1h 25min \t Rs. 3,947\n");
           printf("6E 6064\t IndiGo\t 5:30 pm \t7:00 pm \t 1h 30 min\t Rs. 3,947\n");
           printf("press 1 for flight 1 and 2 for flight 2");

          scanf("%d",&u);
        
           if(u==1)
            {
                //passengerdetails();
                printf("CONGRATULATIONS!YOUR TICKET HAS BEEN BOOKED\n");
                printf("happy journey");
                //printf("Your Train has been Booked:\n22222 CSMT Rajdhani\t?5,000\n3:00pm\t18hrs Journey\n");
            }
            if(u==2)
            {
                //passengerdetails();
                printf("CONGRATULATIONS!YOUR TICKET HAS BEEN BOOKED\n");
                printf("Happy Journey");
                //printf("Your Train has been Booked:\n21223 Janshatabdi\t?4,000\n9:00pm\t23hrs Journey\n");
           
 }
  }  
       else if(strcmp("nagpur",destination)==0)
        {
             printf("The flights available forHyderabad to Nagpur are\n");
           printf("flight number\t flight \t depaarture\t arrival\t Journey time \t Price\n");
           printf("6E 7136 \t IndiGo \t 10:50 am \t12:35 pm \t 1h 25min \t Rs. 7,209\n");
           printf("6E 7271\t IndiGo\t 5:20 am \t2:35 pm \t 9h 15 min\t Rs. 16,197\n");
           printf("press 1 for flight 1 and 2 for flight 2");

          scanf("%d",&u);
        
           if(u==1)
            {
                //passengerdetails();
                printf("CONGRATULATIONS!YOUR TICKET HAS BEEN BOOKED\n");
                printf("happy journey");
                //printf("Your Train has been Booked:\n22222 CSMT Rajdhani\t?5,000\n3:00pm\t18hrs Journey\n");
            }
            if(u==2)
            {
                //passengerdetails();
                printf("CONGRATULATIONS!YOUR TICKET HAS BEEN BOOKED\n");
                printf("Happy Journey");
                //printf("Your Train has been Booked:\n21223 Janshatabdi\t?4,000\n9:00pm\t23hrs Journey\n");
            }            }

            else if(strcmp("madras",destination)==0)
        {
             printf("The flights available for Hyderabad to Madras are\n");
           printf("flight number\t flight \t depaarture\t arrival\t Journey time \t Price\n");
           printf("6E 7134 \t IndiGo \t 10:50 am \t12:35 pm \t 1h 25min \t Rs. 7,209\n");
           printf("6E 727\t IndiGo\t 5:20 am \t2:35 pm \t 9h 15 min\t Rs. 16,197\n");
           printf("press 1 for flight 1 and 2 for flight 2");

          scanf("%d",&u);
        
           if(u==1)
            {
                //passengerdetails();
                printf("CONGRATULATIONS!YOUR TICKET HAS BEEN BOOKED\n");
                printf("happy journey");
                //printf("Your Train has been Booked:\n22222 CSMT Rajdhani\t?5,000\n3:00pm\t18hrs Journey\n");
            }
            if(u==2)
            {
                //passengerdetails();
                printf("CONGRATULATIONS!YOUR TICKET HAS BEEN BOOKED\n");
                printf("Happy Journey");
                //printf("Your Train has been Booked:\n21223 Janshatabdi\t?4,000\n9:00pm\t23hrs Journey\n");
            }            }
        }
}
