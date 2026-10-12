#include "ffc/types.h"

extern void func_0200d5ec(void *p);
extern void func_02050c28(void *p);
extern void func_02056db0(void *p);
extern void func_02056844(void *p);

typedef struct Node {
    struct Node *a;
    struct Node *b;
    uint32_t c;
    
    uint8_t flag;
} Node;

uint8_t *func_ov003_0215e044(uint8_t *s)
{
    volatile uint16_t *ime = (volatile uint16_t *)0x4000208;
    uint16_t old;
    Node *l;
    uint16_t en;
    Node *n;

    func_0200d5ec(s + 0xc4);
    l = (Node *)(s + 0x98);
    en = 0;
    old = *ime;
    *ime = en;
    if (old != 0) en = 1;
    if (l->flag != 0) {
        while (l->b != 0) { l = (Node *)*(Node **)((uint8_t *)l + 4); }
        if (l != 0) {
            do {
                n = l->a;
                l->a = 0;
                l->b = 0;
                l->c = 0;
                l = n;
            } while (l != 0);
        }
    } else {
        n = l->b;
        if (n != 0) {
            Node *h = n->a;
            if (h != 0) {
                Node *h2 = h->a;
                n->a = 0;
                if (h2 != 0) {
                    n->a = h2;
                    h2->b = n;
                }
                h->b = 0;
                h->a = 0;
            }
        } else {
            n = l->a;
            if (n != 0) {
                n->b = 0;
                l->a = 0;
            }
        }
    }
    (void)*ime;
    *ime = en;
    func_02050c28(s + 0x8c);
    func_02056db0(s);
    func_02056844(s);
    return s;
}
