/* cflags: -lang c++ */
#include "ffc/types.h"
extern "C" {
extern int func_ov005_02198678(void *self, uint32_t idx);
extern void func_ov005_02196bec(void *obj, int flag);
struct Inner { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual int v14(int a, int b); };
struct Mid { uint8_t pad[0x98]; Inner *in; };
struct O {
  virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3(); virtual void a4(); virtual void a5(); virtual void a6(); virtual void a7(); virtual void a8(); virtual void a9(); virtual void a10(); virtual void a11();
  virtual void get(uint32_t i, uint32_t *o);
  virtual int c13();
  virtual int c14(uint32_t *o);
  uint8_t pad[0xf8]; uint32_t base; uint8_t pad2[0x14]; void **arr; uint32_t cnt; uint8_t pad3[0x10]; Mid *m;
};
void func_ov005_021989e8(O *self);
void func_ov005_021989e8(O *self)
{
    uint32_t buf[6];
    uint16_t i; uint32_t *cp = &self->cnt;
    for (i = 0; i < self->cnt; i++) {
            self->get(i + (self->base << 3), buf);
            if (func_ov005_02198678(self, i + (self->base << 3)) == 0) {
                if (self->c14(buf) == 0 || self->c13() == 0) {
                    func_ov005_02196bec(self->arr[i], 0);
                    continue;
                }
            }
            func_ov005_02196bec(self->arr[i], 1);
    }
    for (i = 0; i < 0x40; i++) {
        if (func_ov005_02198678(self, i) != 0) {
            self->m->in->v14(4, 0);
            return;
        }
    }
    self->m->in->v14(1, 0);
}
}
