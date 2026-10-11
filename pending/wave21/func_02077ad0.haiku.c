#include "ffc/types.h"

extern void func_02077a88(void *list, void *node);

typedef struct {
    void *head;
    uint32_t pad4;
    uint16_t count;
    uint16_t link_off;
} ListHead;

void func_02077ad0(ListHead *list, uint8_t *node)
{
    uint16_t off;
    void *h;

    if (list->head == 0) {
        func_02077a88(list, node);
        return;
    }
    off = list->link_off;
    *(void **)(node + off) = 0;
    *(void **)(node + off + 4) = list->head;
    h = list->head;
    *(uint8_t **)((uint8_t *)h + list->link_off) = node;
    list->head = node;
    list->count = list->count + 1;
}
