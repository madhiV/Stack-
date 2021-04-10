#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node{
    char data;
    struct node *next;
}*p,*head=NULL;
void push(char e){
    struct node *n=(struct node *)malloc(sizeof(struct node));
    n->data=e;
    n->next=NULL;
    if (head==NULL){
        head=n;
    }
    else{
        n->next=head;
        head=n;
    }
}
char last(){
    p=head;
    return p->data;
}
char pop(){
    if(head->next==NULL){
        head=NULL;
    }
    else{
        p=head;
        head=head->next;
        return p->data;
    }
}
void main()
{
    char s[500];
    printf("Enter the code : ");
    scanf("%s",&s);
    for(int i=0;i<strlen(s);i++){
        if(i==0){
            push(s[i]);
        }
        else if((s[i]==')' && last()=='(') || (s[i]=='}' && last()=='{') || (s[i]==']' && last()=='[')){
            pop();
        }
        else{
            push(s[i]);
        }
    }
    (head==NULL)?printf("Code is balanced"):printf("Code is not balanced");
}
