#include<stdlib.h>
#include "mylib.h"
int digits(int);

int main(){

int n=108;
int k=digits(n);

printf("number of digits is %d",k);


return 0;

}



int digits(int num){

int s=0;
int q=num/10;

while(q>=0){

    s++;
    q=q/10;

}

return s;


}
