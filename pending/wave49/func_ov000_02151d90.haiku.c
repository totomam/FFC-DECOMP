#include "ffc/types.h"

extern int func_ov000_02151a9c(uint8_t *obj);
extern void func_020849f4(void *src, void *dst, uint32_t n);
extern void func_020849e0(uint32_t val, void *dst, uint32_t n);

void func_ov000_02151d90(int a, uint8_t *base)
{
    uint8_t *arr = base + 0xbf4;
    uint8_t *obj = base + 0xc20;
    uint8_t *fp = base + 0x14bc;
    int cur = a;
    int i;
    int found;
    uint8_t tmp4[4];
    uint8_t tmp2[0xc0];

    for (i = a - 1; i >= 0; i--) {
        found = 0;
        if (((*fp >> 7) & 1) == 1 && func_ov000_02151a9c(obj + 0xc0 * cur) == 1) {
            if (arr[cur * 4 + 2] < arr[i * 4 + 2]) {
                if (func_ov000_02151a9c(obj + 0xc0 * i) == 0) {
                    found = 1;
                }
            } else {
                found = 1;
            }
        } else if (arr[cur * 4 + 1] >= 0x13 && arr[cur * 4 + 1] <= 0x16) {
            if (arr[cur * 4 + 2] >= arr[i * 4 + 2]) {
                if (arr[i * 4 + 1] >= 0x13 && arr[i * 4 + 1] <= 0x16) {
                    found = 1;
                } else if ((((arr[i * 4 + 3] >> 7) & 1) + (arr[i * 4 + 3] & 0x7f)) + arr[i * 4] + arr[i * 4 + 1] + arr[i * 4 + 2] == 0) {
                    found = 1;
                }
            }
        } else {
            if (arr[cur * 4 + 2] < arr[i * 4 + 2]) {
                if (arr[i * 4 + 1] >= 0x13 && arr[i * 4 + 1] <= 0x16) {
                    found = 1;
                }
            } else {
                if (((*fp >> 7) & 1) == 1) {
                    if (func_ov000_02151a9c(obj + 0xc0 * i) == 0) {
                        found = 1;
                    }
                } else {
                    found = 1;
                }
            }
        }

        if (found == 1) {
            func_020849f4(&arr[i * 4], tmp4, 4);
            func_020849f4(&arr[cur * 4], &arr[i * 4], 4);
            func_020849f4(tmp4, &arr[cur * 4], 4);
            func_020849f4(obj + 0xc0 * i, tmp2, 0xc0);
            func_020849f4(obj + 0xc0 * cur, obj + 0xc0 * i, 0xc0);
            func_020849f4(tmp2, obj + 0xc0 * cur, 0xc0);
            cur = i;
        }
    }

    arr += 0x28;
    func_020849e0(0, arr, 4);
    func_020849e0(0, obj + 0x780, 0xc0);
}
