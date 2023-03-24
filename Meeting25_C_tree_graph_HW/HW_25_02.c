// Дефинирайте функция, която обхожда и принтира всеки елемент от дървото в избрана от вас
// последователност.

void printPreOrder(struct node *node)
{
    if (node == NULL)
        return;
    printf("%d ", node->data);
    printPreOrder(node->left);
    printPreOrder(node->right);
}