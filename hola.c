#include<stdio.h>
int main()
{
    FILE *ptr;
    ptr=fopen("ramesh.txt","w");
fprintf(ptr,"%s","there are many models for ac equivalent circuits of transistor.\n");
fprintf(ptr,"%s","they are:\n");
fclose(ptr);
 FILE * tashu;
 tashu=fopen("ramesh.txt","w");
 char ch;
 while(1)
 {
    ch=fgetc(tashu);
     if(ch==EOF)
     break;
     else
     putchar(ch);
 }
 fclose(tashu);

FILE * ashu;
 ashu=fopen("ramesh.txt","w");
 char ch2;
 int p=0;
 while(1)
 {
    ch2=fgetc(tashu);
     if(ch2==EOF)
     break;

if(ch=='t')
p++;
 }
 fclose(ashu);

}