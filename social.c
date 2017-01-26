


#define _GNU_SOURCE

#ifdef _MSC_VER // Windows
#include <windows.h>
#include <direct.h>
#include <process.h>
#else // Linux
#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
//#endif /*_MSC_VER*/
//#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include "playtime.h"
#include "typedef1.h"
#include "editprof_det.h"
#include "myprof_det.h"
#include "NEWS.h"
#include "regist.h"
#include "LOGIN.h"
//#include"regist.h"
#endif 
//#include"userdetails.h"


 
 
  
  
  
 int main(){

  int i;
  //int count = 0;//Counts number of registrations 

  //delay(900000);
  //printf("Hey macho\n");
  while(1){
  

  delay(800000);

  printf("################################################################\n");
  printf("#.............................***..............................#\n");
  printf("#!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!#\n");
  printf("#!!!!!!!!*!!!!!! ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^!!!!!!!!!!!*!!!!!#\n");
  printf("#!!!!!!*****!![ Welcome to the COOL GUYZ ZONE ]!!!!!!!!*****!!!#\n");
  printf("#!!!!!!!!*!!!!!!_______________________________!!!!!!!!!!*!!!!!#\n");
  printf("#!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!#\n");
  printf("#!!!!!!!!!!!!!!!!!!!!!!!!!!!!!***!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!#\n"); 
  printf("################################################################\n");
  printf(".................................................................\n\n");

  //printf("\t\t\t\t WELCOME TO COOL GUYZ\n\n\n");
  
  delay(500000);
  printf("1. Register \n");
  printf("2. login \n");
  printf("3. exit  \n");
  
  printf("Enter your preference ------------------\n\n");
  scanf("%d",&i);
  
  // if(i==1 || i==2){//BEgin of if#1
 
  switch(i)
  {
   
    case 1:
    Reg();
    printf("\n\n\n\n");
    break;
   
    case 2:
    login();
    printf("\n\n\n\n");
    break;
    
    case 3:
    system("clear");
    exit(0);


    default:
    printf("\nThank you for using our service\n");
    break;
    
  }  
   
   
  
  
   
 
  } // End of while       
 return 0;

}
	
