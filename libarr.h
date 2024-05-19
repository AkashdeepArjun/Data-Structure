#ifndef LIBARR_H_INCLUDED
#define LIBARR_H_INCLUDED

void init_lib_array();

int* create_array();

void print_array(int *);

int size_of_array(int *);

void free_array_space(int *);

void update_array(int *,int ,int);


    //DELETE

int* deleteAt(int *,int);

#endif // LIBARR_H_INCLUDED
