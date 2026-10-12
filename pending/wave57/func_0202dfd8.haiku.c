#include "ffc/types.h"

extern void func_0202b264(void *p, int v);
extern void func_02080a40(void *p);
extern void func_02080aa0(void *a, void *b, int c, int d, int e);
extern int func_0209a76c(int a, int b);
extern void func_02080c9c(void *buf, int16_t a, int16_t b);
extern void func_02080cc0(void *buf, int16_t a, int16_t b);
extern void func_02080ce4(void *buf, int16_t a, int16_t b);
extern void func_02080d08(void *buf, void *a, void *b);
extern void func_02024c78(void *a, void *b);
extern int16_t data_020a1bd0[];

typedef uint64_t Pair;

void func_0202dfd8(uint8_t *self)
{
    uint8_t buf[0x40];
    int idx;
    int r3;
    Pair *s;
    Pair *d;
    uint32_t n;

    func_0202b264(*(void **)(self + 0x58), 1);
    func_02080a40(self);
    func_02080aa0(self, self, *(int *)(self + 0x4c), *(int *)(self + 0x50), *(int *)(self + 0x54));

    idx = ((uint16_t)func_0209a76c(*(int *)(self + 0x40) << 4, 360 )) >> 4;
    func_02080c9c(buf, data_020a1bd0[idx * 2], data_020a1bd0[idx * 2 + 1]);
    func_02080d08(buf, self, self);

    idx = ((uint16_t)func_0209a76c(*(int *)(self + 0x44) << 4, 360)) >> 4;
    func_02080cc0(buf, data_020a1bd0[idx * 2], data_020a1bd0[idx * 2 + 1]);
    func_02080d08(buf, self, self);

    idx = ((uint16_t)func_0209a76c(*(int *)(self + 0x48) << 4, 360)) >> 4;
    func_02080ce4(buf, data_020a1bd0[idx * 2], data_020a1bd0[idx * 2 + 1]);
    func_02080d08(buf, self, self);

    if (self[0x60]) {
        r3 = *(int *)(self + 0x5c);
    } else {
        r3 = 0;
    }
    func_02080aa0(self, self, 0, -r3, 0);

    func_02024c78(*(void **)(*(uint8_t **)(self + 0x58) + 0x34), self);

    d = (Pair *)(*(uint8_t **)(self + 0x58) + 0x78);
    n = 8;
    s = (Pair *)self;
    do {
        uint64_t t = *s;
        *d = t;
        s++;
        d++;
    } while (--n);
}
