#include "ffc/types.h"

typedef struct Obj Obj;
struct Obj {
    int (**vt)(Obj *);
};

typedef struct {
    uint32_t x;
    uint32_t y;
} Pair;

extern void func_ov001_0218def8(Obj *obj, int v);
extern void func_02021240(int a, int b);
extern void *func_ov001_0218b160(Obj *obj, Pair v);
extern void *func_0203b738(void);
extern void *func_0203b6fc(void);
extern void func_02056bc0(void *object, void *node);
extern Pair data_ov001_021946a8;

void func_ov001_0218b240(Obj *a)
{
    uint32_t r4 = 0;
    void *r7;
    void *s;
    void *p;

    func_ov001_0218def8(a, 0);
    func_02021240(-1, 10);
    r7 = func_ov001_0218b160(a, data_ov001_021946a8);
    s = func_0203b738();
    r4 = (uint32_t)a->vt[17](a);
    p = func_0203b6fc();
    func_02056bc0(p, (void *)r4);
    func_02056bc0(p, s);
    a = (Obj *)((uint8_t *)a + 0x14);
    func_02056bc0(a, p);
    func_02056bc0(a, r7);
}
