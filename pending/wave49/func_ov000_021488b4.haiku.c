#include "ffc/types.h"

typedef struct {
    uint32_t len;
    uint16_t id;
    uint16_t code;
    uint16_t f1;
    uint16_t f2;
    uint16_t f3;
    uint16_t f4;
    uint8_t name[0x38];
} Buf;

extern void func_ov000_02147e28(void *p, uint32_t n);
extern uint64_t func_020882cc(void);
extern int func_ov000_02147e80(void);
extern void func_020871d8(uint32_t n);
extern uint8_t *func_ov000_02147a70(uint32_t *lenp);
extern uint8_t *func_ov000_02148890(uint8_t *p);
extern void func_02084e04(uint8_t *p, uint32_t a);
extern void func_ov000_02147b7c(uint32_t n);
extern struct { uint8_t pad[0x18]; int (*fn)(void); } data_ov000_0216bc60;

int func_ov000_021488b4(const char *s, uint32_t type, int32_t id, uint32_t a3, uint32_t lim)
{
    Buf b;
    uint32_t count = 0;
    uint8_t *p3;
    uint8_t *p1;
    char c;
    int r7 = 0;
    uint64_t t;
    uint32_t start;
    uint8_t *q;
    uint8_t *end;
    uint32_t n, k, rl, rt;

    b.id = (uint16_t)((id >> 8) | (id << 8));
    b.code = (type == 0x20) ? 0x1001 : 1;
    b.f1 = 0x100;
    b.f2 = 0;
    b.f3 = 0;
    b.f4 = 0;
    b.len = 0;

    p3 = b.name;
    p1 = b.name + 1;
    c = *s++;
    while (c != 0) {
        if ((p1 - (uint8_t *)&b.id) > 0x3c) {
            return -1;
        }
        if (c != '.') {
            count++;
            *p1++ = c;
            r7 = count;
        } else if (count != 0) {
            *p3 = (uint8_t)count;
            p3 = p1;
            p1++;
            r7 = 0;
            count = 0;
        }
        b.len = count;
        c = *s++;
    }

    *p3 = (uint8_t)r7;
    r7 = 0;
    p1[0] = 0;
    p1[1] = (uint8_t)(type >> 8);
    p1[2] = (uint8_t)type;
    p1[3] = 0;
    p1[4] = 1;
    p1 += 5;
    func_ov000_02147e28(&b.id, (uint32_t)(p1 - (uint8_t *)&b.id));

    t = func_020882cc();
    start = (uint32_t)(t >> 16);

    do {
        if (func_ov000_02147e80() == 0) {
            func_020871d8(10);
        } else {
            q = func_ov000_02147a70(&b.len);
            if (b.len > 12 && (uint32_t)id == (uint32_t)((q[0] << 8) | q[1])) {
                uint32_t low = q[3] & 0xf;
                if (low == 3) {
                    r7 = -1;
                } else if (low == 0) {
                    end = q + b.len;
                    n = (uint32_t)((q[4] << 8) | q[5]);
                    q += 0xc;
                    for (k = n; k != 0; k--) {
                        q = func_ov000_02148890(q) + 4;
                    }
                    if (q < end) {
                        for (;;) {
                            q = func_ov000_02148890(q);
                            rl = (uint32_t)((q[8] << 8) | q[9]);
                            rt = (uint32_t)((q[0] << 8) | q[1]);
                            if (rt == type) {
                                if (type == 0xc) {
                                    if (rl > lim) {
                                        r7 = 2;
                                    } else {
                                        func_02084e04(q + 10, a3);
                                        r7 = 1;
                                    }
                                } else {
                                    r7 = (int)(((uint32_t)((q[6 + rl] << 8) | q[7 + rl]) & 0xffff) |
                                               ((uint32_t)((q[8 + rl] << 8) | q[9 + rl]) & 0xffff));
                                }
                                break;
                            }
                            q += rl + 10;
                            if (!(q < end)) {
                                break;
                            }
                        }
                    }
                }
            }
            func_ov000_02147b7c(b.len);
        }
    } while (data_ov000_0216bc60.fn() != 0 && r7 == 0 &&
             (int32_t)((uint32_t)(func_020882cc() >> 16) - start) < 15);

    return r7;
}
