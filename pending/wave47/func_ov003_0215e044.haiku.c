#include "ffc/types.h"

extern void func_0200d5ec(void *p);
extern void func_02050c28(void *p);
extern void func_02056db0(void *p);
extern void func_02056844(void *p);

typedef struct Node {
    struct Node *next;
    struct Node *prev;
    uint32_t data;
} Node;

typedef struct List {
    Node *head;
    Node *tail;
    uint32_t pad;
    uint8_t flag;
} List;

void func_ov003_0215e044(uint8_t *a)
{
    volatile uint16_t *ime;
    uint16_t old;
    uint16_t en;
    List *l;
    Node *n;

    func_0200d5ec(a + 0xc4);
    ime = (volatile uint16_t *)0x4000208;
    old = *ime;
    en = 0;
    *ime = en;
    if (old != 0) {
        en = 1;
    }
    l = (List *)(a + 0x98);
    if (l->flag != 0) {
        n = l->tail;
        if (n != 0) {
            while (n->prev != 0) {
                n = n->prev;
            }
        } else {
            n = (Node *)l;
        }
        if (n != 0) {
            do {
                Node *nx = n->next;
                n->next = 0;
                n->prev = 0;
                n->data = 0;
                n = nx;
            } while (n != 0);
        }
    } else {
        n = l->tail;
        if (n != 0) {
            Node *h = n->next;
            if (h != 0) {
                Node *h2 = h->next;
                n->next = 0;
                if (h2 != 0) {
                    n->next = h2;
                    h2->prev = n;
                }
                h->prev = 0;
                h->next = 0;
            }
        } else {
            n = l->head;
            if (n != 0) {
                n->prev = 0;
                l->head = 0;
            }
        }
    }
    (void)*ime;
    *ime = en;
    func_02050c28(a + 0x8c);
    func_02056db0(a);
    func_02056844(a);
}
