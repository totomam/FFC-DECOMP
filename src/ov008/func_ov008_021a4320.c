/* cflags: -lang c++ */
#include "ffc/types.h"

typedef struct { uint32_t w[4]; } S16;

extern "C" void func_020628ac(void *obj, S16 s);
extern "C" void func_02056c4c(void *obj);
extern "C" void *func_ov005_02195e2c(void *obj, S16 a, S16 b, int c, int d);
extern "C" void func_02056bc0(void *obj, void *node);
extern "C" int func_ov008_021a4dbc(void *self, uint32_t idx);
extern "C" int func_ov008_021a4edc(void *self, uint32_t idx);
extern "C" void func_ov005_02196658(void *a, void *b, int flag);
extern "C" void func_ov005_02196f60(void *a, int b);
extern "C" void func_ov005_02196700(void *a);

struct O {
 virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
 virtual S16 f10(); virtual void v5(); virtual void v6(); virtual S16 f1c();
 virtual void v8(); virtual void v9(); virtual void fa(); virtual void fb(); virtual int fd();
};
extern "C" void func_ov008_021a4320(uint8_t *self, O *p) {
    uint8_t i;
    if (p == 0) {
        (*(O **)(self + 0xf0))->fb();
        return;
    }
    if ((*(O **)(self + 0xf0))->fd() != 0) {
        (*(O **)(self + 0xf0))->fa();
        func_020628ac(*(void **)(self + 0xf0), p->f10());
    } else {
        void *r;
        func_02056c4c(*(void **)(self + 0xec));
        r = func_ov005_02195e2c(*(void **)(self + 0xf0), (*(O **)(self + 0xf0))->f1c(), p->f10(), 10, -5);
        func_02056bc0(*(void **)(self + 0xec), r);
    }

    for (i = 0; i < 8; i++) {
        void **arr = *(void ***)(self + 0xd8);
        if (p == arr[i]) {
            uint8_t idx;
            self[0x126] = i;
            idx = (uint8_t)(self[0x126] + (*(uint32_t *)(self + 0x114) << 3));
            if (idx < *(uint32_t *)(self + 0x10c)) {
                if (func_ov008_021a4dbc(self, idx) == 0 && *(uint32_t *)(self + 0x120) + func_ov008_021a4edc(self, idx) > *(uint32_t *)(self + 0x11c)) {
                    func_ov005_02196658(*(void **)(self + 0xf4), (*(void ***)(self + 0x108))[idx], 1);
                } else {
                    func_ov005_02196658(*(void **)(self + 0xf4), (*(void ***)(self + 0x108))[idx], 0);
                }
                {
                    int m = func_ov008_021a4edc(self, idx);
                    func_ov005_02196f60(*(void **)(self + 0xf8), m);
                }
                self[0x125] = idx;
                return;
            }
        }
    }

    func_ov005_02196700(*(void **)(self + 0xf4));
    func_ov005_02196f60(*(void **)(self + 0xf8), 0);
    self[0x125] = 0xff;
}
