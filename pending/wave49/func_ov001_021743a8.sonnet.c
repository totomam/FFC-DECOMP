#include "ffc/types.h"

extern uint32_t func_ov000_02168768(uint32_t h);
extern uint32_t func_ov000_0216876c(uint32_t h);
extern int32_t func_ov001_02171d60(void *p);
extern void func_ov001_02171d4c(void *p);
extern uint32_t func_02092864(const uint8_t *text);
extern uint32_t func_ov001_021721f8(void *self, const uint8_t *text, uint32_t len);
extern uint32_t func_ov001_02173f0c(uint32_t a, void *self, uint32_t b, uint32_t c);
extern uint32_t func_ov001_02171b58(void *p, int32_t x, int32_t y);
extern uint8_t data_ov001_0218fd40[];
extern uint8_t data_ov001_0218fd44[];

uint32_t func_ov001_021743a8(uint8_t *self) {
    uint32_t *r4 = (uint32_t *)(self + 0x168);
    uint32_t n = func_ov000_02168768(r4[0]);
    uint32_t r;

    if (*(int32_t *)(self + 0x68) < *(int32_t *)(self + 0x64)) {
        if (func_ov001_02171d60(self) == 0) {
            return 0;
        }
        if (*(int32_t *)(self + 0x68) < *(int32_t *)(self + 0x64)) {
            return 2;
        }
        func_ov001_02171d4c(self + 0x58);
        if (*(uint32_t *)(self + 0x180) != 0) {
            return 3;
        }
        if (*(uint32_t *)(self + 0x16c) == n) {
            return 1;
        }
    }

    if (*(uint32_t *)(self + 0x180) != 0) {
        uint32_t *p = *(uint32_t **)(self + 0x164);
        if (p[3] != 0 || p[4] != 0) {
            r = func_ov001_021721f8(self, data_ov001_0218fd40, func_02092864(data_ov001_0218fd40));
            if (r == 0) {
                return 0;
            }
            if (r == 2) {
                return 2;
            }
            if (*(uint32_t *)(self + 0x180) == 1) {
                return 3;
            }
        } else {
            *(uint32_t *)(self + 0x180) = 0;
        }
    }

    while ((int32_t)r4[1] < (int32_t)n) {
        uint32_t a = func_ov000_0216876c(r4[0]);
        uint32_t idx = r4[1];
        uint32_t last = func_ov000_02168768(r4[0]) - 1;
        uint32_t c3 = 1;
        uint32_t c2 = 1;
        if (idx == last) {
            c3 = 1;
        } else {
            c3 = 0;
        }
        if (idx == 0) {
            c2 = 1;
        } else {
            c2 = 0;
        }
        r = func_ov001_02173f0c(a, self, c2, c3);
        if (r == 0) {
            return 0;
        }
        if (r == 2) {
            return 2;
        }
        r4[1]++;
    }

    if (*(uint32_t *)(self + 0x198) != 0) {
        int32_t v = *(int32_t *)(self + 0x88);
        if (v > 0) {
            if (func_ov001_02171b58(self + 0x58, *(int32_t *)(self + 0x80), v) == 0) {
                return 0;
            }
            func_ov001_02171d4c(self + 0x7c);
        }
    }

    {
        uint32_t *q = *(uint32_t **)(self + 0x164);
        if (q[3] != 0 && q[5] == 0) {
            if (func_ov001_021721f8(self, data_ov001_0218fd44, func_02092864(data_ov001_0218fd44)) == 0) {
                return 0;
            }
        }
    }

    if (*(int32_t *)(self + 0x68) < *(int32_t *)(self + 0x64)) {
        return 2;
    }
    return 1;
}
