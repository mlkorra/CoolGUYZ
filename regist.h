
//#include"Struct.h"

/*
typedef struct{
  
  char name[50];
  char emailid[50];
  char password[50];
  }User[100];
 
*/






void Reg(){


  User User1;

  
  FILE *user_reg,*cool_id,*users; // USER DETaiLS
  
 //user_det = fopen("userdet.txt","a+");
  
  

  int coolID;  // UNIQUE ID FOR USERS
  char username[100];
  system("clear");
  //User User1;
  int c,d;
  printf("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
  printf("!!!!!!!!!!!!!!!! ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^!!!!!!!!!!!!\n");
  printf("!!!!!!!!!!!!!!!![ Welcome to the Registration Area ]!!!!!!!!!!!!\n");
  printf("!!!!!!!!!!!!!!!!___________________________________!!!!!!!!!!!!!\n");
  printf("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
  printf("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\n\n");  
  printf("Enter Your Profile Details : \n\n");
  printf("\n Enter your Name : ");
  //scanf("%c",User.name);
  //fscanf(userdet,"%s",User)
  //scanf("%s",User1.name);
  getchar();
  fgets (User1.name, 100, stdin);

  printf("\n Enter your sex: ");
  scanf("%s",User1.sex);// ADd sex
  
  printf("\n Enter your age: ");
  scanf("%d",&User1.age);   //Add age

  printf("\n Enter your emailID: ");
  scanf("%s",User1.emailid);
  
  

  printf("\n Your Contact Number Please:");
  scanf("%d",&User1.number); // CONTACT NUMBER
  
  printf("\n Enter your password : ");
  scanf("%s",User1.password);             // MASKING IS TO BE DONE
  //printf("\n");
                                          // Can  ADD DEtails to the password !!!!  
  //printf("\nPlease Enter your password again: ");
  //scanf("%c")
   
   for ( c = 1 ; c <= 32767 ; c++ )
       for ( d = 1 ; d <= 32767 ; d++ )
       {}
  printf("\n Registration Succesful \n\n");


   for ( c = 1 ; c <= 32767 ; c++ )
       for ( d = 1 ; d <= 32767 ; d++ )
       {}

  printf("\n Creating your Account");
  int dot=20;
  while(dot--){ //#begin while.
  
  printf(".\t");
  delay(20000);
  }// end while#.
   for ( c = 1 ; c <= 32767 ; c++ )
       for ( d = 1 ; d <= 32767 ; d++ )
       {}
  printf("\n Please wait");         // ADD time for real effects.

    
  cool_id = fopen("cool_id.txt","r");
  fscanf(cool_id,"%d",&coolID);
  fclose(cool_id);
  

  printf("\n Your Unique COOL ID is %d\n\n",coolID);
  printf("\n USE YOUR COOL ID To LoGiN\n");

  users = fopen("all_users.txt","a");
  fprintf(users,"\n%s %d",User1.name,coolID);
  fclose(users);

  
  
  User1.coolid = coolID;

  sprintf(username,"%s_%d.txt",User1.name,coolID);

  user_reg = fopen(username,"w+");

  if(!user_reg){

    printf("\n Registration Error\n\n");

  }

 

  coolID++;                         // AUTOMATICALLY ALLOCATES THE ID TO THE NEXT USER
  cool_id = fopen("cool_id.txt","w");
  fprintf(cool_id,"%d",coolID);
  fclose(cool_id);

  fwrite(&User1,sizeof(User1),1,user_reg);

  fclose(user_reg);
   
  printf("\nThank u for using our service\n"); 
   
  printf("press Enter with SMILE to continue\n");

  getchar();
  


}


