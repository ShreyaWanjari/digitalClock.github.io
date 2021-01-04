#include<unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>



int main(){
    
    int h,m,s;


    
    printf("Enter current time : \n");
    scanf("%d %d %d",&h,&m,&s);
    if (h>12)
    {
        printf("ERROR !\n");
        exit(0);
    }
    if (m>60)
    {
        printf("ERROR !\n");
        exit(0);
    }
    if (s>60)
    {
        printf("ERROR !\n");
        exit(0);
    }
    while (1)
    {
        
    
    s=s+1;
    if(s >59)
    {
        m= m+1;
        s=0;
    }
    if (m>59)
    {
        h=h+1;
        m=0;
    }
    if (h>12)
    {
        h=1;
        m=0;
        s=0;
    }
    
    printf("\n\n\n\n\n\n\n\n\n%02d : %02d : %02d",h,m,s);
   system("cls");
   sleep(-10);
 
   
    
   
}
return 0;
getch();
}