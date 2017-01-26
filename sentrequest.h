


 void sent_request(int to,int from){
 // to->request sent to
 // from->request sent from	
 FILE *req_file; // REQUEST  FILE
 char realname[50];
 int accept=0;
 sprintf(realname,"%d_%d_req.txt",to,from);//FILE NAME 
 req_file = fopen(realname,"w+");
 
 
 //fprintf(req_file,"%d",accept);
 //fclose(req_file);
 
 fprintf(req_file,"%d",accept);
 fclose(req_file); 
  
 }