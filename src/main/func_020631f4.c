#include "ffc/types.h"

extern void func_0208763c(void *);
extern uint32_t func_0204f078(void *);
extern void func_02087678(void *);
extern void *func_02052d90(const void *mar, uint32_t index);
extern void func_0205fd04(void *, void *);
extern void func_02056858(void *);

void func_020631f4(uint8_t *p, uint8_t *q) {
    struct { uint8_t *obj; volatile uint8_t on; } lk;
    uint32_t idx, i, n;
    uint8_t *cnt; int c; uint32_t off;
    void *r7;
    uint8_t *mar;
    uint8_t *e;

    lk.obj = p + 0x58;
    lk.on = 1;
    if (lk.on) {
        func_0208763c(lk.obj);
    }
    idx = func_0204f078(q);
    off = idx << 2;
    cnt = (uint8_t *)(p + 0x40);
    c = *(int *)(cnt + off) - 1;
    *(int *)(cnt + off) = c;
    if (c > 0) {
        if (lk.on) {
            func_02087678(lk.obj);
        }
        return;
    }
    r7 = *(void **)(*(uint8_t **)(q + 0x18) + 8);
    mar = (uint8_t *)func_02052d90(*(const void **)(p + 4), *(uint32_t *)(p + 8));
    n = *(uint32_t *)(mar + 0x30);
    for (i = 0; i < n; i++) {
        e = p + off;
        func_0205fd04(r7, ((void **)(*(void ***)(e + 0x50)))[i]);
    }
    p += 0x50;
    func_02056858(((void **)p)[idx]);
    ((void **)p)[idx] = 0;
    if (lk.on) {
        func_02087678(lk.obj);
    }
}
