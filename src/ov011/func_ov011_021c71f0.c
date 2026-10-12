#include "ffc/types.h"

extern void func_0205d620(void *obj);
extern void func_02056844(void *obj);
extern void func_0206047c(void *obj);
extern void func_020367a8(void *obj);
extern void func_0209d02c(void *obj, int a, int b, void *fn);
extern void *func_020059cc(void *object);
extern void func_0200d5ec(void *obj);
extern void func_020695d0(void *obj);
extern void *func_02035fd0(void *object);
extern uint8_t data_ov011_021cbc5c[];
extern uint8_t *data_0213df20;

void *func_ov011_021c71f0(void *arg)
{
    uint8_t *p = (uint8_t *)arg;
    uint8_t i;
    uint32_t off;
    uint32_t n;
    uint32_t k;
    void *obj;

    *(uint8_t **)p = data_ov011_021cbc5c;
    i = 0;
    do {
        off = i << 2;
        obj = *(void **)(p + off + 0xe8);
        if (obj != 0) {
            if (obj != 0) {
                func_0205d620(obj);
                func_02056844(obj);
            }
            *(void **)(p + off + 0xe8) = 0;
        }
        i = (uint8_t)(i + 1);
    } while (i < 5);
    func_0206047c(*(void **)(data_0213df20 + 0x20));
    func_020367a8(p + 0x350);
    n = 0x60;
    k = 0x134;
    func_0209d02c(p + k + 0xc, 5, n, func_02035fd0);
    func_020059cc(p + k);
    n += 0xc4;
    func_0200d5ec(p + n);
    func_020695d0(p);
    func_02056844(p);
    return p;
}
