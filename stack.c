#include <stdio.h>

typedef struct data{
int num;
struct data *next, *back;
}data;

struct data *chain, *top, *base;

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
case 2:
    break;
case 3:
    break;
case 0: return 0;
    break;
}

goto ini;

return 0;
}
