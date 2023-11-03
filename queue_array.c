#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 5

void enque();
void deque();
void display();
int queue_array[MAXSIZE];
int rear = - 1;
int front = - 1;


//to insert elements in a queue


void enque()
{
int add_item;
if ( rear == MAXSIZE- 1)
printf("Queue overflow\n");
else
{
if (front == -1)
front = 0;
printf("Insert element in queue: \n");
scanf("%d", &add_item);
rear = rear + 1;
queue_array[rear] = add_item;
}
}

//to delete elements in a queue


void deque(){
    if(front == -1||front > rear){
        printf("queue underflow!");
        return;
    }else{
        printf("element deleted is %d\n",queue_array[front]);
        front=front+1;
    }
    }


//to display elements in a queue


void display(){
int i;
if ( front == -1){
printf("Queue is empty\n");
}
else{
printf("Queue is:\n");
for(i = front; i <= rear; i++){
printf("%d\n", queue_array[i]);
}
printf("\n");
}
}

//main 


int main(){
int choice;
while(1){
printf("1.Insert an element\n");
printf("2.Display\n");
printf("3.Delete an element\n");
printf("4.Exit\n");
printf("Enter your choice:\n");
scanf("%d", &choice);

switch(choice){
case 1:
enque();
break;
case 2:
display();
break;
case 3:
deque();
break;
case 4:
exit(1);
default:
printf("Wrong choice\n");
}
}
return 0;
}



