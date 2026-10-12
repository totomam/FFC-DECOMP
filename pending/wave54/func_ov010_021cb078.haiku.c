/* cflags: -lang c++ */
#include "ffc/types.h"

struct Num { int v; Num(int x) : v(x) {} ~Num() {} };
inline int diff(const Num &a, int b) { return a.v - b; }

extern "C" {
void func_02035f58(void *p);
void *func_02035fd0(void *p);
uint32_t func_02015a58(void *obj);
uint32_t func_0201f704(void *obj, uint32_t i);
void func_0200d5d4(void *object, void *elem, uint32_t value);
void func_ov010_021c79f0(void *a, void *b, uint32_t c);
void func_ov010_021cbe8c(void *a, void *b, void *c, uint32_t d);
void func_ov010_021cb1e4(void *a, void *b, uint32_t c);
int func_0209a978(int n, int sz);
void func_ov005_021961ac(void *self, uint8_t v);
extern void *data_020b8e44;
extern void *data_020b93b8;
}

#define F32(off) (*(uint32_t *)((uint8_t *)self + (off)))
#define FP(off) (*(uint8_t **)((uint8_t *)self + (off)))

extern "C" void *func_ov010_021cb078(uint8_t *self)
{
    uint8_t obj[0x60];
    uint32_t val;
    uint8_t bytes[8];
    uint32_t i;
    uint32_t n;

    Num cnt = (int)F32(0x1a8);
    F32(0x1a8) = diff(cnt, cnt.v);

    func_02035f58(obj);
    n = func_02015a58(data_020b8e44);
    if (n > 1) {
        for (i = 1; i < n; i++) {
            if (func_0201f704(data_020b93b8, i)) {
                val = 1;
                if (F32(0x1a8) < F32(0x1ac)) {
                    F32(0x1a8) = F32(0x1a8) + 1;
                    ((uint32_t *)FP(0x1a4))[F32(0x1a8) - 1] = val;
                } else {
                    bytes[3] = 0;
                    func_0200d5d4(self + 0x1a4, &val, bytes[3]);
                }
            }
            n = func_02015a58(data_020b8e44);
        }
    }

    bytes[6] = 0;
    func_ov010_021c79f0(FP(0x1a4), FP(0x1a4) + F32(0x1a8) * 4, bytes[6]);

    if (self + 0x1b0 != self + 0x1a4) {
        bytes[1] = 0;
        func_ov010_021cbe8c(self + 0x1b0, FP(0x1a4), FP(0x1a4) + F32(0x1a8) * 4, bytes[1]);
    }

    bytes[5] = 0;
    func_ov010_021cb1e4(FP(0x1b8), FP(0x1b8) + F32(0x1bc) * 4, bytes[5]);

    if (F32(0x1b0) == 0) {
        F32(0x1b0) = 0;
    } else {
        F32(0x1b0) = func_0209a978(F32(0x1b0) - 1, 0x14);
    }
    F32(0x1b0) = F32(0x1b0);
    func_ov005_021961ac(self, (uint8_t)(F32(0x1b4) + 1));

    return func_02035fd0(obj);
}
