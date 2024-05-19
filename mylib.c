#include<stdlib.h>
#include<time.h>


void logm(char*message){

    char*msg="";
    struct tm*ptr;
    time_t t;
    t=time(NULL);
    ptr=localtime(&t);



printf("\n\t\t\t%s ",asctime(ptr));

printf("\t\t\tMESSAGE : %s \n",message);

//printf("\n\n - - - - - - - - - - - - \n\n");

}



int binary_search(int  arr[] ,int beg ,int end,int item)
{
    if(beg>=end)
    {
        if(item==arr[beg]){

            return beg;
        }else{

            return -1;
        }
    }else{


        int mid=(beg+end)/2;

        if(arr[mid]==item){

        return mid;
    }
else if(item> arr[mid])
{

    return binary_search(arr,mid+1,end,item);

}else{


    return binary_search(arr,beg,mid-1,item);


}


    }
}


int reverse(int num){

int num_digits=digits(num)-1;
//printf("digits are %d",num_digits);
int nom=num;
int rev=0;

while(num_digits>=0){

    int rem =nom%10;
    rev=rev+rem*pow(10,num_digits);
    nom=nom/10;
    num_digits--;
}
return rev;

}


int digits(int num){
int s=0;
int q=num/10;
while(q>=0){
    if(q==0){
        s++;
        break;
    }else{
    s++;
    }

    q=q/10;

}

return s;
}


time_t logicStartTime(){

    time_t t = time(NULL);

    return t;

}

time_t logicEndTime(){

    time_t t = time(NULL);

    return t;

}





double logicLabourTime(time_t old,time_t newt){

    double time_taken=difftime(old,newt);

    return time_taken;


}


int sizeString(char*s){


    char*ptr=s;
    int i=0;
    int len=0;
    while(s[i]!='\0')
    {
        len++;
        i++;

    }

    return len;

}








