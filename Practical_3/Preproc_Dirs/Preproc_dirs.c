#include<stdio.h>
//#define QUESTION 1

#ifdef QUESTION
    #define ANSWER 42
#endif

#ifndef QUESTION
    #define ANSWER 0
#endif
int main(){
  printf("Test: %d\n", ANSWER);
}