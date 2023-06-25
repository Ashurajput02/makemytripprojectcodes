#include<stdio.h>
#include<string.h>
#include <stdbool.h>

    void passengerdetails();
    void mytrips();
    void plane();//function for variety of planes


int main()

{
	//passengerdetails();
    //mytrips();
	plane();
    return 0;
}
/*

void passengerdetails()

{ int k=50;// new insert
    int numofpass;
    printf("Enter the number of passenger(s) travelling\n");
    scanf("%d",&numofpass);
    char nameofpass[numofpass][50];
    int ageofpass[numofpass];
    int i,j;
    for(i=0;i<numofpass;i++)
    { int p=i+1;
        printf("Enter the name of passenger %d\n",p);
		fgets(nameofpass[i],k,stdin);
    }
    /*for (i=0;i<numofpass;i++)
    {
    	printf("Enter the age of passenger %d\n",(i+1));
    	scanf("%d",ageofpass[i]);
	}*/
   /* for(i=0;i<numofpass;i++)
    {
        printf("The name and age of passenger %d is:\t",i+1);
        puts(nameofpass[i]);
        //printf("\t%d\n",ageofpass[i]);
    }
}

void mytrips()

{}
*/

   void plane()

{
    char board[15],destination[15];
   char date1[20];//for departure
    char date2[20]="" ;//for return
    int u;
            
             printf("FROM:\n");
            fgets(board,15,stdin);
             printf("TO:\n");
              fgets(destination,15,stdin);

   printf("Pess 1 for one way journey and 2 for round trip\n");
   int triptype;
   scanf("%d",&triptype);
   if(triptype==1)
{
    printf("Enter departure date in dd/mm/yy format:\n  ");
    //scanf("%d %d %d",&date,&month,&year);
scanf("%s",date1);

}


    else
    {
         printf("Enter departure date in dd/mm/yy format.\n");
    scanf("%s",date1);

    printf("Enter return date in dd/mm/yy format .\n ");
scanf("%s",date2);
    }


printf("ENTER 1 FOR ECONOMY CLASS ,2 FOR BUSINESS CLASS:\n");
int typeclass;
scanf("%d",&typeclass);

    printf("\n \n FROM : %s \t TO: %s\n",board,destination);
    if(triptype==1)
    printf(" \n \t JOUNREY TYPE :ONE WAY\n");
    else
    printf("\t JOUNREY TYPE :RETURN\n");

    printf("\nDEPARTURE DATE:%s \t RETURN DATE:%s\n",date1, date2);
     if(typeclass==1)
    printf("\t JOUNREY CLASS : ECONOMY");
    else
    printf("\t JOUNREY CLASS :BUSINESS\n");
    

    bool result=false;
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
           scanf("%d",&plane);
          
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
    
  else if (strcmp("hyderabad",board)==0)
    {
        if(strcmp("mumbai",destination)==0)
        {
              printf("The flights available for Hyderabad to Mumbai are\n");
           printf("flight number\t flight \t depaarture\t arrival\t Journey time \t Price\n");
           printf("6E 5268 \t IndiGo \t 6:45 am \t8:20am \t 1h 35min \t Rs. 5,527\n");
           printf("UK 878\t Vistara\t 12:55 pm \t2:00 pm \t 1h 40 min\t Rs. 5,527\n");
           printf("press 1 for flight 1 and 2 for flight 2");

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
        }
else if(strcmp("madras",board)==0)
{

if(strcmp("nagpur",destination)==0)
{     printf("The flights available for Madras to Nagpur are\n");
           printf("flight number\t flight \t depaarture\t arrival\t Journey time \t Price\n");
           printf("6E 6149 \t IndiGo \t 1:35 pm \t3:300 pm \t 1h 25min \t Rs. 3,947\n");
           printf("6E 6897\t IndiGo\t 4:55 am \t12:35 pm \t 7h 40 min\t Rs. 5,576\n");
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
    else if(strcmp("delhi",destination)==0)
    {
         printf("The flights available for Madras to Delhi are\n");
           printf("flight number\t flight \t depaarture\t arrival\t Journey time \t Price\n");
           printf("6E 804 \t IndiGo \t 4:55 pm \t 7:50 pm \t 2h 55min \t Rs. 5,991\n");
           printf("I5 612\t AirAsia\t 12:55 pm \t12:25 am \t 12h 30 min\t Rs. 6,024\n");
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
    else if(strcmp("mumbai",destination)==0)
    {
          printf("The flights available for Madras to Mumbai are\n");
           printf("flight number\t flight \t depaarture\t arrival\t Journey time \t Price\n");
           printf("6E 5306 \t IndiGo \t 10:25 pm \t12:20 am \t 1h 55min \t Rs. 4,807\n");
           printf("QP 1305 \t Akasa Air\t 8:50 pm \t10:50 pm \t 2h\t Rs. 5,191\n");
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
   else  if(strcmp("hyderabad",destination)==0)
    {
          printf("The flights available for Madras to hyderabad are:\n");
           printf("flight number\t flight \t depaarture\t arrival\t Journey time \t Price\n");
           printf("6E 7446 \t IndiGo \t 10:05 pm \t 6:25 am \t 8h 20min \t Rs. 4,283\n");
           printf("9I 894\t Alliance Air\t 2:25 pm \t4:15 pm \t 1h 50 min\t Rs. 4,363\n");
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

else if(strcmp("nagpur",board)==0)
{
  if (strcmp("delhi",destination)==0)
    {
          printf("The flights available for Nagpur to Delhi are\n");
           printf("flight number\t flight \t depaarture\t arrival\t Journey time \t Price\n");
           printf("6E 6602 \t IndiGo \t 5:10 pm \t7:00 pm \t 1h 50 min \t Rs. 6,561\n");
           printf("6E 6099\t IndiGo\t 11:55 am \t1:45 pm \t 1h 50 min\t Rs. 7,262\n");
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
    else if(strcmp("mumbai",destination)==0)
    {


          printf("The flights available for Nagpur to Mumbai are\n");
           printf("flight number\t flight \t depaarture\t arrival\t Journey time \t Price\n");
           printf("G8 2607 \t GoFirst \t10:40 pm \t12:10 am \t 1h 30min \t Rs. 4,556\n");
           printf("G8 141\t GoFirst\t 9:25 am \t10:50 am \t 1h 25 min\t Rs. 10,027\n");
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

   else  if(strcmp("hyderabad",destination)==0)
    {
          printf("The flights available for Nagpur to Hyderabad are:\n");
           printf("flight number\t flight \t depaarture\t arrival\t Journey time \t Price\n");
           printf("6E 7137 \t IndiGo \t 2:55 pm \t 4:40 pm \t 1h 45min \t Rs. 8,064\n");
           printf("6E 7109 \t IndiGo\t 12:55 pm \t6:45 pm \t 5h 50 min\t Rs. 11,207\n");
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
          printf("The flights available for Nagpur to Madras are:\n");
           printf("flight number\t flight \t depaarture\t arrival\t Journey time \t Price\n");
           printf("6E 612 \t IndiGo \t 8:35 pm \t10:15 pm \t 1h 40 min \t Rs. 4,824\n");
           printf("6E 909\t IndiGo\t 8:50 pm \t3:10 pm \t 6h 20 min\t Rs. 5,707\n");
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
