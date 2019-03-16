//Code tested on Windows an Linux. Both working.

#include <stdio.h>
#include <stdlib.h>

//The data structure of each element of the stack
typedef struct data{
  //The value that will be inserted in the stack
  int num;
  //Pointers indicating the previous and the next element
  struct data *next, *back;
}data;

//*Pointer used to walk throught the stack, *Determine the top element of the stack and the *base element.
struct data *chain, *top, *base;

int main(){
  //Set base equal to null when the application starts
  base = NULL;

  //declare the variable that will recieve the input option
  int op;

  //Flag to keep the options menu in a looping
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
    case 3:delete(delete);
    break;
    case 0: return 0;
    break;
  }

  //Return to the flag...
  goto ini;

  return 0;
}

//Method called by insert(data**List)
EnterData(){
  printf("\nValue:");
  //Set a value to a specific stack element
  scanf("%i",&chain->num);
}

insert(data**List){

  //If the stack is empty
  if(base == NULL){
    //Create a element in the stack
    chain = (data*)malloc(sizeof(data));
    //Set his pointers to null
    chain -> next = NULL;
    chain -> back = NULL;

    //Set the base and the top in a position
    base = chain;
    top = chain;

    //Set a value to a specific stack element
    EnterData();
  }else{
    //If the stack isn't empty

    //Creat a new element in the stack
    chain = (data*)malloc(sizeof(data));

    //Link the back pointer of the new element to the previous element
    chain -> back = top;

    //Set the next pointer of the element as null
    chain -> next = NULL;

    //Link the previous element next pointer to the new element
    top -> next = chain;

    //Define the new position of the top pointer
    top = chain;

    //Set a value to a specific stack element
    EnterData();
  }
}

show(data**List){

  //If the stack is empty
  if(base == NULL){
    printf("\n\n\nThe stack is empty\n\n\n");
  }else{

    //Set the chain pointer in the top of the stack
    chain = top;

    //Loopin to print in the screen the elements of the stack
    while(chain -> back != NULL){
      printf("\n%i",chain -> num);
      //Jump the chain pointer to the previous element
      chain = chain -> back;
    }
    //Print the base element when the while looping ends
    printf("\n%i\n\n",chain -> num);
  }
  //Return the chain pointer to the top position
  chain = top;
}

delete(data**List){

  //If the stack is empty
  if(base == NULL){
    printf("\n\n\nThe stack is empty\n\n\n");
  }else{

    //If there's only one element in the stack
    if(base -> next == NULL){

      //Delete the stack element
      free(top);

      //Set the base pointer to null
      base = NULL;
    }else{

      //Set the chain to the top of the stack
      chain = top;

      //Jump to the previous element
      chain = chain -> back;

      //Wipe the element where the top pointer is located
      free(top);

      //Set the top pointer to the chain pointer location
      top = chain;

      //Set the element next pointer to null
      top -> next = NULL;
    }

  }

}
