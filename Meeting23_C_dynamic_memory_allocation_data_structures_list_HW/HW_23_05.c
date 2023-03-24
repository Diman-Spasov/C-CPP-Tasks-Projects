// Дефинирайте функции за изтриване на елементи на начална, крайна и конкретна
// позиция в списъка:
// void my_list_pop_back(my_list ls);
// void my_list_pop_front(my_list ls);
// void my_list_erase(my_list ls, size_t pos);

void my_list_pop_back(my_list ls)
{
    if (ls->head == NULL)
        return;

    if (ls->head == ls->tail)
    {
        free(ls->head->data);
        free(ls->head);
        ls->head = ls->tail = NULL;
    }
    else
    {
        my_node *cur = ls->head;
        while (cur->next != ls->tail)
            cur = cur->next;

        free(ls->tail->data);
        free(ls->tail);
        ls->tail = cur;
        cur->next = NULL;
    }
    ls->size--;
}

void my_list_pop_front(my_list ls)
{
    if (ls->head == NULL)
        return;

    my_node *temp = ls->head;
    ls->head = ls->head->next;
    free(temp->data);
    free(temp);
    ls->size--;

    if (ls->head == NULL)
        ls->tail = NULL;
}

void my_list_erase(my_list ls, size_t pos)
{
    if (ls->head == NULL)
        return;

    if (pos == 0)
    {
        my_list_pop_front(ls);
        return;
    }

    if (pos == ls->size - 1)
    {
        my_list_pop_back(ls);
        return;
    }

    my_node *cur = ls->head;
    size_t i;
    for (i = 0; i < pos - 1; i++)
        cur = cur->next;

    my_node *temp = cur->next;
    cur->next = temp->next;
    free(temp->data);
    free(temp);
    ls->size--;
}
