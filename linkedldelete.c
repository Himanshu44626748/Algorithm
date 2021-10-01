struct node
{
    int data;
    struct node *next;
};
struct node* head;
void Delete(int x)
{
    int i=0;
    struct node * temp=(struct node*)malloc(sizeof(struct node));
    temp=head;
    for(i=0;i<x-2;i++)
    {temp=temp->next;

    }
    temp->next=temp->next->next;


}
void Print()
{
    struct node* temp=head;
    while (temp !=0)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
}
int main()
{
    struct node* one ;

    struct node *two;
    struct node *three;
    one=(struct node*)malloc(sizeof(struct node));
    two=(struct node*)malloc(sizeof(struct node));
    three=(struct node*)malloc(sizeof(struct node));
    head=one;
    one->data=1;
    two->data=2;
    three->data=3;
    one->next=two;
    two->next=three;
    three->next=0;
    int x;
    scanf("%d",&x);
    //printf("%d %d %d %d",one->data,one->next->data,one->next->next->data,one);
    Delete(x);
    Print();
}
