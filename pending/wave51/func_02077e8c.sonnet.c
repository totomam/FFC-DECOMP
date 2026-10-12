#include "ffc/types.h"

extern void *func_02077d10(void *head, void *blk, uint32_t off, uint32_t size, uint32_t flag);

typedef struct Blk {
    uint32_t pad;
    uint32_t size;
    struct Blk *next;
} Blk;

typedef struct Head {
    uint32_t pad;
    Blk *first;
    uint8_t pad2[0x0a];
    uint16_t flags;
} Head;

void *func_02077e8c(uint8_t *self, uint32_t size, uint32_t align)
{
    Head *head;
    uint32_t mask;
    uint32_t r7;
    uint16_t fl;
    Blk *best;
    uint32_t bestoff;
    uint32_t bestsize;
    Blk *n;

    head = (Head *)self;
    head = (Head *)((uint8_t *)head + 0x24);
    r7 = 1;
    fl = (uint16_t)(head->flags & r7);
    if (fl) {
        r7 = 0;
    }
    best = 0;
    bestsize = (uint32_t)-1;
    bestoff = 0;
    n = head->first;
    if (n != 0) {
    mask = ~(align - 1);
    do {
        uint32_t base = (uint32_t)n + 0x10;
        uint32_t off = ((n->size + base) - size) & mask;
        if ((int32_t)(off - base) >= 0 && bestsize > n->size) {
            bestsize = n->size;
            best = n;
            bestoff = off;
            if (r7 != 0) {
                break;
            }
            if (n->size == size) {
                break;
            }
        }
        n = n->next;
    } while (n != 0);
    }
    if (best != 0) {
        return func_02077d10(head, best, bestoff, size, 1);
    }
    return 0;
}
