#include "ffc/types.h"

extern int32_t func_ov000_0216551c(uint32_t a, const char *b, uint32_t c, uint32_t d);
extern int32_t func_ov000_021655a0(uint32_t a);
extern void func_ov001_0217ef50(void *a, int32_t b, const void *c);
extern void func_ov001_021788f0(void *a, int32_t b, int32_t c);
extern void func_ov000_021652a8(int32_t a, int32_t b, int32_t c, const void *d, ...);
extern void *func_ov000_021653d4(uint32_t n);
extern void func_02090380(void *destination, const void *source, uint32_t length);
extern void func_ov000_021653f4(void *p);
extern char data_ov001_021905b8[];
extern char data_ov001_021905e0[];
extern uint32_t data_ov001_02194c20;
extern char data_ov001_02190604[];

int32_t func_ov001_02178364(void *a, uint32_t b, const char *c, uint32_t d,
                            uint32_t *r6, uint32_t *r7, int8_t *r5)
{
    int32_t r4 = func_ov000_0216551c(b, c, d, 0);
    if (r4 == -1) {
        int32_t r = func_ov000_021655a0(b);
        if (r != -6 && r != -0x1a && r != -0x4c) {
            if (r5[0] == 'P' && r5[1] == 'R') {
                return 3;
            }
            func_ov001_0217ef50(a, 5, data_ov001_021905b8);
            func_ov001_021788f0(a, 3, 0);
            return 3;
        }
        *r7 = 0;
    } else if (r4 == 0) {
        func_ov000_021652a8(1, 0, 0x10, data_ov001_021905e0, r5);
        *r7 = 0;
        *r6 = 1;
        return 0;
    } else {
        char *p = func_ov000_021653d4(r4 + 1);
        func_02090380(p, c, r4);
        p[r4] = 0;
        uint32_t idx = data_ov001_02194c20;
        data_ov001_02194c20 = idx + 1;
        func_ov000_021652a8(1, 0, 0x20, data_ov001_02190604, idx, r5, p);
        func_ov000_021653f4(p);
        *r7 = r4;
    }
    *r6 = 0;
    return 0;
}
