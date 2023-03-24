// Дефинирайте функции за изтриване на елемент от списъка по зададен предикат - условие, дефинирано от
// клиента, при което трием елемент:
// size_t my_list_erase_if(my_list ls, _Bool (*predicateFunc)(char*));
// Функцията, подадена от клиента като аргумент трябва да бъде извикана за всеки елемент от списъка.
// Трием тези елементи, за които връща 1.

size_t my_list_erase_if(my_list ls, _Bool (*predicateFunc)(char*))
{
    size_t count = 0;

    // Keep track of current and previous nodes
    node_ptr curr = ls->head;
    node_ptr prev = NULL;

    while (curr)
    {
        // Check if the current node satisfies the condition
        if (predicateFunc(curr->data))
        {
            // Increment the count of removed elements
            count++;

            // Store the next node before freeing the current node
            node_ptr next = curr->next;

            // Update the head if we are removing the first node
            if (curr == ls->head)
            {
                ls->head = next;
            }
            else
            {
                // Update the previous node's next pointer
                prev->next = next;
            }

            // Update the tail if we are removing the last node
            if (curr == ls->tail)
            {
                ls->tail = prev;
            }

            // Free the current node
            free(curr->data);
            free(curr);

            // Move on to the next node
            curr = next;
        }
        else
        {
            // Save the previous node and move on to the next node
            prev = curr;
            curr = curr->next;
        }
    }

    // Update the size of the list
    ls->size -= count;

    return count;
}
