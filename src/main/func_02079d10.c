#include "ffc/types.h"

extern int func_020799fc(void *p);
extern void *func_02077b70(void *p, int v);
extern void func_02079f0c(void *p);
extern void *func_02079f3c(int v);
extern void func_02079e98(void *a, void *b);
extern uint8_t data_0213e6a4[];

void *func_02079d10(uint32_t *head, int idx, int n)
{
    uint8_t *e = data_0213e6a4 + idx * 0x24;
    void *r;
    void *q;

    if (*head != 0) {
        func_020799fc(head);
    }
    if (*(uint16_t *)(e + 8) >= *(uint32_t *)(e + 0x18)) {
        r = func_02077b70(e, 0);
        if (r == 0) {
            return 0;
        }
        if (n < *((uint8_t *)r + 0x3d)) {
            return 0;
        }
        func_02079f0c(r);
    }
    q = func_02079f3c(n);
    if (q == 0) {
        return 0;
    }
    func_02079e98(e, q);
    *(uint32_t *)q = (uint32_t)head;
    *head = (uint32_t)q;
    return q;
}
