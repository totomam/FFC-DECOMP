#include "ffc/types.h"

extern void *func_ov000_02163350(void);
extern int32_t func_ov001_0218683c(void *);
extern void *func_ov001_02186830(void *, int32_t);
extern int32_t func_ov001_02185e8c(void *, void *, int32_t);
extern uint32_t func_ov000_02159358(int32_t);
extern int32_t func_0209a76c(int32_t, int32_t);
extern void func_ov001_02185e30(void *, void *, int32_t);
extern void func_ov001_02186848(void *, int32_t, void *, int32_t);
extern int32_t data_ov000_0216b134[];
extern int32_t data_ov000_02169744[];

#define GET_ARR() (*(void **)((uint8_t *)func_ov000_02163350() + 0x5e0))

void func_ov000_021622e4(void)
{
    int32_t best = 0;
    int32_t sum = 0;
    int32_t i;
    int32_t j;
    int32_t x;
    int32_t prev;
    int32_t v;
    uint32_t limit;
    int32_t vals[6];

    if (func_ov001_0218683c(GET_ARR()) > 1) {
        i = best;
        if (func_ov001_0218683c(GET_ARR()) > 0) {
            do {
                x = func_ov001_02185e8c(func_ov001_02186830(GET_ARR(), i), data_ov000_0216b134, -1);
                if (x > best) {
                    best = x;
                }
                sum += data_ov000_02169744[i];
                i++;
            } while (i < func_ov001_0218683c(GET_ARR()));
        }

        limit = func_ov000_02159358(100);
        j = 0;
        if (func_ov001_0218683c(GET_ARR()) > 0) {
            do {
                if (j == func_ov001_0218683c(GET_ARR()) - 1) {
                    break;
                }
                if (j > 0) {
                    prev = vals[j - 1];
                } else {
                    prev = 0;
                }
                vals[j] = func_0209a76c(100 * data_ov000_02169744[j], sum);
                vals[j] += prev;
                v = vals[j];
                if (limit < (uint32_t)v) {
                    break;
                }
                j++;
            } while (j < func_ov001_0218683c(GET_ARR()));
        }

        if (best < 0x7fffffff) {
            best++;
        }

        func_ov001_02185e30(func_ov001_02186830(GET_ARR(), j), data_ov000_0216b134, best);
        func_ov001_02186848(GET_ARR(), 0, data_ov000_0216b134, 0);
    }
}
