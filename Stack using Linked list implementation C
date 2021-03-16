#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*head=NULL,*n,*p,*old;
int stack_Underflow()
{
    if(head==NULL){
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
       n=(struct node *)malloc(sizeof(struct node));
       n->data=e;
       n->next=head;
       head=n;
       printf("Push success");
}
int pop(){
    int e;
    p=head;
    if(stack_Underflow()==1){
        printf("Stack underflow...");
        return -1;
    }
    else{
        e=p->data;
        head=head->next;
        printf("Pop of %d success",e);
    }
    return e;
}
void display()
{
    p=head;
    if(head!=NULL){
    printf("The elements are : ");
    while(p!=NULL){
        printf("%d\t",p->data);
        p=p->next;
        }
    }
    else{
        printf("Stack is empty");
    }
}
void peek()
{
    if(stack_Underflow()==1){
        printf("Stack is empty");
    }
    else{
    printf("The peek element is :");
    printf("%d",head->data);
    }
}
void peep()
{
    p=head;
    int pos,k;
    printf("Enter the position : ");
    scanf("%d",&pos);
    k=pos;
    pos--;
    while(pos!=0){
        p=p->next;
        pos--;
    }
    printf("The element found at position %d is %d ",k,p->data);
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
