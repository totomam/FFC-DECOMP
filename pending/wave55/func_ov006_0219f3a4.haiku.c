#include "ffc/types.h"

typedef struct {
    void *(*alloc)(uint32_t size);
    uint32_t reserved[2];
    void (*free)(void *p);
} HeapVt;

extern HeapVt data_ov006_021bafc0;
extern uint32_t data_ov006_021bafe0;

extern int func_ov006_0219fa6c(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern void func_020883e4(void *p);
extern void func_020884b4(void *p, uint32_t a, uint32_t b, void *cb, uint32_t c);
extern int func_02087508(void *base, uint32_t *state, uint32_t n);
extern int func_ov006_0219fa28(void *p, uint32_t n);
extern int func_ov006_0219fb5c(void);
extern void func_ov006_0219f128(void *p, void *q);
extern void func_02088548(void *p);
extern void func_ov006_0219f1fc(void);

int func_ov006_0219f3a4(uint8_t **out)
{
    int ret = -1;
    int flag = 1;
    uint32_t state;
    int found = 0;
    int n = found;
    int lvl = found;
    uint8_t *buf;
    uint8_t *blk;
    uint8_t *p;
    uint8_t *q;
    uint32_t tmp[11];
    int i;

    if (data_ov006_021bafc0.alloc == 0 || data_ov006_021bafc0.free == 0) {
        return -1;
    }
    buf = data_ov006_021bafc0.alloc(0x3000);
    if (buf == 0) {
        return -1;
    }
    p = buf;
    if (func_ov006_0219fa6c(found, found, found, 0x30bffe) == 0) {
        goto L154;
    }
    func_020883e4(tmp);
    func_020884b4(tmp, 0x3fec42, found, func_ov006_0219f1fc, 0x13);

    do {
        func_02087508(&data_ov006_021bafe0, &state, 1);
        switch (state) {
        case 4:
        case 8:
        case 18:
            break;
        case 5:
            if (found == 0) {
                if (lvl >= 8) {
                    n = func_ov006_0219fa28(p, 0x40);
                    if (func_ov006_0219fb5c() == 0) {
                        goto L13a;
                    }
                    found = 1;
                } else {
                    lvl++;
                }
            }
            break;
        case 10:
            flag = 0;
            ret = 0;
            break;
        case 19:
            if (found == 0) {
                if (lvl != 0) {
                    n = func_ov006_0219fa28(p, 0x40);
                }
                if (func_ov006_0219fb5c() == 0) {
                    goto L13a;
                }
                found = 1;
            }
            break;
        default:
            goto L13a;
        }
    } while (flag);

    if (n == 0) {
        blk = data_ov006_021bafc0.alloc(0x58);
    } else {
        blk = data_ov006_021bafc0.alloc(0x54 * (n - 1) + 0x58);
    }
    if (blk == 0) {
        goto L13a;
    }
    *out = blk;
    *(int *)blk = n;
    if (n <= 0) {
        goto L13a;
    }
    found = 0;
    q = blk + 4;
    for (i = 0; i < n; i++) {
        func_ov006_0219f128(p, q);
        p += 0xc0;
        q += 0x54;
    }

L13a:
    func_02088548(tmp);
    do {
        i = func_02087508(&data_ov006_021bafe0, &state, 0);
    } while (i == 1);

L154:
    data_ov006_021bafc0.free(buf);
    return ret;
}
