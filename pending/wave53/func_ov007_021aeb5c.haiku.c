#include "ffc/types.h"

extern void func_02056c9c(void *obj, uint32_t x);
extern uint32_t func_02015a38(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern uint32_t func_020159f8(uint32_t a);
extern uint32_t func_0203b9cc(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern void *func_0203b878(uint32_t a, uint32_t b);
extern void func_02056bc0(void *object, void *node);
extern uint32_t func_02091b10(void *object, uint32_t first, ...);
extern void func_02005988(void *a, void *b);
extern void func_02068ddc(void *a, void *b);
extern void *func_020059cc(void *object);
extern char data_ov007_021c559c[];
extern uint32_t data_020b8e44;
extern uint32_t data_ov007_021c5540[];
extern char data_ov007_021c5660[];

typedef struct {
    uint32_t a;
    uint32_t b;
} S;

void *func_ov007_021aeb5c(void *obj, uint32_t *arr)
{
    uint32_t i;
    uint32_t h;
    void *p48;
    S t;
    uint32_t v;
    S w;
    void *n;
    void **vt;
    char *q;

    func_02056c9c(obj, 0);
    *(char **)obj = data_ov007_021c559c;
    h = func_02015a38(data_020b8e44, 0, 1, 0);
    p48 = obj;
    for (i = 0; i < 5; i++) {
        q = (char *)arr + i * 4;
        if (*(uint32_t *)(q + 0x144) != 0) {
            t.a = 0x10;
            t.b = 0x10;
            n = func_0203b878(func_0203b9cc(t.a, t.b, func_020159f8(data_020b8e44), 1), h);
            func_02056bc0((char *)p48 + 0x48, n);
            vt = *(void ***)n;
            ((void (*)(void *, uint32_t, uint32_t))vt[3])(n, data_ov007_021c5540[2 * i], data_ov007_021c5540[2 * i + 1]);
            vt = *(void ***)n;
            ((void (*)(void *, uint32_t))vt[8])(n, 2);
            vt = *(void ***)n;
            ((void (*)(void *))vt[10])(n);
            func_02091b10(&v, (uint32_t)data_ov007_021c5660, *(uint32_t *)(q + 0x144));
            func_02005988(&w, &v);
            func_02068ddc(n, &w);
            func_020059cc(&w);
        }
    }
    return obj;
}
