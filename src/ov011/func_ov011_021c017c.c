#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } PairData;

extern void func_ov009_0219a014(void *p);
extern void *func_0203b6fc(void);
extern int func_02036994(void *p, uint32_t idx);
extern void func_ov009_0219a358(void *p);
extern void *func_ov009_0219a390(void *p, PairData d);
extern void func_02056bc0(void *object, void *node);
extern void func_ov009_0219a308(void *p);
extern uint32_t func_ov011_021c02a8(void *obj, PairData d);
extern void *func_02056aec(void *p);
extern void *func_0203b72c(void);
extern void func_02036adc(void *p, uint32_t a, uint32_t b);
extern void func_0201f1a8(uint32_t a, uint32_t b, void *c);
extern PairData data_ov011_021caf30[];
extern PairData data_ov011_021cb104;
extern uint32_t data_020b93b8;

void func_ov011_021c017c(uint8_t *obj, uint32_t idx)
{
    void *o;
    void *s4;
    void *s8;
    void *r;

    obj[0x27a] = 0;
    ((uint8_t *)((void **)obj)[0x5d])[0xa4] = 15;
    func_ov009_0219a014(((void **)obj)[0x5c]);
    o = func_0203b6fc();
    if (func_02036994(obj + 0x220, idx)) {
        void **p = (void **)(obj + 0xd8);
        func_ov009_0219a358(p[idx]);
        r = func_ov009_0219a390(p[idx], data_ov011_021caf30[obj[0x279]]);
        func_02056bc0(o, r);
    } else {
        void **p = (void **)(obj + 0xd8);
        func_ov009_0219a308(p[idx]);
    }
    if (func_02036994(obj + 0x220, obj[0x279])) {
        void **p = (void **)(obj + 0xd8);
        r = func_ov009_0219a390(p[obj[0x279]], data_ov011_021caf30[idx]);
        func_02056bc0(o, r);
    } else {
        void **p = (void **)(obj + 0xd8);
        func_ov009_0219a308(p[obj[0x279]]);
    }
    s4 = (void *)func_ov011_021c02a8(obj, data_ov011_021cb104);
    s8 = func_02056aec(((void **)obj)[0x5d]);
    r = func_0203b72c();
    {
        uint8_t *node = obj + 0x14;
        func_02056bc0(node, r);
        func_02056bc0(node, o);
        func_02056bc0(node, s8);
        func_02056bc0(node, s4);
    }
    func_02036adc(obj + 0x220, obj[0x279], idx);
    func_0201f1a8(data_020b93b8, obj[0x2c9], obj + 0x220);
}
