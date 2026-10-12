/* cflags: -lang c++ */
#include "ffc/types.h"

struct A { uint8_t c; };
inline A *at(A *b, int i) { return b + i; }
struct Num { int v; Num(int x) : v(x) {} ~Num() {} };
inline int diff(const Num &a, int b) { return a.v - b; }

extern "C" {
void func_02035f58(void *p);
void *func_02035fd0(void *p);
uint32_t func_02015a58(void *obj);
uint32_t func_0201f704(void *obj, uint32_t i);
void func_0200d5d4(void *object, void *elem, A value);
void func_ov010_021c79f0(void *a, void *b, A c);
void func_ov010_021cbe8c(void *a, void *b, void *c, A d);
void func_ov010_021cb1e4(void *a, void *b, A c);
int func_0209a978(int n, int sz);
void func_ov005_021961ac(void *self, uint8_t v);
extern void *data_020b8e44;
extern void *data_020b93b8;
}

#define F32(off) (*(uint32_t *)((uint8_t *)self + (off)))
#define FP(off) (*(uint8_t **)((uint8_t *)self + (off)))

extern "C" void func_ov010_021cb078(uint8_t *self)
{
    uint8_t obj[0x60];
    struct LL { A b[7]; A pad[0x11]; uint32_t val; } L;
    uint32_t i;
    A *bp = L.b;

    Num cnt = (int)F32(0x1a8);
    F32(0x1a8) = diff(cnt, cnt.v);

    func_02035f58(obj);
    i = 1;
    if (func_02015a58(data_020b8e44) > 1) {
        do {
            if (func_0201f704(data_020b93b8, i)) {
                L.val = i;
                if (F32(0x1a8) < F32(0x1ac)) {
                    F32(0x1a8) = F32(0x1a8) + 1;
                    ((uint32_t *)FP(0x1a4))[F32(0x1a8) - 1] = L.val;
                } else {
                    { bp[3].c = 0; func_0200d5d4(self + 0x1a4, &L.val, bp[3]); }
                }
            }
            i = (uint8_t)(i + 1);
        } while (i < func_02015a58(data_020b8e44));
    }

    func_ov010_021c79f0(FP(0x1a4), FP(0x1a4) + F32(0x1a8) * 4, bp[6]);

    if (self + 0x1b0 != self + 0x1a4) {
        bp[1].c = 0;
        func_ov010_021cbe8c(self + 0x1b0, FP(0x1a4), FP(0x1a4) + F32(0x1a8) * 4, bp[1]);
    }
    if (self + 0x1bc != self + 0x1a4) {
        bp[0].c = 0;
        func_ov010_021cbe8c(self + 0x1bc, FP(0x1a4), FP(0x1a4) + F32(0x1a8) * 4, bp[0]);
    }

    func_ov010_021cb1e4(FP(0x1bc), FP(0x1bc) + F32(0x1c0) * 4, bp[5]);

    if (F32(0x1a8) == 0) {
        F32(0x1cc) = 0;
    } else {
        F32(0x1cc) = func_0209a978(F32(0x1a8) - 1, 0x14);
    }
    func_ov005_021961ac(FP(0x198), (uint8_t)(F32(0x1cc) + 1));

    func_02035fd0(obj);
}
