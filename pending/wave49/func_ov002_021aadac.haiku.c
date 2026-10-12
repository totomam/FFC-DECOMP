#include "ffc/types.h"

extern void *data_020b8e44;
extern uint8_t *func_02017734(void *);
extern int func_ov002_0219ffe8(void *);
extern int func_ov002_021c92c0(int, int);
extern void func_02055914(void *, int);
extern uint8_t func_ov002_021aab40(const void *object);
extern int func_ov002_021aa18c(void *);
extern void func_ov002_021aa268(void *, int, int, int);
extern int func_ov002_021acf84(void *);
extern int func_ov002_021a1acc(void *);
extern uint32_t func_0206c184(uint32_t first, uint32_t second);

uint32_t func_ov002_021aadac(uint8_t *p, int unused, int flag, int flag2)
{
    int f2 = flag2;
    uint8_t *s;
    volatile int vflag = flag;
    int ret = 0;
    int s3, s2, r6, a, n, v5, v6, cnt, ok, t, idx;

    s = func_02017734(data_020b8e44);
    s3 = (int8_t)s[3];
    s2 = s[2];
    r6 = s[1];

    if (vflag) {
        if (f2) {
            t = 0x1165;
            if (func_ov002_0219ffe8(*(void **)(p + 0xbc)) == 0) {
                t -= 0xb;
            }
            idx = func_ov002_021c92c0(0, t + r6 - 2);
            func_02055914(*(void **)(p + 0xb8), idx);
        }
        return 0;
    }

    if (func_ov002_021aab40(p) == 8) {
        return 0;
    }

    if (f2) {
        t = 0x112e;
        if (func_ov002_0219ffe8(*(void **)(p + 0xbc)) == 0) {
            t += 0xb;
        }
        idx = func_ov002_021c92c0(0, t + r6 - 2);
        func_02055914(*(void **)(p + 0xb8), idx);
    }

    a = func_ov002_021aa18c(p + 0x190);
    func_ov002_021aa268(p + 0x190, r6, s3, s2);
    v5 = s[5];
    v6 = s[6];

    ok = 0;
    switch (r6) {
    case 0: case 1: case 2: case 3: case 4: case 5: case 6: case 7:
        ok = 0;
        break;
    case 8: case 9: case 10: case 11: case 12:
        ok = 1;
        break;
    default:
        ok = 0;
        break;
    }
    if (ok) {
        *(uint32_t *)(p + 0xd4) |= (uint32_t)1 << r6;
    }
    if (a & ((uint32_t)1 << r6)) {
        ret = 1;
    }

    switch (r6) {
    case 0: case 1: case 2: case 3:
        break;
    case 4:
    {
        *(uint32_t *)(p + 0x244) = 0;
        n = func_ov002_021acf84(p);
        if (v5 >= n) {
            *(uint32_t *)(p + 0x244) = ((uint32_t)1 << n) - 1;
        } else if (v5 != 0) {
            cnt = v5;
            do {
                uint32_t bit;
                int x = func_ov002_021a1acc(*(void **)(p + 0xbc));
                bit = (uint32_t)1 << func_0206c184(x, n);
                if ((*(uint32_t *)(p + 0x244) & bit) == 0) {
                    cnt--;
                    *(uint32_t *)(p + 0x244) |= bit;
                }
            } while (cnt != 0);
        }
    }
        break;
    case 5: case 6: case 7: case 8: case 9: case 10: case 11: case 12:
        break;
    default:
        break;
    }

    *(int *)(p + (r6 << 3) + 0x1dc) = v5;
    *(int *)(p + (r6 << 3) + 0x1e0) = v6;
    return ret;
}
