

void login(){//log function begin#1
	
  system("clear");
  printf("############################################################################\n");

  printf("WELCOME TO COOL GUYZ\n");

  printf("############################################################################\n");
  
 
  FILE *newfile;
  User me;
  int c,d;
  int cool_no;
  int i;
  int flag = 0;// for updating details
  int chance=0; // for wrong password
  int chance1=0;// for password alert
  char demo_name[20];
  char new_name[20];
  char pass[20];// ENTERED password while login
  char pass_ver[20];// original password

  while(1){ //#1 while begin


    printf("Hey!! What's ur username : ");
    scanf("%s",demo_name);

    printf("HI! Your Sweet Cool no? : ");
    scanf("%d",&cool_no); // Unique Cool Number for login
    
    
    sprintf(new_name,"%s_%d.txt",demo_name,cool_no);
    

    newfile = fopen(new_name,"r");
    if(!newfile){

    	printf("No username found\n");
    	printf("Please Register(Enter) to continue\n");
      getchar();
      getchar();
      Reg();
          
    }
    
    else{   //#else 0 begin
    system("clear");
    printf("What's ur crush name \n");
    
    /*for ( c = 1 ; c <= 1767 ; c++ )
       for ( d = 1 ; d <= 32767 ; d++ )
    
      {} */
    delay(1000000);
    printf("Just kidding \n");


    while(chance!=3){ // #while2 begin // FOR Password re-attempting 3 times MAX
    

    printf("Password Please :\n");
    //system("clear"); 
    scanf("%s",pass); // Password
    


    fread(&me,sizeof(me),1,newfile);
    
    if(strcmp(me.password,pass)==0){ // #If1 Begin  
    
    delay(1000000); 
    printf("Login Succesfull\n");
    
    delay(6000000);
    system("clear");

    printf("####################################################\n");
    
    
    printf("\t\tWELCOME TO %s\t\t\t\t \n",demo_name);
  

    printf("####################################################\n"); 
     
    while(1){ //while#3 begin 
    // USE TIME FUNCTION TO DISPLAY TIME
        printf("1)Newsfeed \n");
        printf("2)My Profile Details \n");
        printf("3)Friends List \n");  // may be should try linked lists
        printf("4)Edit Profile Details \n");
        printf("5)Explore the COOL World \n");
        printf("6)Logout  \n");


             
        

        //clrscr();
        //system("clear");  
        printf("\n\n\nEnter Your Options: \n\n");
        scanf("%d",&i);
 
        switch(i){//switch begin

        
        case 1:
        cur_affairs(); 
        printf("***********************************************************\n\n");                //NEWS FEED
        break;

        case 2:
        myprofdet(demo_name,cool_no,flag);
        printf("*************************************************************\n\n");
        break;

        case 3:
        //friends details
        break;
         
        case 4:
        // flag = 1;
        edit_prof_det();
        break;

        case 5:
        //explore COOL world
        //xplore(cool_no);
        break;
  

        case 6:
        system("clear");
        return;
        break;

         
        default:
        printf("Enter available options :\n");

        } // switch end



     } // while#3 end
  
   }// End of IF#1   
  
   

   else{
        chance++;
        system("clear");
        printf("Hey!!! That'r wrong password\n\n");
        printf("Please enter your password again\n");

       }
  

    }//end of while#2 password
   
   if(chance==3){
   
   system("clear");
   printf("Sorry!! cool guy MAX limit exceeded\n");

   }


   }//end of else#0

  }// while#1 end

 



	//return 0;
}// log function end#1










