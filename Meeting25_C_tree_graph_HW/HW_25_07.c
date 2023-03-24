// Дефинирайте функция, която проверява дали дървото е binary search tree (дали
// върховете са “сортирани отляво-надясно” по стойност)

bool isBST(struct node *node, int min, int max)
{
    if (node == NULL)
        return true;
    if (node->data < min || node->data > max)
        return false;
    return isBST(node->left, min, node->data) && isBST(node->right, node->data, max);
}