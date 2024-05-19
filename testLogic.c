#include<stdlib.h>
#include "mylib.h"

int digits(int);

int main(){
int arr[6]={6,7,8,9,89};

log("CHECKING IF 89 ELEMENT EXISTS");

int pos = binary_search(arr,5,4,89);

printf("position of %d is %d",89,pos);


return 0;




}


