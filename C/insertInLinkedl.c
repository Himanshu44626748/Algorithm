struct node
{
    int data;
    struct node *next;
};
struct node* head;
void Insert(int x)
{
    struct node * temp=(struct node*)malloc(sizeof(struct node));
    temp->data=x;
    temp->next=0;
    if(head!=0)
        temp->next=head;
    head=temp;


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
    Insert(x);
    Print();
}
