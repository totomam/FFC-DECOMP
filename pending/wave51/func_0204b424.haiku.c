#include "ffc/types.h"

typedef struct Node {
    struct Node *prev;
    struct Node *next;
    uint32_t pad8;
    uint32_t data;
} Node;

typedef struct Obj {
    uint32_t pad0;
    uint32_t state;
} Obj;

extern Node *func_0204b3f4(Node **list, uint32_t key);
extern Obj *func_0204dc5c(uint32_t ctx, uint32_t data);
extern void func_0204bb90(uint32_t ctx, uint32_t data);
extern void func_0204b098(Node *n);
extern void func_0204ddac(uint32_t ctx, Obj *o);
extern void func_0204dffc(Obj *o);

uint32_t func_0204b424(Node **list, uint32_t ctx, uint32_t key)
{
    uint32_t ret = 0;
    Node *n = func_0204b3f4(list, key);
    if (n != 0) {
        Node *head = *list;
        if (head != head->prev) {
            n->prev->next = n->next;
            n->next->prev = n->prev;
            if (*list == n) {
                *list = n->next;
            }
        } else {
            *list = 0;
        }
        {
            Obj *o = func_0204dc5c(ctx, n->data);
            func_0204bb90(ctx, n->data);
            func_0204b098(n);
            if (o != 0) {
                o->state = 8;
                func_0204ddac(ctx, o);
                func_0204dffc(o);
            }
        }
        ret = 1;
    }
    return ret;
}
