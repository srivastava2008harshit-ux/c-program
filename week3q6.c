// program to input the number of month and it  should print the name of month.

#include <stdio.h>

int main()
{   
     int month;
     printf("enter the number of month:");
     scanf("%d" , &month);
     
     if (month==1) { 
     printf("JANUARY\n");
     }
      else  if (month==2) { 
     printf("FEBRUARY\n");
     }
          else  if (month==3) { 
     printf("MARCH\n");
     }
          else  if (month==4) { 
     printf("APRIL\n");
     }
         else  if (month==5) { 
     printf("MAY\n");
     } 
          else  if (month==6) { 
     printf("JUNE\n");
     }
          else  if (month==7) { 
     printf("JULY\n");
     }
          else  if (month==8) { 
     printf("AUGUST\n");
     } 
         else  if (month==9) { 
     printf("SEPTEMBER\n");
     }
         else  if (month==10) { 
     printf("OCTOBER\n");
     }
         else  if (month==11) { 
     printf("NOVEMBER\n");
     }
     else if (month==12) {
     printf("DECEMBER\n");
     }
     
     return 0;
 }
