#include "ffc/types.h"

extern void *data_020b8e44;
extern uint32_t func_02017700(void *p);
extern void *func_02056830(uint32_t size);
extern uint32_t func_ov002_021a1acc(uint32_t a);
extern uint32_t func_0206c184(uint32_t first, uint32_t second);
extern void func_02056858(void *p);

typedef struct {
    uint8_t pad[9];
    uint8_t flag;
    uint8_t rest[2];
} Entry;

typedef struct {
    uint8_t pad[8];
    uint32_t count;
    uint32_t off;
} Obj;

uint32_t func_ov002_021a3b08(uint32_t a)
{
    Obj *o;
    uint32_t *arr;
    uint32_t i;
    uint32_t n;
    uint32_t ret;

    o = (Obj *)func_02017700(data_020b8e44);
    n = 0;
    arr = (uint32_t *)func_02056830(o->count << 2);
    for (i = 0; i < o->count; i++) {
        Entry *e = (Entry *)((uint8_t *)o + o->off + 12 * i);
        if (e->flag != 0) {
            arr[n] = i;
            n++;
        }
    }
    n = func_0206c184(func_ov002_021a1acc(a), n);
    ret = arr[n];
    if (arr != 0) {
        func_02056858(arr);
    }
    return ret;
}
