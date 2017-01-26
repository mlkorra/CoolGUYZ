

void cur_affairs(){
	
	 
    FILE *ff;
    char data[30];
    int index;
    int linenumber=0;
    printf("Number of Articles to be on ur wall :\n");
    scanf("%d",&index); 

    delay(3000000);
    system("clear");

    if(index>5){

      printf("Sorry sir limit  exceeded\n");
      return;
    }



    else{//else begin
    while(index--){//begin
    ; //..RE iniatilize
    //srand(time(NULL));
    //linenumber = rand()%5;
    //printf("%d\n",linenumber); 
    int count = 0;
    ff = fopen("feednews.txt","r");
    if(ff){
    
    char line[1000];

    while(fgets(line,sizeof(line),ff)!=NULL)

     {
 
        if(count==linenumber)

        {
            delay(5000000);
            printf("%d %s",linenumber,line);
            linenumber++;
            //fclose(ff);
            break;
        
        //printf("cool");
        }
         

        else{
          
          count++;
          //printf("hii\n");

        }
        printf("\n");

     }

 
   


  }

   

   else{
 	  printf("Not found !!!\n");
   }
   fclose(ff);
 }   
 //printf("index number : %d\n",index);
 if(index==-1){
  
  printf("\n\n\n\n");
 }
 }//else end
	
}







