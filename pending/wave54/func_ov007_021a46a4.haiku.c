#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;

extern void func_020559d4(void *p);
extern void func_02056c4c(void *p);
extern uint32_t func_0206d120(void *a, void *b, uint32_t c, uint32_t d, uint32_t e);
extern uint32_t func_ov007_021a4848(void *self, Pair pr);
extern void *func_0205681c(uint32_t size);
extern void *func_020159c8(void *p, uint32_t n);
extern void func_02005988(void *dst, void *src);
extern void *func_02032d24(void *obj, Pair pr, void *c, uint32_t d, uint32_t e);
extern uint32_t func_0206cd68(void *p);
extern void func_02056bc0(void *object, uint32_t node);
extern void *func_020059cc(void *object);
extern void func_0208763c(void *p);
extern void func_02087678(void *p);
extern uint32_t func_02056aec(void *p);
extern void *func_02056dd4(void *p);
extern uint32_t func_02060634(void *a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern uint32_t func_0206c270(void *p);
extern uint32_t func_0206cdf0(void *p, uint32_t n);

extern Pair data_ov007_021c41f0;
extern void *data_020b8e44;
extern Pair data_ov007_021c41f8;
extern Pair data_ov007_021c4200;

void *func_ov007_021a46a4(void *self)
{
    uint8_t *p = (uint8_t *)self;
    uint32_t res[2];
    Pair pr;
    uint32_t obj[3];
    void *r7;
    int r6 = 0;

    *(uint8_t *)(p + 0xed) = 0;
    func_020559d4(p + 0x80);

    if (*(uint8_t *)(p + 0xed) != 0) {
        func_02056c4c(*(void **)(p + 0xc8));
        res[0] = func_0206d120(*(void **)(p + 0xc0), p + 0xf0, 0x18, 0, 0);
        res[1] = func_ov007_021a4848(self, data_ov007_021c41f0);
        r7 = func_0205681c(0xb0);
        if (r7 != 0) {
            pr.a = 0x80;
            pr.b = 0x60;
            func_02005988(obj, func_020159c8(data_020b8e44, 0x2a));
            r7 = func_02032d24(r7, pr, obj, 4, 0);
            r6 = 1;
        }
        func_02056bc0(p + 0x14, func_0206cd68(*(void **)(p + 0xc0)));
        func_02056bc0(p + 0x14, (uint32_t)r7);
        func_02056bc0(p + 0x14, res[1]);
        func_02056bc0(p + 0x14, res[0]);
        if (r6 != 0) {
            func_020059cc(obj);
        }
        *(Pair *)(p + 0xb8) = data_ov007_021c41f8;
        return 0;
    } else {
        uint8_t *q = *(uint8_t **)(p + 0xc8);
        uint8_t *qq;
        uint8_t flag;
        int ok;
        uint32_t t1;
        flag = q[0x12];
        qq = q + 0x1c;
        if (flag != 0) {
            func_0208763c(qq);
        }
        ok = (*(void **)(q + 0x14) == 0);
        if (flag != 0) {
            func_02087678(qq);
        }
        if (ok) {
            if (*(uint32_t *)(p + 0xe8) == 1) {
                **(uint32_t **)(p + 0xc4) = 1;
                func_02056c4c(*(void **)(p + 0xc8));
                t1 = func_02056aec(p);
                r6 = (int)func_02060634(*(void **)((uint8_t *)func_02056dd4(p) + 0x20), 8, 0, 0, 0, 0xa);
                func_02056bc0(p + 0x14, func_0206c270(*(void **)(p + 0xc0)));
                func_02056bc0(p + 0x14, (uint32_t)r6);
                func_02056bc0(p + 0x14, t1);
            } else {
                func_02056bc0(p + 0x14, func_0206cdf0(*(void **)(p + 0xc0), *(uint16_t *)(p + 0xcc)));
                *(Pair *)(p + 0xb8) = data_ov007_021c4200;
            }
        }
        if (flag != 0) {
            func_02087678(qq);
        }
        return 0;
    }
}
