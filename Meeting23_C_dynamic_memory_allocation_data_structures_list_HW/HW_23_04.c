// Дефинирайте функции за добавяне на елементи на начална, крайна и конкретна позиция
// в списъка:
// void my_list_push_back(char *data, my_list ls);
// void my_list_push_front(char *data, my_list ls);
// void my_list_insert(char *data, my_list ls, size_t pos);

void my_list_push_back(char *data, my_list *ls)
{
    my_list_node *node = (my_list_node *)malloc(sizeof(my_list_node));
    node->data = strdup(data);
    node->next = NULL;
    if (ls->tail)
    {
        ls->tail->next = node;
    }
    ls->tail = node;
    if (!ls->head)
    {
        ls->head = node;
    }
    ++ls->size;
}

void my_list_push_front(char *data, my_list *ls)
{
    my_list_node *node = (my_list_node *)malloc(sizeof(my_list_node));
    node->data = strdup(data);
    node->next = ls->head;
    ls->head = node;
    if (!ls->tail)
    {
        ls->tail = node;
    }
    ++ls->size;
}

void my_list_insert(char *data, my_list *ls, size_t pos)
{
    if (pos >= ls->size)
    {
        my_list_push_back(data, ls);
        return;
    }
    my_list_node *node = (my_list_node *)malloc(sizeof(my_list_node));
    node->data = strdup(data);
    if (pos == 0)
    {
        node->next = ls->head;
        ls->head = node;
        ++ls->size;
        return;
    }
    my_list_node *curr = ls->head;
    size_t i;
    for (i = 0; i < pos - 1; ++i)
    {
        curr = curr->next;
    }
    node->next = curr->next;
    curr->next = node;
    ++ls->size;
}