   
   void Accept(int from,int to){
   
   delay(3000000);
   printf("Added %d to the Cool Connections\n",from);
   
   FILE *pf;
   char dummy[20];

   sprintf(dummy,"%d_connections.txt",to);
   pf = fopen(dummy,"a"); 
   
   



   }



   
  void req_choice(int from,int to){ //function to accept or reject
  
  system("clear");
  int i;
  printf("1)Accept\n");
  printf("2)Reject\n");
  
  printf("Enter your req_choice :\n");
  scanf("%d",&i);
  switch(i) 
   
    {
 
     case 1:
     Accept(from,to);
     break;
   
     case 2:
     Reject();  
     break;

     default:
     printf("\n");
    }


  } 



  void rec_req(int FROM,int to,int ID){  // Receive any cool request
  
  FILE *dummy;
  char check[20]; // check req from a required file
  int choco=0;  //used for accept / reject req
  //for(int i=0;i<ID;i++){

  sprintf(check,"%dfrom%d.txt",to,FROM);
  dummy = fopen(check,"r");

  if(!dummy)
  {
  printf("");  // no request received
  }
 
  
  else{
  
   choco=1;
   printf("Hey COOL REQUEST from %d\n",i); 

  }
 fclose(dummy);
 if(choco==1){
 req_choice(i,to);     //function to accept or reject 
 }

 //}//for loop end

}//end of function 

void notify(int index){  //index->coolid of the account holder
 	
                         // index->to
  
 //fscanf(cool_id,"%d",&coolID);
 //fclose(cool_id);
 FILE *id; 

 int from,ID;
  id = fopen("cool_id.txt","r");
  fscanf(id,"%d",&ID);
  fclose(id);
 
 for(int i=0;i<ID;i++){ //Checks if it receives any coolREQ
 rec_req(i,index,ID);
 } 

}


