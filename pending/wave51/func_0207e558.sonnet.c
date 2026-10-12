#include "ffc/types.h"

typedef struct Node {
    uint8_t *f0;
    struct Node *next;
    uint8_t pad[0xc];
    uint32_t f14;
} Node;

typedef struct Glob {
    Node *head;
    Node *tail;
} Glob;

extern Glob data_021410cc;
extern void func_02088f30(void);
extern void func_02088978(uint8_t *p);
extern void func_0208898c(void);

void func_0207e558(Node *p) {
    Node **pp;
    Node *cur;

    if (p == data_021410cc.head) {
        func_02088f30();
    }
    if (p->f0 != 0) {
        func_02088978(p->f0);
        cur = data_021410cc.head;
        pp = &data_021410cc.head;
        while (cur != 0) {
            if (cur == p) {
                *pp = cur->next;
                break;
            }
            pp = &cur->next;
            cur = *pp;
        }
        if (((int8_t *)p)[3] != 0) {
            *p->f0 = 0;
        }
        p->f0 = 0;
        p->next = 0;
        p->f14 &= ~1u;
        if (data_021410cc.tail == p) {
            data_021410cc.tail = 0;
        }
        func_0208898c();
    }
}
