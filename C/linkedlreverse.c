 struct node
{
    int x;
    struct node *next;
};
struct node *head;
void reverse()
{   struct node *temp;
    temp=head;
    struct node *temp2;


    while(temp!=0)
    {
        temp2=temp;
        temp=temp->next;
        temp->next=temp2;
    }

}

void print()
{struct node *temp;
    temp=head;
    while(temp!=0)
    {
        printf("%d",temp->x);
        temp=temp->next;
    }

}
int main()
{
    struct node *one,*two,*three,*four;
    one=(struct node*)malloc(sizeof(struct node));
    two=(struct node*)malloc(sizeof(struct node));
    three=(struct node*)malloc(sizeof(struct node));
    four=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&(one->x));
    scanf("%d",&(two->x));
    scanf("%d",&(three->x));
    scanf("%d",&(four->x));
    one->next=two;
    two->next=three;
    three->next=four;
    four->next=0;
    head=one;
    reverse();
    //one->next=0;
    head=four;
    print();

}
