#include "ffc/types.h"

extern void func_02005988(void *p);
extern void func_0205d508(void *dst, void *src, uint32_t n);
extern void *func_0205327c(void *destination, const void *source);
extern void func_02052be0(void);
extern void func_02052d10(uint32_t a, uint32_t b);
extern void func_ov012_021d13dc(void *a, void *b, uint8_t c);
extern void func_0205d620(void *p);
extern void *func_020059cc(void *object);

typedef struct {
    uint32_t f00;
    uint32_t f04;
    uint32_t f08;
    uint8_t  f0c;
    uint32_t f10;
    uint32_t f14;
    uint8_t  f18;
    uint32_t f1c;
    uint32_t f20;
    uint8_t  f24;
    uint32_t f28;
    uint32_t f2c;
    uint8_t  f30;
    uint32_t f34;
} Entry;

void func_ov012_021cf1d0(uint8_t *p)
{
    Entry tmp;
    uint8_t buf[8];
    volatile uint8_t flag;
    uint32_t ** volatile list;
    Entry * volatile base;
    uint32_t * volatile cnt;
    uint32_t *old;

    if ((*(uint32_t **)(p + 0x80))[0] == 0) return;
    base = (Entry *)p;
    base = (Entry *)(p + 0x84);
    cnt = (uint32_t *)p;
    cnt = (uint32_t *)(p + 0x88);
    list = (uint32_t **)p;
    list = (uint32_t **)(p + 0x80);
    do {
        if (p[0x90]) return;
        func_02005988(buf);
        func_0205d508(&tmp, buf, 7);
        if (*cnt < *(uint32_t *)(p + 0x8c)) {
            Entry *e = base + *cnt;
            if (e) {
                func_0205327c(e, &tmp);
                e->f04 = tmp.f04;
                e->f08 = tmp.f08;
                e->f0c = tmp.f0c;
                if (e->f04) {
                    func_02052be0();
                    if (e->f0c) func_02052d10(e->f04, e->f08);
                }
                e->f10 = tmp.f10;
                e->f14 = tmp.f14;
                e->f18 = tmp.f18;
                if (e->f10) {
                    func_02052be0();
                    if (e->f18) func_02052d10(e->f10, e->f14);
                }
                e->f1c = tmp.f1c;
                e->f20 = tmp.f20;
                e->f24 = tmp.f24;
                if (e->f1c) {
                    func_02052be0();
                    if (e->f24) func_02052d10(e->f1c, e->f20);
                }
                e->f28 = tmp.f28;
                e->f2c = tmp.f2c;
                e->f30 = tmp.f30;
                if (e->f28) {
                    func_02052be0();
                    if (e->f30) func_02052d10(e->f28, e->f2c);
                }
                e->f34 = tmp.f34;
            }
            (*cnt)++;
        } else {
            flag = 0;
            func_ov012_021d13dc((void *)base, &tmp, flag);
        }
        func_0205d620(&tmp);
        func_020059cc(buf);
        old = *list;
        *list = old + 1;
    } while (old[1] != 0);
}
