#include "lists.h"

/**
 * 
 * 
 * 
 *
 */

size_t listint_len(const listint_t *h)
{
        size_t count = 1;

        if (h == NULL)
        {
                return (0);
        }
        count += listint_len(h->next);
        return (count);
}
