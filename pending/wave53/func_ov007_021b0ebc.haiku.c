#include "ffc/types.h"

extern void *data_020b8e44;
extern void *data_020b93b8;
extern uint32_t data_ov007_021c5c74[];

extern int func_02071e50(void *);
extern void func_02071e84(void *);
extern void *func_0205681c(uint32_t);
extern void *func_020159c8(void *, uint32_t);
extern void func_02005988(void *, void *);
extern void *func_02033094(void *, void *, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
extern void func_020059cc(void *);
extern void func_02056bc0(void *, void *);
extern void *func_02056aec(void *);
extern void *func_02008ce8(void *, void *, uint32_t, uint32_t);
extern uint32_t func_ov007_0219b460(void *, uint32_t, uint32_t, uint32_t);

void func_ov007_021b0ebc(char *a)
{
    uint32_t buf[3];
    volatile uint32_t pr[2];
    void *obj;
    uint32_t zero;
    void *r4;
    void *r6;
    uint32_t r7;
    void *t;
    void *sc;

    if (func_02071e50(*(void **)((char *)*(void **)data_020b8e44 + 0x80))) {
        func_02071e84(*(void **)((char *)*(void **)data_020b8e44 + 0x80));
    }
    r4 = func_0205681c(0xa4);
    r7 = 0;
    r6 = 0;
    if (r4 != 0) {
        pr[0] = 0x80;
        pr[1] = 0x60;
        obj = func_020159c8(data_020b8e44, 0x36);
        func_02005988(buf, obj);
        r4 = func_02033094(r4, buf, 0, pr[0], pr[1], 4, 0);
        r6 = (void *)1;
    }
    if (r6 != 0) {
        func_020059cc(buf);
    }
    func_02056bc0(a + 0x48, r4);
    sc = func_02056aec(r4);
    r6 = func_0205681c(0x94);
    if (r6 != 0) {
        r6 = func_02008ce8(r6, r4, 0, *(uint32_t *)(a + 0x84));
    }
    r7 = func_ov007_0219b460(*(void **)data_020b93b8, data_ov007_021c5c74[0], data_ov007_021c5c74[1], 1);
    t = func_0205681c(0x94);
    if (t != 0) {
        t = func_02008ce8(t, r4, 0, *(uint32_t *)(a + 0x84));
    }
    a += 0x14;
    func_02056bc0(a, t);
    func_02056bc0(a, (void *)r7);
    func_02056bc0(a, r6);
    func_02056bc0(a, sc);
}
