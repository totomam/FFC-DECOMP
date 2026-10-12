#include "ffc/types.h"

extern int func_0206cb98(void *p);
extern void func_020559d4(void *p);
extern void *func_02056aec(void *p);
extern void *func_02056dd4(void *p);
extern void *func_02060634(void *a, int b, int c, int d, int e, int f);
extern void *func_0206cd68(void *p);
extern void *func_0203b688(void);
extern void *func_0203b6fc(void);
extern void func_02056bc0(void *object, void *node);
extern void *func_0205f904(void *p);
extern void *func_02056b34(void *p);
extern void *func_ov007_021a2664(void *p);
typedef struct { uint32_t a; uint32_t b; } Pair;
extern Pair data_ov007_021c4228;

void func_ov007_021a4d58(uint8_t *p)
{
    void *t;
    void *u;
    void *v;
    void *w;
    void *x;
    void *y;
    void *z;
    void *q;
    void *n;
    uint8_t *o;

    if (func_0206cb98(*(void **)(p + 0xc8)) != 0) {
        *(Pair *)(p + 0xb8) = data_ov007_021c4228;
        return;
    }

    func_020559d4(p + 0x80);
    if (p[0x114] != 0) {
        t = func_02056aec(p);
        n = func_02056dd4(p);
        u = func_02060634(*(void **)((uint8_t *)n + 0x20), 8, 0, 10, 0, 0);
        v = func_0206cd68(*(void **)(p + 0xc8));
        w = func_0203b688();
        func_02056bc0(w, v);
        x = func_0203b6fc();
        func_02056bc0(x, w);
        func_02056bc0(x, u);
        y = func_0205f904(*(void **)(p + 0x100));
        z = func_02056b34(*(void **)(p + 0xdc));
        q = func_ov007_021a2664(*(void **)(p + 0x118));
        o = p + 0x14;
        func_02056bc0(o, q);
        func_02056bc0(o, z);
        func_02056bc0(o, y);
        func_02056bc0(o, x);
        func_02056bc0(o, t);
    }
}
