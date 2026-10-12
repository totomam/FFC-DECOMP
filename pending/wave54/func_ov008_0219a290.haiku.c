/* cflags: -lang c++ */
#include "ffc/types.h"

struct Num { int v; Num(int x) : v(x) {} ~Num() {} };
inline int diff(const Num &a, int b) { return a.v - b; }

struct Tab { uint32_t pad[11]; uint32_t a2c, a30, a34, a38, a3c, a40; };

extern "C" {
extern Tab data_ov008_021a77c0;
void *func_0205681c(uint32_t size);
uint32_t func_ov008_02199e40(uint8_t *self, uint32_t idx);
uint32_t func_ov005_02196728(void *obj, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g);
void func_ov005_02197868(uint32_t *out);
void func_ov005_02196c3c(void);
void func_0200d5d4(void *object, void *ptr, uint32_t value);
void func_020695ec(uint8_t *self, uint32_t v);
}

extern "C" void func_ov008_0219a290(uint8_t *self) {
    Tab *t = &data_ov008_021a77c0;
    uint32_t *cnt = (uint32_t *)(self + 0xd0);
    uint32_t old = *cnt;
    *cnt = diff(Num(old), *(int *)(self + 0xd0));
    uint32_t val;

    for (int r5 = 0; r5 < 8; r5++) {
        uint32_t ip = r5 + ((uint32_t)self[0x140] << 3);
        if (*(uint32_t *)(self + 0xf4) > ip) {
            void *p = func_0205681c(0xc4);
            val = (uint32_t)p;
            if (p) {
                int x = r5 % 4;
                int y = r5 / 4;
                uint32_t pos0 = t->a2c + x * t->a34 + y * t->a3c;
                uint32_t pos1 = t->a30 + x * t->a38 + y * t->a40;
                uint32_t f0 = *(uint32_t *)(self + 0xf0);
                uint32_t r = func_ov008_02199e40(self, ip);
                uint32_t v = *(uint32_t *)(f0 + ip * 4);
                val = func_ov005_02196728(p, *(uint32_t *)(self + 0xbc), pos0, pos1, v, r, 2);
            }
        } else {
            void *p = func_0205681c(0xc4);
            val = (uint32_t)p;
            if (p) {
                int x = r5 % 4;
                int y = r5 / 4;
                uint32_t pos0 = t->a2c + x * t->a34 + y * t->a3c;
                uint32_t pos1 = t->a30 + x * t->a38 + y * t->a40;
                uint32_t o;
                func_ov005_02197868(&o);
                val = func_ov005_02196728(p, *(uint32_t *)(self + 0xbc), pos0, pos1, o, 0, 2);
            }
            func_ov005_02196c3c();
        }

        if (*(uint32_t *)(self + 0xd0) < *(uint32_t *)(self + 0xd4)) {
            uint32_t d = *cnt;
            uint32_t *arr = *(uint32_t **)(self + 0xcc);
            *cnt = d + 1;
            arr[d] = val;
        } else {
            uint32_t z = 0;
            func_0200d5d4(self + 0xcc, &val, z);
        }
        func_020695ec(self, val);
    }
}
