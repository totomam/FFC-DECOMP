#include "ffc/types.h"

typedef struct Node {
    struct Node *prev;
    struct Node *next;
    uint32_t size;
} Node;

typedef struct Entry {
    uint32_t pad;
    Node *head;
    void *tail;
} Entry;

extern uint32_t func_02088978(void);
extern void func_0208898c(uint32_t);
extern void *func_02087c24(void *head, void *node);
extern void *func_02087c14(void *node, void *owner);
extern void *data_02141790[];

void *func_02087ca0(uint32_t idx, int32_t a1, int32_t size)
{
    uint32_t irq = func_02088978();
    uint32_t *pool = (uint32_t *)data_02141790[idx];
    Entry *e;
    Node *n;

    if (pool == 0) {
        func_0208898c(irq);
        return 0;
    }
    if (a1 < 0) {
        a1 = pool[0];
    }
    Entry *tbl;
    size = (int32_t)((uint8_t *)0 + size + 0x20);
    tbl = (Entry *)pool[4];
    e = &tbl[a1];
    size = (int32_t)((uint8_t *)0 + size + 0x1f);
    size &= ~0x1f;

    n = e->head;
    while (n != 0) {
        if (size <= (int32_t)n->size) {
            break;
        }
        n = n->next;
    }
    if (n == 0) {
        func_0208898c(irq);
        return 0;
    }

    if ((uint32_t)(n->size - size) < 0x40) {
        e->head = func_02087c24(e->head, n);
    } else {
        uint32_t rem = n->size - size;
        Node *nn;
        n->size = size;
        nn = (Node *)((uint8_t *)n + size);
        nn->size = rem;
        nn->prev = n->prev;
        nn->next = n->next;
        if (nn->next != 0) {
            nn->next->prev = nn;
        }
        if (nn->prev != 0) {
            nn->prev->next = nn;
        } else {
            e->head = nn;
        }
    }

    e->tail = func_02087c14(e->tail, n);
    func_0208898c(irq);
    return (uint8_t *)n + 0x20;
}
