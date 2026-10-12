#include "ffc/types.h"

extern int32_t func_02092a04(uint8_t *a, uint8_t *b, uint16_t c);
extern void func_ov000_02151cd0(uint8_t a, uint8_t *p, uint32_t b, uint8_t *q);
extern int32_t func_ov000_02151d28(int32_t r, uint8_t *p, uint32_t b, uint8_t *q);

typedef struct {
    uint8_t key[6];
    uint8_t pad[2];
    uint8_t body[0xb8];
} Ent;

int32_t func_ov000_02151bb8(uint8_t a, uint8_t *p, uint32_t b, uint8_t *q)
{
    int32_t ret;
    int32_t i;
    int32_t n;
    Ent *arr;

    ret = -1;
    n = q[0x14c2];
    if (n > 0) {
        uint8_t v4 = p[4];
        arr = (Ent *)(q + 0xc24);

        for (i = 0; i < n; i++) {
            int32_t f1 = 0;
            int32_t f2 = 0;
            int32_t f3 = 0;
            int32_t f4 = 0;
            int32_t f5 = 0;

            if (v4 == arr[i].key[0]) {
                if (p[5] == arr[i].key[1]) {
                    f1 = 1;
                }
            }
            if (f1) {
                if (p[6] == arr[i].key[2]) {
                    f2 = 1;
                }
            }
            if (f2) {
                if (p[7] == arr[i].key[3]) {
                    f3 = 1;
                }
            }
            if (f3) {
                if (p[8] == arr[i].key[4]) {
                    f4 = 1;
                }
            }
            if (f4) {
                if (p[9] == arr[i].key[5]) {
                    f5 = 1;
                }
            }
            if (f5) {
                if (func_02092a04(p + 0xc, arr[i].body - 0, *(uint16_t *)(p + 0xa)) == 0) {
                    ret = i;
                    break;
                }
            }
        }
    }

    if (ret == -1) {
        func_ov000_02151cd0(a, p, b, q);
        if (q[0x14c2] < 10) {
            q[0x14c2]++;
        }
        ret = 10;
    } else {
        ret = func_ov000_02151d28(ret, p, b, q);
    }
    return ret;
}
