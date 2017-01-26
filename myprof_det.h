
   
   void myprofdet(char naam[] ,int index,int flag){
   
   system("clear");

   User demouser;
   FILE *ptr;
   char new_name[50];
   char a;
   sprintf(new_name,"%d.txt",index);  //changing the file names
   ptr = fopen(new_name,"r");
   

   if(flag==0){// if #flag begin
   if(!ptr){


    printf("File Open Error\n");
    return;
   }


    fread(&demouser,sizeof(demouser),1,ptr);
    printf("\n########################################################################################\n");

    printf("\n\nProfile Details\n\n");
    
    

    printf("Username : %s\n COOLID : %d\n Age : %d\n Sex : %s\n emailid : %s\n Contactnumber : %d\n",demouser.name,demouser.coolid,demouser.age,demouser.sex,demouser.emailid,demouser.number);
     


    printf("\n########################################################################################\n");
    
    /* a = fgetc(ptr);
    while(!feof(ptr))
   
    {

    printf("%c",a);
    a = fgetc(ptr);
 
    }

    */
      // CAN  ADD TIME FUNCTION HERE

    } //End #if flag


 
   if(flag==1){


    
      
  

   }

  

 }