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

  
  
  
  
    if(strcmp("delhi",board)==0)
    {
	      if(strcmp("mumbai",destination)==0)
        {
          
           printf("The flights available for Delhi to Mumbai are\n");
           printf("flight number\t flight \t depaarture\t arrival\t Journey time \t Price\n");
           printf("6E 2112 \t IndiGo \t 4:45 am \t 7:15 am \t 2h 30min \t Rs. 4,201\n");
           printf("G8 530 \t GoFirst \t 6:00 am \t 8:10 am \t 2h 10 min \t Rs. 4,202\n");
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

        else if (strcmp("hyderabad",destination)==0)
        {
           /* printf("23658 Delhi Express\t?5,000\n9:00am\t25hrs Journey\n");
            printf("21558 Hydel\t?4,000\n10:00pm\t29hrs Journey\n");
            scanf("%d",&train);*/
             printf("The flights available for Delhi to Hyderabad are\n");
           printf("flight number\t flight \t depaarture\t arrival\t Journey time \t Price\n");
           printf("6E 2596 \t IndiGo \t 10:30 pm \t 0:50 am \t 2h 20min \t Rs. 5,945\n");
           printf("AI 554 \t Air india  \t 4:50 pm \t 7:00 pm \t 2h 10 min \t Rs. 6,480\n");
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


        else if(strcmp("madras",destination)==0)
        {
            printf("The flights available for Delhi to Madras are\n");
           printf("flight number\t flight \t depaarture\t arrival\t Journey time \t Price\n");
           printf("6E 2059 \t IndiGo \t 7:10 am \t 10:05 am \t 2h 55min \t Rs. 5,902\n");
           printf("AI 439 \t Air india  \t 5:45 pm \t 8:50 pm \t 3h 05 min \t Rs. 6,018\n");
           printf("press 1 for flight 1 and 2 for flight 2");
           scanf("%d",&u);
            /*if(train==23398)
            {
                //passengerdetails();
                printf("Your Train has been Booked:\n23398 Jalandhar Express\t?6,000\n8:00am\t30hrs Journey\n");
            }
            if(train==21542)
            {
                //passengerdetails();
                printf("Your Train has been Booked:\n21542 Paghwara Express\t?9,000\n11:00pm\t36hrs Journey\n");
            }*/

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
else if (strcmp("nagpur",destination)==0)
        {   printf("The flights available for Delhi to Nagpur are\n");
           printf("flight number\t flight \t depaarture\t arrival\t Journey time \t Price\n");
           printf("6E 6554 \t IndiGo \t9:35 am \t 11:20 am \t 1h 45min \t Rs. 5,114\n");
           printf("6E 2141\t IndiGo  \t 2:50 pm \t 4:35 pm \t 1h 45 min \t Rs. 5,114\n");
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
    }
    

else if(strcmp("mumbai",board)==0)
{



    
        if(strcmp(destination,"delhi")==0)
        { 
            printf("The flights available for Mumbai to Delhi are\n");
         printf("flight number\t flight \t depaarture\t arrival\t Journey time \t Price\n");
           printf("6E 2083 \t IndiGo \t11:15 pm \t 1:40 am \t 2h 25min \t Rs. 4,190\n");
           printf("G8 339\t GoFirst  \t 8:45 pm \t 10:55 pm \t 2h 10 min \t Rs. 5,434\n");
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

           else if (strcmp(destination,"hyderabad")==0)
       {    printf("The flights available for Mumbai to Hyderabad are\n");
           printf("flight number\t flight \t depaarture\t arrival\t Journey time \t Price\n");
           printf("6E 2486 \t IndiGo \t4:05 pm \t5:35 pm \t 1h 30min \t Rs. 5,103\n");
           printf("UK 869\t Vistara  \t 10:30 pm \t12:05 pm \t 1h 35 min\t Rs. 5,102\n");
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

       else if (strcmp("madras",destination)==0)
        {
             printf("The flights available for Mumbai to Chennai are\n");
           printf("flight number\t flight \t depaarture\t arrival\t Journey time \t Price\n");
           printf("6E 5265 \t IndiGo \t 5:35 am \t7:30 am \t 1h 55min \t Rs. 3,547\n");
           printf("G8 305\t GoFirst \t 5:45 am \t7:35 am \t 1h 50 min\t Rs. 3,211\n");
           printf("press 1 for flight 1 and 2 for flight 2");

          scanf("%d",&u);
        
           if(u==1)
            {
                //passengerdetails();
                printf("CONGRATULATIONS!YOUR TICKET HAS BEEN BOOKED\n");
                printf("happy journey");
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
              printf("The flights available for Mumbai to Nagpur are\n");
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
    }
    
}

