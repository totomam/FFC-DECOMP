#include "ffc/types.h"

extern uint8_t data_021413e0;
extern uint8_t data_02141450;
extern int func_02086210(void *p, uint32_t a, uint32_t b);
extern void func_02087874(void *p, uint32_t n);
extern int func_020862c8(uint32_t a, uint32_t b, void *c);
extern void func_02087058(void *p);

typedef struct {
    uint32_t f0;
    void (*f4)(uint32_t, void *);
    void *f8;
    uint32_t pad[13];
    uint32_t f40;
    uint32_t f44;
    uint32_t f48;
    uint32_t f4c;
} G;
extern G data_02141400;

void func_02086040(uint32_t a0, uint32_t b)
{
    uint16_t a16 = a0 & 0xff;
    uint32_t code = 7;
    uint32_t n;
    uint16_t r5;
    void *p;

    n = data_02141400.f48;
    if (n > 0x20) n = 0x20;
    r5 = n;

    if (b == 0 && a16 == 0) {
        p = &data_021413e0;
        if (func_02086210(p, data_02141400.f4c, r5) == 0) {
            code = 6;
            goto cleanup;
        }
        data_02141400.f44 += r5;
        data_02141400.f48 -= r5;
        data_02141400.f4c += r5;
        if (data_02141400.f48 == 0) {
            code = 0;
            goto cleanup;
        }
        n = 0x20;
        func_02087874(p, 0x20);
        if (data_02141400.f48 <= 0x20) n = data_02141400.f48;
        if (func_020862c8(data_02141400.f44, n, p) == 1) return;
        code = 3;
        goto cleanup;
    }
    if (b == 1) {
        code = 3;
        goto cleanup;
    }
    if (a16 == 2) {
        code = 2;
    } else if (a16 == 3) {
        code = 4;
    } else if (a16 == 4) {
        p = &data_021413e0;
        func_02087874(p, 0x20);
        if (func_020862c8(data_02141400.f44, r5, p) == 1) return;
        code = 3;
    }
cleanup:
    data_02141400.f0 = 0;
    data_02141400.f40 = 0;
    if (data_02141400.f4 != 0) {
        void (*cb)(uint32_t, void *) = data_02141400.f4;
        data_02141400.f4 = 0;
        cb(code, data_02141400.f8);
    }
    func_02087058(&data_02141450);
}
