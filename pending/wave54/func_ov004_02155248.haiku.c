#include "ffc/types.h"

extern uint32_t func_ov004_0214fb20(void *obj, uint32_t idx);
extern uint32_t func_ov004_0214facc(void *obj);
extern void func_0200d5d4(void *a, void *b, uint32_t v);
extern uint32_t func_0206c184(uint32_t first, uint32_t second);
extern void *func_0203b95c(uint32_t a, void *b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern void func_ov004_0214e830(void *out, void *obj, uint32_t x);
extern void func_ov004_0214fab4(void *out, void *obj, uint32_t x);
extern void *func_0203b688(uint32_t x);
extern void *func_02056aec(void *obj);
extern void *func_0203b708(uint32_t x);
extern void func_02056bc0(void *object, void *node);
extern void func_0200d5ec(void *p);
extern uint32_t data_ov004_021596c4[];

uint32_t func_ov004_02155248(void *self, uint32_t param)
{
    uint8_t *s = (uint8_t *)self;
    uint32_t tmp;
    uint32_t pa[2];
    uint32_t pb[2];
    uint32_t dd[2];
    uint32_t i;
    uint32_t *arr;
    uint32_t cnt;
    uint32_t cap;
    uint32_t n;
    volatile uint32_t ret = 0;
    uint32_t v;
    void *obj;
    void *elem;
    void *r7;
    void *o5;
    void **vt;
    uint32_t idx;

    n = func_ov004_0214fb20(*(void **)(s + 0xe4), param);
    if (n != 0) {
        arr = (uint32_t *)ret;
        cnt = ret;
        cap = ret;
        i = ret;
        for (; i < n; i++) {
            if (func_ov004_0214facc(*(void **)(s + 0xe4))) {
                if (cnt < cap) {
                    cnt++;
                    arr[cnt - 1] = i;
                } else {
                    ((uint8_t *)&tmp)[1] = 0;
                    v = ((uint8_t *)&tmp)[1];
                    func_0200d5d4(&arr, &i, v);
                }
            }
        }
        if (cnt != 0) {
            idx = func_0206c184(*(uint32_t *)(s + 0xf0), cnt);
            elem = (void *)arr[idx];
            ret = 1;
            obj = func_0203b95c(data_ov004_021596c4[3], *(void **)(s + 0xe0), 0, 1, param, ret);
            vt = *(void ***)obj;
            ((void (*)(void *, uint32_t, uint32_t))vt[14])(obj, 2, 0);
            vt = *(void ***)obj;
            ((void (*)(void *))vt[10])(obj);
            func_ov004_0214e830(pa, *(void **)(s + 0xe4), 0);
            func_ov004_0214fab4(pb, *(void **)(s + 0xe4), (uint32_t)elem);
            dd[0] = pb[0] - pa[0];
            dd[1] = pb[1] - pa[1];
            vt = *(void ***)obj;
            {
                uint32_t res = ((uint32_t (*)(void *, uint32_t, uint32_t))vt[3])(obj, dd[0], dd[1]);
                elem = func_0203b688(res);
            }
            r7 = func_02056aec(obj);
            func_02056bc0(elem, func_0203b708(param));
            func_02056bc0(elem, r7);
            o5 = *(void **)(s + 0x254);
            func_02056bc0(o5, obj);
            func_02056bc0(o5, elem);
        }
        func_0200d5ec(&arr);
    }
    return ret;
}
