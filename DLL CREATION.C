dll creation

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
}*h,*nw;

struct node* createnode(int dat)
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->prev=NULL;
    temp->data=dat;
    temp->next=NULL;
    return(temp);
};

struct node* insertfront(struct node *hh,struct node *nnw)
{
    struct node *tt;
    if(hh==NULL)
    {
        hh=nnw;
        return(hh);
    }
    else
    {
        if(hh->next==NULL)
        {
            hh->next=nnw;
            nnw->prev=hh;
            return (hh);
        }
        else
        {
            tt==hh;
            while(tt->next!=NULL)
            {
                tt=tt->next;
            }
            tt->next=nnw;
            nnw->prev=tt;
            return(hh);
        }
    }
};

void display(struct node *hh)
{
    struct node *tt;
    if(hh==NULL)
    {
        printf("List is empty");
    }
    else
    {
        if(hh->next==NULL)
        {
            printf("%d",tt->data);
        }
        else
        tt==hh;
        {
            while(tt->next!=NULL)
            {
                printf("%d",tt->data);
                tt=tt->next;
            }
            //printf(" %d ",tt->data);
        }

    }
    
}

int main()
{
    h==NULL;
    nw==NULL;
    int ch,item;
    while(1)
    {
        scanf("%d",&ch);
        if(ch==1)
        {
            scanf("%d",&item);
            h=insertfront(h,item);
        }
        else
        {
            if(ch==2)
            {
                display(h);
            }
            else
            { 
                exit(0);
            }
        }
        
    }
    return 0;
}