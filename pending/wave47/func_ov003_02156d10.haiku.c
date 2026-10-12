#include "ffc/types.h"

extern uint32_t data_020b93b8;
extern uint32_t func_0201d014(uint32_t a, uint32_t b, void *c);
extern uint32_t func_02036be4(void *x);
extern uint32_t func_02005efc(void *object, uint32_t first, ...);
extern uint32_t func_0201a3a0(void *object, const void *third);
extern void func_02005988(void *obj, const void *s);
extern uint32_t func_02052000(void *obj);
extern void *func_020059cc(void *object);
extern uint8_t data_ov003_0217a0f4[];
extern uint32_t data_ov003_02179f80[];

typedef struct {
    uint32_t flag : 1;
    uint32_t rest : 31;
    uint32_t pad;
    void *ptr;
} Str;

uint32_t func_ov003_02156d10(uint8_t *p, uint8_t *q)
{
    uint32_t b[4];
    uint32_t a[3];
    uint32_t idx;
    uint32_t n;
    uint8_t *obj;
    uint32_t fail;
    const char *s;
    Str *qs = (Str *)q;

    func_0201d014(data_020b93b8, *(uint16_t *)(p + 0xac), b);
    n = *(uint32_t *)(*(uint8_t **)(p + 0xa8) + 0x54);
    if (func_02036be4(b) >= n) {
        return 0;
    }
    if (*(uint32_t *)(*(uint8_t **)(p + 0xa8) + 0x64) == 0) {
        return 0;
    }
    idx = func_02036be4(b);
    obj = *(uint8_t **)(p + 0xa8);
    func_02005efc(q, (uint32_t)data_ov003_0217a0f4,
                  obj + ((uint32_t *)(obj + *(uint32_t *)(obj + 0x68)))[idx], 0);
    func_0201a3a0(q, (const void *)data_ov003_02179f80[2]);
    if (!qs->flag) {
        s = (const char *)(q + 1);
    } else {
        s = (const char *)qs->ptr;
    }
    func_02005988(a, s);
    fail = 1;
    if (func_02052000(a) != 0) {
        fail = 0;
    }
    func_020059cc(a);
    if (fail) {
        return 0;
    }
    if (!qs->flag) {
        return (uint32_t)(q + 1);
    }
    return (uint32_t)qs->ptr;
}
