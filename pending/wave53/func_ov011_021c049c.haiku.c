#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;

extern void *func_0203b6fc(void);
extern int func_02036388(void *p);
extern uint64_t func_0209a76c(uint32_t n, uint32_t d);
extern void *func_ov011_021c0e1c(void *a, void *b, uint32_t x, uint32_t y, Pair p);
extern void *func_ov009_0219a390(void *node, Pair p);
extern void func_02056bc0(void *object, void *node);
extern Pair data_ov011_021caf30[];
extern uint32_t data_ov011_021cad30[];
extern uint32_t data_ov011_021cad60[];

void *func_ov011_021c049c(uint8_t *a, void *b, uint32_t c, uint32_t d)
{
    void *obj = func_0203b6fc();
    void *res;
    uint32_t *tbl;

    if (a[0x27b] == 0 && func_02036388(b)) {
        tbl = data_ov011_021cad60;
    } else if (a[0x27b] == 1 && !func_02036388(b)) {
        tbl = data_ov011_021cad30;
    } else {
        uint32_t n = a[0x27d];
        uint64_t dv = func_0209a76c(c, 10);
        if ((uint32_t)dv < n) {
            tbl = data_ov011_021cad30;
        } else if ((uint32_t)dv > n) {
            tbl = data_ov011_021cad60;
        } else {
            res = func_ov009_0219a390(((void **)(a + 0xec))[(uint32_t)(dv >> 32)], data_ov011_021caf30[d]);
            func_02056bc0(obj, res);
            return obj;
        }
    }
    res = func_ov011_021c0e1c(a, b, tbl[0], tbl[1], data_ov011_021caf30[d]);
    func_02056bc0(obj, res);
    return obj;
}
