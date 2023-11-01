#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *add;

void putdata(int n){
    int value,i;
    struct node *new1, *p;
    for(i=0;i<n;i++){
        printf("Enter the value:");
        scanf("%d",&value);
        new1=(struct node *)malloc(sizeof(struct node));
        new1->data=value;
        new1->next=NULL;   
        if(i==0){
            add=new1;
        }
        else{
            p->next=new1;
        }
        p=new1;
    }
}

void getdata(int n){
    int ans,i=0;
    struct node *new1,*p;
    new1=add;
    while(i!=n){
        ans=new1->data;
        printf("The value is %d.\n",ans);
        new1=new1->next;
        p=new1;
        i++;
    }
}

int main(){
    int n;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    putdata(n);
    getdata(n);
    return 0;
}
