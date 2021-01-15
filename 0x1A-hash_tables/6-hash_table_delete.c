#include "hash_tables.h"
/**
 * hash_table_delete - Entry point
 * @ht: the hash table you want to delete
 *
 *
 * Return: void
*/

void hash_table_delete(hash_table_t *ht)
{
    unsigned long int i;
    /*hash_node_t *auxnode, *tempnode;*/
    hash_node_t *list, *temp;
    
    if (ht == NULL)
        return;
    /* Free the memory for every item in the table, including the * strings themselves. */
    for (i = 0; i < ht->size; i++)
    {
        list = ht->array[i];
        while (list != NULL)
        {
            temp = list;
            list = list->next;
            free(temp->key);
            free(temp->value);
            free(temp);
        }
    }
    /* Free the table itself */
    free(ht->array);
    free(ht);

/*        for (i = 0; i < ht->size; i++)
        {   
            if (ht->array[i] != NULL)
            {    
                auxnode = ht->array[i];
                while (auxnode != NULL)
                {
                    tempnode = auxnode->next;
                    free(auxnode);
                    auxnode = tempnode;
                }
                tempnode = auxnode;
                free(tempnode);
            }
        }
*/
}
