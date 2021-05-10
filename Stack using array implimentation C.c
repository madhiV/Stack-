#include<stdio.h>
int stack[5];
int top=-1;
int stack_overflow()
{
    if(top>=5){
        return 1;
    }
    else{
        return 0;
    }
}
int stack_Underflow()
{
    if(top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
void push()
{
   int e;
   printf("Enter the element : ");
   scanf("%d",&e);
   if(stack_overflow()==1){
       printf("Stack overflow...");
   }
   else{
       stack[++top]=e;
    //   top++;
       printf("Push sucess");
   }
}
int pop(){
    int e;
    if(stack_Underflow()==1){
        printf("Stack underflow...");
        return -1;
    }
    else{
        printf("Poped %d ",stack[top]);
        e=stack[top];
        top--;
        return e;
    }
}
int display()
{
    int y=top;
    if(top!=-1){
    printf("The elements are : ");
    while(y!=-1){
        printf("%d\t",stack[y]);
        y--;
    }
    }
    else{
        printf("Stack is empty");
    }
}
void peek()
{
    if(top==-1){
        printf("Stack is empty");
    }
    else{
    printf("The peek element is :");
    printf("%d",stack[top]);
    }
}
void peep()
{
    int y;
    int p;
    printf("Enter the position : ");
    scanf("%d",&p);
    y=top;
    while(y==p-1){
        y--;
    }
    printf("The element found at position %d is %d ",p,stack[y]);
}
void main()
{
    int e=1,t;
    while(e==1){
    printf("-----MENU-----\n");
    printf("1.Push\t2.Pop\t3.Peep\t4.Peek\t5.Display\t6.Exit\nEnter a choice...");
    scanf("%d",&t);
    switch(t){
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peep();
            break;
        case 4:
            peek();
            break;
        case 5:
            display();
            break;
        case 6:
            e=0;
            break;
        default:
            printf("Invalid choice");
        }
        printf("\n");
    }
}
