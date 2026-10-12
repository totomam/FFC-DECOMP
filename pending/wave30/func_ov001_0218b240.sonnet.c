/* cflags: -lang c++ */
#include "ffc/types.h"
struct Obj { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual uint32_t v17(); };
typedef struct { uint32_t x; uint32_t y; } Pair;
extern "C" {
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
    func_ov001_0218def8(a, 0);
    func_02021240(-1, 10);
    void *r7 = func_ov001_0218b160(a, data_ov001_021946a8);
    void *s = func_0203b738();
    r4 = a->v17();
    void *p = func_0203b6fc();
    func_02056bc0(p, (void *)r4);
    func_02056bc0(p, s);
    uint8_t *b = (uint8_t *)a + 0x14;
    func_02056bc0(b, p);
    func_02056bc0(b, r7);
}
}
