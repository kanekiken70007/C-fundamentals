
#include <stdio.h>


#define DEBUG
#define LOG(msg)  printf("[%s:%d]%s",__FILE__,__LINE__,msg)


int main(void){

#ifdef DEBUG

LOG("starting program...\n");
LOG("ending program\n");
#endif


}