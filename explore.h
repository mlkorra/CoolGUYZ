
int xplore(int index){
	  

   system("clear");
   char var;
   printf("*****************************************************************************************");
  
   printf("The List of users registered with their COOL ID's \n\n"); 
   FILE *list;
   int i; //index for sending request
   char a;
   list = fopen("all_users.txt","r");
   
   if(list == NULL){

      printf("More Users are yet to come\n\n");
      printf("Please come after a while\n\n");
      //return 0;;
   }
  
   do{
      a = fgetc(list);
      if(feof(list)){
     	break;
      }     
      printf("%c",a); 

   }while(1);

   fclose(list);
   
   printf("From the given list :::::::::");
   printf("Want to add them to ur Cool Connections (y/n) ?\n");
   scanf("%c",&var);
   

   if(c=='y'||c=='Y'){
   

   printf("Enter the ID to whom u want to send COOL Request to\n"); 
   scanf("%d",&i);

   sent_requestto(i,index); //index -> request sent from

   return 0;
   }


   else{
  
      printf("Thank You very much for using our service\n");
      printf("Come back soon\n");
      printf("Press Enter to continue\n");

      getchar();
      return 0;
   }

}

