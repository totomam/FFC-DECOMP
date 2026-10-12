#include "ffc/types.h"

extern void func_02069694(void *p, uint32_t v, int n);
extern void func_02069670(void *p, uint32_t a, int n, uint32_t c);

void func_ov011_021bff9c(uint8_t *p)
{
    int off = 0x56 * 4;
    int n3 = 3;
    int n1 = 1;

    func_02069694(p, *(uint32_t *)(p + off), n3);
    func_02069694(p, *(uint32_t *)(p + off), n1);
    func_02069694(p, *(uint32_t *)(p + off + 4), n3);
    func_02069694(p, *(uint32_t *)(p + off + 4), n1);

    if (p[0x27a] == 0) {
        func_02069670(p, *(uint32_t *)(p + off), n3, *(uint32_t *)(p + off + 8));
        func_02069670(p, *(uint32_t *)(p + off), n1, *(uint32_t *)(p + off + 4));
        func_02069670(p, *(uint32_t *)(p + off + 4), n3, *(uint32_t *)(p + off));
        func_02069670(p, *(uint32_t *)(p + off + 4), n1, *(uint32_t *)(p + off + 8));
    } else {
        func_02069670(p, *(uint32_t *)(p + off), n3, *(uint32_t *)(p + off + 4));
        func_02069670(p, *(uint32_t *)(p + off), n1, *(uint32_t *)(p + off + 4));
        func_02069670(p, *(uint32_t *)(p + off + 4), n3, *(uint32_t *)(p + off));
        func_02069670(p, *(uint32_t *)(p + off + 4), n1, *(uint32_t *)(p + off));
    }
}
