// Дефинирайте функция, за търсене на стойност на връх в дървото.

struct node *search(struct node *node, int data)
{
    if (node == NULL || node->data == data)
        return node;
    if (node->data < data)
    {
        return search(node->right, data);
    }
    else
    {
        return search(node->left, data);
    }
}
int main()
{
    struct node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    int data = 4;
    struct node *result = search(root, data);
    if (result == NULL)
    {
        printf("Value not found in tree.\n");
    }
    else
    {
        printf("Value found in tree.\n");
    }
    return 0;
}