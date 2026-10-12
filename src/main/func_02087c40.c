#include "ffc/types.h"

typedef struct Blk {
    struct Blk *prev;
    struct Blk *next;
    uint32_t size;
} Blk;

Blk *func_02087c40(Blk *head, Blk *blk) {
    Blk *prev;
    Blk *n;
    uint32_t sz;
    n = head;
    prev = 0;
    if (head != 0) {
        do {
            if ((uint32_t)blk <= (uint32_t)n) {
                break;
            }
            prev = n;
            n = n->next;
        } while (n != 0);
    }
    blk->next = n;
    blk->prev = prev;
    if (n != 0) {
        n->prev = blk;
        sz = blk->size;
        if ((uint8_t *)blk + sz == (uint8_t *)n) {
            blk->size = sz + n->size;
            n = n->next;
            blk->next = n;
            if (n != 0) {
                n->prev = blk;
            }
        }
    }
    if (prev != 0) {
        prev->next = blk;
        if ((uint8_t *)prev + prev->size == (uint8_t *)blk) {
            prev->size = prev->size + blk->size;
            prev->next = n;
            if (n != 0) {
                n->prev = prev;
            }
        }
    } else {
        head = blk;
    }
    return head;
}
