#include<stdio.h>
#include<stdlib.h>

struct node
{
struct node *l;
int data;
struct node *r;
}*h,*t,*nw,*a[50];

void display(struct node *t)
{
    if(t==NULL)
    {
        return;
    }
    else
    {
	    printf("%d ",t->data);
	    display(t->l);
	    display(t->r);
    }
}

int main()
{
	int i,j,k,n,flag,x;
	nw=(struct node *)malloc(sizeof(struct node));
	t=(struct node *)malloc(sizeof(struct node));
	h=(struct node *)malloc(sizeof(struct node));
	scanf("%d",&x);
//	scanf("%d",&n);
	nw->data=x;
	nw->l=NULL;
	nw->r==NULL;
	h=nw;
	a[i]=nw;
	i++;
	i=0;
	j=0;
	flag=0;
	scanf("%d",&n);
	for(k=0;k<n-1;k++)
	{
		nw=(struct node *)malloc(sizeof(struct node));
		scanf("%d",&nw->data);
		nw->l=NULL;
		nw->r==NULL;
		t=a[j];
		if(flag==0)
		{
			t->l=nw;
			a[i]=nw;
			i++;
			flag=1;
		}
		else
		{
			t->r=nw;
			a[i]=nw;
			i++;
			j++;
			flag=0;
		}
	}
	display(h);
	return 0;
}


OUTPUT

2
3
1
3
2 1 3 		
		
		

