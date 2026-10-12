#include "ffc/types.h"

extern void func_0200bd18(void *dst, void *src, uint32_t idx, uint32_t flag);
extern void *func_0200a678(void *object);
extern void func_0200a630(void *dst, void *src);
extern void func_02068e18(uint32_t val, void *obj);
extern void func_02005988(void *dst, void *src);
extern void func_02068ddc(uint32_t val, void *obj);
extern void *func_020059cc(void *object);
extern uint8_t data_ov012_021d4408[];

typedef struct {
    uint32_t flag:1;
    uint32_t rest:31;
} Word;

typedef struct {
    uint8_t flag:1;
    uint8_t cnt:7;
} Hdr;

typedef struct {
    uint16_t a;
    uint16_t b;
    uint16_t c;
} Out;

void func_ov012_021ce5a4(uint8_t *p)
{
    uint8_t i;
    uint32_t lim;
    uint32_t b1[3];
    uint32_t b2[3];
    uint32_t obj1[3];
    uint32_t obj2[3];
    Out o;
    uint16_t *q;

    for (i = 0; i < p[0x339]; i++) {
        lim = !((Word *)(p + 0x2ec))->flag ? ((Hdr *)(p + 0x2ec))->cnt : *(uint32_t *)(p + 0x2f0);
        if (i < lim) {
            func_0200bd18(b1, p + 0x2ec, i, 1);
            q = !((Word *)b1)->flag ? (uint16_t *)((uint8_t *)b1 + 2) : (uint16_t *)(*(uint32_t *)((uint8_t *)b1 + 8));
            o.a = *q;
            func_0200a678(b1);
            func_0200bd18(b2, p + 0x2f8, i, 1);
            q = !((Word *)b2)->flag ? (uint16_t *)((uint8_t *)b2 + 2) : (uint16_t *)(*(uint32_t *)((uint8_t *)b2 + 8));
            o.b = *q;
            func_0200a678(b2);
            o.c = 0;
            func_0200a630(obj1, &o);
            func_02068e18(*(uint32_t *)(p + i * 4 + 0x260), obj1);
            func_0200a678(obj1);
        } else {
            func_02005988(obj2, data_ov012_021d4408);
            func_02068ddc(*(uint32_t *)(p + i * 4 + 0x260), obj2);
            func_020059cc(obj2);
        }
    }
}
