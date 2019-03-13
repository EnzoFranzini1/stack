#include <stdio.h>
#include <stdlib.h>

typedef struct data{
  int num;
  struct data *next, *back;
}data;

struct data *chain, *top, *base;

int main(){
  base = NULL;
  int op;

  ini:

  printf("\n[1] - Insert");
  printf("\n[2] - Show stack from the top");
  printf("\n[3] - Remove");
  printf("\n[0] - Close");
  printf("\nChoose an option:");
  scanf("%i", &op);

  switch (op){
    case 1:insert(insert);
    break;
    case 2:show(show);
    break;
    case 3:
    break;
    case 0: return 0;
    break;
  }

  goto ini;

  return 0;
}

EnterData(){
  printf("\nValue:");
  scanf("%i",&chain->num);
}

insert(data**List){
  if(base == NULL){
    chain = (data*)malloc(sizeof(data));
    chain -> next = NULL;
    chain -> back = NULL;
    base = chain;
    top = chain;
    EnterData();
  }else{
    chain = (data*)malloc(sizeof(data));
    chain -> back = top;
    chain -> next = NULL;
    top -> next = chain;
    top = chain;
    EnterData();
  }
}


show(data**List){

    if(base == NULL){
        printf("\n\n\nThe stack is empty\n\n\n");
    }else{
        chain = top;
        while(chain -> back != NULL){
            printf("\n%i",chain -> num);
            chain = chain -> back;
        }printf("\n%i\n\n",chain -> num);
    }
    chain = top;
}
