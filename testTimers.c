#include<stdlib.h>
#include "mylib.h"
#include<time.h>

int main(){

    float a=5.6;
    int b=3;

    time_t s=logicStartTime();

  double  c = (double) a/b;

    time_t e =logicEndTime();


  float timetaken = logicLabourTime(s,e);

    printf("time taken %.19f/n result: %.2f",timetaken,c);





    return 0;

}
