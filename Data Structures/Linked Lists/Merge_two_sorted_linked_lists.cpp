Node* MergeLists(Node *headA, Node* headB)
{
    Node *result;
    result = NULL; 
   if(headA == NULL)
       return headB;
   else if(headB == NULL)
       return headA;
    
   if(headA->data <= headB->data)
   {
       result = headA;
       result->next = MergeLists(headA->next, headB);
   }
   
   else
   {
       result = headB;
       result->next = MergeLists(headA, headB->next);
   }
    
   return result;
}
