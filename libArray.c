#include<stdio.h>
#include<malloc.h>

void init_lib_array()
{
    printf("\n LOG : ARRAY LIBRARY LOADING COMPLETE......\n");

}


int* create_array(){

    int size;
    printf("\n PLEASE SPECIFY THE SIZE OF ARRAY YOU WANNA  CREATE");
    scanf("%d",&size);
    int real_size=size+1;
    int*ref=calloc(real_size,(real_size) *sizeof(int));
    printf("\n ENTER ELEMENTS:\n");
    ref[0]=size;
    for(int index=1;index<real_size;index++){
        scanf("%d",&ref[index]);
    }

    return ref;
}

void print_array(int*ref){

    printf("\n [");
    for(int i=1;i<ref[0]+1;i++){

    if(i!=(ref[0]))
    {

    printf(" %d, ",ref[i]);

    }
    else{
        printf(" %d ",ref[i]);
    }

    }
    printf("]\n");
}

int size_of_array(int*data){


    return data[0];
}

void free_array_space(int *data){

        free(data);

}

void update_array(int*data,int index,int new_data)
{

    data[index]=new_data;

}

int* deleteAt(int*array,int pos)
{
    int size=array[0];
    int new_array_size=size-1;
    int*new_array=calloc(new_array_size,new_array_size*sizeof(int));
    new_array[0]=new_array_size;
    for(int k=1;k<=pos-1;k++)
    {
        new_array[k]=array[k];

    }
    for(int p=pos;p<=new_array_size;p++)
    {

        new_array[p]=array[p+1];

    }
    free_array_space(array);
   // print_array(array);
    return new_array;
}

int* insertAt(int*orignal_array,int position,int new_item){

        int new_size=orignal_array[0]+1;
        int *new_array = calloc(new_size,new_size*sizeof(int));
        new_array[0]=new_size;
        for(int k=1;k<position;k++){
            new_array[k]=orignal_array[k];
        }
        new_array[position]=new_item;

        for(int k=position;k<=orignal_array[0];k++){

            new_array[k+1]=orignal_array[k];
        }

        free_array_space(orignal_array);

        return new_array;


}

