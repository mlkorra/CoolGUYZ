  

  void edit_prof_det(){
  
  FILE *user_reg;
  system("clear");
  User User1;
  char filename[20];
  printf("Edit  Your Profile Details : \n\n");
  printf("\n Name : ");
  //scanf("%c",User.name);
  //fscanf(userdet,"%s",User)
  scanf("%s",User1.name);

  printf("\n sex: ");
  scanf("%s",User1.sex);// ADd sex
  
  printf("\n age: ");
  scanf("%d",&User1.age);   //Add age

  printf("\n emailID: ");
  scanf("%s",User1.emailid);
  
  

  printf("\n Contact Number :");
  scanf("%d",&User1.number); // CONTACT NUMBER
  
  printf("\n Change your password : ");
  scanf("%s",User1.password);         
  
  

  sprintf(filename,"%d.txt",User1.coolid);

  user_reg = fopen(filename,"w+");
  
  fwrite(&User1,sizeof(User1),1,user_reg);

  fclose(user_reg);


  }