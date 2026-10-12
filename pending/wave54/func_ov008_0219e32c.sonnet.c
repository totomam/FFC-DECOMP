/* cflags: -lang c++ */
#include "ffc/types.h"
struct Num { int v; Num(int x) : v(x) {} ~Num() {} };
inline int diff(const Num &a, int b) { return b - a.v; }

struct FfcMarDecoded;

typedef struct {
    uint32_t w0;
    void *mar;
    uint32_t idx;
    uint8_t flag;
} Loc;

typedef struct {
    uint8_t pad0[0xf4];
    uint32_t *arr;
    uint32_t cnt;
    uint32_t cap;
    uint8_t b100;
    uint8_t b101;
} Obj;

extern uint32_t data_020b8e44;
extern uint32_t data_020b93b8;

extern "C" void func_02018ec8(void *out, uint32_t v);
extern "C" uint32_t func_02017fa8(uint32_t v);
extern "C" void *func_02052d90(const FfcMarDecoded *mar, uint32_t index);
extern "C" uint32_t func_0201bfa4(uint32_t a, uint32_t b);
extern "C" uint32_t func_0201bf6c(uint32_t a, uint32_t b);
extern "C" void func_0200d5d4(void *object, void *val, bool v);
extern "C" void func_02052d3c(void *mar, uint32_t idx);
extern "C" void func_02052c04(void *mar);
extern "C" void *func_02053290(void *object);

extern "C" void func_ov008_0219e32c(Obj *o)
{
    uint32_t **pa;
    uint8_t fl[4];
    uint32_t i;
    Loc s;
    uint8_t *base;
    uint8_t *e;
    uint32_t n;
    int a = *(volatile uint32_t *)&o->cnt;
    o->cnt = diff(a, o->cnt);
    func_02018ec8(&s, data_020b8e44);

    for (i = 1; i < func_02017fa8(data_020b8e44); i++) {
        base = (uint8_t *)func_02052d90((const FfcMarDecoded *)s.mar, s.idx);
        e = base + ((uint32_t *)(base + *(uint32_t *)(base + 8)))[i];
        if (*(uint16_t *)e != 0 && *(uint32_t *)(e + 8) != 0) {
            if (func_0201bfa4(data_020b93b8, i) == 0) {
                if (func_0201bf6c(data_020b93b8, *(uint16_t *)(e + 4)) != 0) {
                    if (o->cnt < o->cap) {
                        o->arr[o->cnt] = i;
                        o->cnt++;
                    } else {
                        func_0200d5d4(&o->arr, &i, false);
                    }
                }
            }
        }
    }

    if (o->cnt == 0) {
        n = 0;
    } else {
        n = (o->cnt - 1) >> 3;
    }
    o->b101 = n;
    o->b100 = 0;

    if (s.mar != 0) {
        if (s.flag != 0) {
            func_02052d3c(s.mar, s.idx);
        }
        func_02052c04(s.mar);
    }
    func_02053290(&s);
}
