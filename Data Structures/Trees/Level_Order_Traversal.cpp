void levelOrder(node * root) {
    queue <node*> S;
    node *current;
    S.push(root);
    while(!S.empty())
    {
        current = S.front();
        S.pop();
        printf("%d ",current->data);
        if(current->left != NULL)
            S.push(current->left);
        if(current->right != NULL)
            S.push(current->right);
    }
}
