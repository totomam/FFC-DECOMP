/* cflags: -lang c++ */
#include "ffc/types.h"
struct S16 { uint32_t w[4]; };
struct Vec { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
  virtual S16 v4(); };
struct Obj { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
  virtual void v4(); virtual void v5(); virtual void v6(); virtual S16 v7();
  virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual int v12(); };
extern "C" {
void func_020628ac(void *obj, S16 a);
void func_02056c4c(void *obj);
int func_ov005_02195e2c(void *obj, S16 a, S16 b, int c, int d);
void func_02056bc0(void *obj, int v);
int func_ov008_0219d9f8(void *self, uint32_t idx);
uint32_t func_ov008_0219e2d0(void *self, uint32_t idx);
void func_ov005_02196594(void *a, uint32_t b, int c);
void func_ov005_02196f60(void *a, uint32_t b);
void func_ov005_02196700(void *a);
}
#define E0(s) (*(Obj **)((s) + 0xe0))
extern "C" void func_ov008_0219d784(uint8_t *self, Vec *p)
{
    uint8_t i;
    if (p == 0) {
        E0(self)->v11();
        return;
    }
    if (E0(self)->v12() != 0) {
        E0(self)->v10();
        func_020628ac(E0(self), p->v4());
    } else {
        func_02056c4c(*(void **)(self + 0xdc));
        int v = func_ov005_02195e2c(E0(self), E0(self)->v7(), p->v4(), 10, -5);
        func_02056bc0(*(void **)(self + 0xdc), v);
    }
    for (i = 0; i < 8; i++) {
        uint32_t *arr = *(uint32_t **)(self + 0xc8);
        if ((uint32_t)p == arr[i]) {
            uint8_t idx;
            *(uint8_t *)(self + 0x10e) = i;
            idx = (uint8_t)(*(uint8_t *)(self + 0x10e) + (*(uint8_t *)(self + 0x100) << 3));
            if (idx < *(uint32_t *)(self + 0xf8)) {
                if (func_ov008_0219d9f8(self, idx) == 0 &&
                    *(uint32_t *)(self + 0x108) + func_ov008_0219e2d0(self, idx) > *(uint32_t *)(self + 0x104)) {
                    func_ov005_02196594(*(void **)(self + 0xe4), (*(uint32_t **)(self + 0xf4))[idx], 1);
                } else {
                    func_ov005_02196594(*(void **)(self + 0xe4), (*(uint32_t **)(self + 0xf4))[idx], 0);
                }
                func_ov005_02196f60(*(void **)(self + 0xe8), func_ov008_0219e2d0(self, idx));
                *(uint8_t *)(self + 0x10d) = idx;
                return;
            }
        }
    }
    func_ov005_02196700(*(void **)(self + 0xe4));
    func_ov005_02196f60(*(void **)(self + 0xe8), 0);
    *(uint8_t *)(self + 0x10d) = 0xff;
}
