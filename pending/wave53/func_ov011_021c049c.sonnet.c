#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;

extern void *func_0203b6fc(void);
extern int func_02036388(void *p);
extern int64_t func_0209a76c(int32_t n, int32_t d);
extern void *func_ov011_021c0e1c(void *a, void *b, Pair t, Pair p);
extern void *func_ov009_0219a390(void *node, Pair p);
extern void func_02056bc0(void *object, void *node);
extern Pair data_ov011_021caf30[];
extern Pair data_ov011_021cad30[];
extern Pair data_ov011_021cad60[];

void *func_ov011_021c049c(uint8_t *a, void *b, int32_t c, uint32_t d)
{
    void *obj = func_0203b6fc();
    void *res;

    if (a[0x27b] == 0 && func_02036388(b)) {
        res = func_ov011_021c0e1c(a, b, data_ov011_021cad60[0], data_ov011_021caf30[d]); func_02056bc0(obj, res);
    } else if (a[0x27b] == 1 && !func_02036388(b)) {
        res = func_ov011_021c0e1c(a, b, data_ov011_021cad30[0], data_ov011_021caf30[d]); func_02056bc0(obj, res);
    } else {
        int32_t n = a[0x27d];
        int32_t q = (int32_t)func_0209a76c(c, 10);
        if (q < n) {
            res = func_ov011_021c0e1c(a, b, data_ov011_021cad30[0], data_ov011_021caf30[d]); func_02056bc0(obj, res);
        } else if (q > n) {
            res = func_ov011_021c0e1c(a, b, data_ov011_021cad60[0], data_ov011_021caf30[d]); func_02056bc0(obj, res);
        } else {
            int64_t dv = func_0209a76c(c, 10);
            res = func_ov009_0219a390(((void **)(a + 0xec))[(int32_t)(dv >> 32)], data_ov011_021caf30[d]); func_02056bc0(obj, res);
        }
    }
    return obj;
}
