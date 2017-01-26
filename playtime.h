#include<time.h>


void delay(unsigned int sec){

  clock_t goal = sec + clock();
  while(goal>clock());

}


