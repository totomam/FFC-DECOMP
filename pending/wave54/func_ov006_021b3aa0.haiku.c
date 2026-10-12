#include "ffc/types.h"

typedef struct Node {
    struct Node *prev;
    struct Node *next;
    uint32_t start;
    uint8_t len;
} Node;

typedef struct Region {
    uint8_t pool[512];
    Node head;
    Node tail;
    uint32_t pad;
    uint32_t handle;
} Region;

extern Region *data_ov006_021bc810;
extern Node *func_ov006_021b3f44(uint32_t h);
extern uint32_t func_02086700(int x);
extern void func_ov006_021b509c(Node *n, Node *obj);
extern void func_02088f30(void);
extern void func_020866dc(uint32_t s);

void func_ov006_021b3aa0(int a, uint32_t b, int c)
{
    Node *obj = func_ov006_021b3f44((data_ov006_021bc810 + a)->handle);
    uint32_t irq = func_02086700(1);
    Node *p;

    if (c != 0) {
        p = &(data_ov006_021bc810 + a)->head;
        if (p != &(data_ov006_021bc810 + a)->tail) {
            do {
                Node *q = p->next;
                uint32_t end = p->start + ((uint32_t)p->len << 3);
                if (end + (b << 3) <= q->start) {
                    obj->start = end;
                    func_ov006_021b509c(q, obj);
                    break;
                }
                p = q;
            } while (p != &(data_ov006_021bc810 + a)->tail);
        }
        if (p == &(data_ov006_021bc810 + a)->tail) {
            func_02088f30();
        }
    } else {
        p = &(data_ov006_021bc810 + a)->tail;
        if (p != &(data_ov006_021bc810 + a)->head) {
            do {
                Node *q = p->prev;
                uint32_t s = p->start - (b << 3);
                if (s >= q->start + ((uint32_t)q->len << 3)) {
                    obj->start = s;
                    func_ov006_021b509c(p, obj);
                    break;
                }
                p = q;
            } while (p != &(data_ov006_021bc810 + a)->head);
        }
        if (p == &(data_ov006_021bc810 + a)->head) {
            func_02088f30();
        }
    }

    func_020866dc(irq);
    obj->len = (uint8_t)b;
}
