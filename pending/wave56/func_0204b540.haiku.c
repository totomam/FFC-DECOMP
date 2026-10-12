#include "ffc/types.h"

extern int32_t func_0204b4b4(void *ctx, int32_t start, int32_t *p1, int32_t *p2);
extern int32_t func_0204b4f0(void *ctx, int32_t *p1, int32_t *p2);

int32_t func_0204b540(void *ctx, int32_t start, int32_t end, int32_t *pOut, int32_t *pFlag)
{
    int32_t a;
    int32_t b;
    int32_t last;
    int32_t flag;
    int32_t result;
    int32_t c;

    if (pOut != 0) {
        *pOut = -1;
    }
    if (start < end) {
        result = -1;
        flag = 0;
        func_0204b4b4(ctx, start, &a, &b);
        if (start < end) {
            last = end - 1;
            do {
                c = func_0204b4f0(ctx, &a, &b);
                if (c == 0x3a) {
                    if (pOut != 0 && *pOut < 0) {
                        *pOut = start;
                    }
                }
                if (flag != 0) {
                    if (c == 10) {
                        if (start == end - 1) {
                            result = 0;
                        } else {
                            result = start + 1;
                        }
                        if (pFlag != 0) {
                            *pFlag = 2;
                        }
                    }
                    return result;
                }
                if (c == 0xd) {
                    if (start == last) {
                        result = 0;
                    } else {
                        result = start + 1;
                    }
                    flag = 1;
                    if (pFlag != 0) {
                        *pFlag = 1;
                    }
                }
                if (c == 10) {
                    if (start == end - 1) {
                        result = 0;
                    } else {
                        result = start + 1;
                    }
                    if (pFlag != 0) {
                        *pFlag = 1;
                    }
                    return result;
                }
                start++;
            } while (start < end);
        }
    }
    return -1;
}
