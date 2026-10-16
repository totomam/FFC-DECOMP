/* cflags: -lang c++ */
#include "ffc/types.h"
struct O { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
 virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13();
 virtual void v14(uint32_t a, uint32_t b); };
extern "C" {
extern uint32_t func_02091b10(void *object, uint32_t first, ...);
extern O *func_0203b95c(void *a, void *b, uint32_t c, uint32_t d);
extern char data_ov005_02199344[];
extern char data_ov005_02199378[];

struct S { uint32_t lo:10; uint32_t mid:7; uint32_t flag:1; uint32_t rest:14;
  int chk() const { return flag == 1 ? 1 : 0; } };
O *func_ov005_02197b10(void *p, S *q);
O *func_ov005_02197b10(void *p, S *q) {
    char buf[0x44];
    O *o;
    if (!q->chk()) func_02091b10(buf, (uint32_t)data_ov005_02199344, q->lo);
    else func_02091b10(buf, (uint32_t)data_ov005_02199378, q->lo);
    o = func_0203b95c(buf, p, 2, 1);
    o->v14(q->mid + 1, 0);
    o->v10();
    return o;
}
}
