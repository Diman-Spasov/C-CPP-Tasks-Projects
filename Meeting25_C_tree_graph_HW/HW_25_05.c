// Дефинирайте функция, която връща сумата от всички елементи на дървото

int sum(struct node *node)
{
    if (node == NULL)
        return 0;
    return node->data + sum(node->left) + sum(node->right);
}