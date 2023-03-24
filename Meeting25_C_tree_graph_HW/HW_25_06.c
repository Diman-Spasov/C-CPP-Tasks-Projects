// Дефинирайте функция, която връща най-малката и най-голямата стойност на
// елемент от дървото. Какви начини има да върнем и двете от една функция?

void minMax(struct node *node, int *min, int *max)
{
    if (node == NULL)
        return;
    if (node->data < *min)
        *min = node->data;
    if (node->data > *max)
        *max = node->data;
    minMax(node->left, min, max);
    minMax(node->right, min, max);
}


