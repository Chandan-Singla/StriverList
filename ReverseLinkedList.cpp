LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    if(!head||!head->next){
        return head;
    }
    LinkedListNode<int> *re=NULL;
    LinkedListNode <int> *temp=head;
    LinkedListNode <int>*se=head->next;
    while(temp){
        temp->next=re;
        re=temp;
        temp=se;
        if(se)
        se=se->next;
         
    }
    return re;
    // Write your code here
}
