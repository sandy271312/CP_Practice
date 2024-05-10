int count_leaf(Tree *root)
{
    if(!root)return 0;
    if(!(root->left) && !(root->right))
    return 1;
    return count_leaf(root->left)+count_leaf(root->right);
}
/// This function will count the number the leaf inr a binary tree