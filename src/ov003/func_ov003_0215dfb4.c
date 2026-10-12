#include "ffc/types.h"

extern void func_0200d5ec(void *p);
extern void func_02050c28(void *p);
extern void func_02056db0(void *p);

typedef struct Node {
    struct Node *f0;
    struct Node *f4;
    uint32_t f8;
} Node;

uint8_t *func_ov003_0215dfb4(uint8_t *a)
{
    uint16_t *ime = (uint16_t *)0x4000208;
    uint16_t t;
    Node *q;
    uint32_t prev;
    Node *r3;
    Node *r5;
    Node *r2;

    func_0200d5ec(a + 0xc4);

    q = (Node *)(a + 0x98);
    t = *ime;
    prev = 0;
    *ime = prev;
    if (t != 0) {
        prev = 1;
    }

    if (((uint8_t *)q)[0xc] != 0) {
        while (((Node *volatile)q)->f4 != 0) {
            q = q->f4;
        }
        if (q != 0) {
            do {
                r3 = q->f0;
                q->f0 = 0;
                q->f4 = 0;
                q->f8 = 0;
                q = r3;
            } while (q != 0);
        }
    } else {
        r3 = q->f4;
        if (r3 != 0) {
            r5 = r3->f0;
            if (r5 != 0) {
                r2 = r5->f0;
                r3->f0 = 0;
                if (r2 != 0) {
                    r3->f0 = r2;
                    r2->f4 = r3;
                }
                r5->f4 = 0;
                r5->f0 = 0;
            }
        } else {
            r3 = q->f0;
            if (r3 != 0) {
                r3->f4 = 0;
                q->f0 = 0;
            }
        }
    }

    (void)*(volatile uint16_t *)0x4000208;
    *(volatile uint16_t *)0x4000208 = prev;
    func_02050c28(a + 0x8c);
    func_02056db0(a);
    return a;
}
