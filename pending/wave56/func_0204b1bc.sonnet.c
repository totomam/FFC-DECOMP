#include "ffc/types.h"

extern int func_0204af58(uint32_t a, uint32_t b);
extern void *func_0204b07c(uint32_t size, uint32_t align);
extern void func_0204b0ac(uint32_t a, uint32_t b);

typedef struct Node {
    struct Node *next;
    struct Node *prev;
    uint32_t key;
    uint32_t value;
    uint32_t pad0;
    uint32_t pad1;
} Node;

int func_0204b1bc(Node **p, uint32_t a, uint32_t b, uint32_t c)
{
    int r7 = 0;
    Node *r4;
    Node *node;
    Node *h = *p;

    if (h != 0) {
        r4 = h;
        if (func_0204af58(b, h->key) == 0) {
            r7 = 1;
        } else {
            r4 = h->prev;
            if (r4 != *p) {
                do {
                    if (func_0204af58(b, r4->key) == 0) {
                        r7 = 1;
                        break;
                    }
                    r4 = r4->prev;
                } while (r4 != *p);
            }
        }
    }

    if (r7 != 0) {
        r4->value = c;
    } else {
        node = (Node *)func_0204b07c(0x18, 4);
        if (node == 0) {
            func_0204b0ac(a, 1);
            return 0;
        }
        node->key = b;
        node->value = c;
        node->pad0 = 0;
        node->pad1 = 0;

        if (*p != 0) {
            node->next = (*p)->next;
            node->prev = *p;
            (*p)->next->prev = node;
            (*p)->next = node;
        } else {
            node->prev = node;
            node->next = node;
            *p = node;
        }
    }
    return 1;
}
