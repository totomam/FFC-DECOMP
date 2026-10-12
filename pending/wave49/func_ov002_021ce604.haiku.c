#include "ffc/types.h"

typedef struct Flag { uint8_t v; } Flag;
typedef struct Elem { uint32_t key; uint32_t val; } Elem;
typedef struct List { Elem *data; uint32_t count; uint32_t cap; } List;
typedef struct Obj { void *a; uint32_t count; } Obj;

extern uint32_t *func_ov002_021d2aa0(void *obj, uint32_t idx);
extern uint32_t func_ov002_02198700(void *a, uint32_t b);
extern void func_ov002_021ac088(uint32_t *out, uint32_t v);
extern void func_ov002_021ac198(uint32_t *out, uint32_t v);
extern void func_ov002_021ac2a8(uint32_t *out, uint32_t v);
extern void func_ov002_021ac39c(uint32_t *out, uint32_t v);
extern uint32_t func_ov002_021aa820(uint32_t v);
extern uint32_t func_ov002_021aa830(uint32_t v);
extern uint32_t func_0209a76c(uint32_t a, uint32_t b);
extern uint32_t func_ov002_021aaa88(uint32_t v);
extern uint32_t func_ov002_021aa778(uint32_t object);
extern void func_ov002_021d2c9c(List *l, Elem *e, Flag z);
extern void func_ov002_021d0120(Elem *d, Elem *end, Flag z);
extern void func_ov002_021d00c8(uint32_t *out, Elem *d, Elem *end, Flag z);
extern void func_ov002_021d2ba0(List *l, Elem *d, Elem *end, Flag z);
extern void func_ov002_021cf450(Elem *d, Elem *end, Flag z);
extern void func_ov002_021ce7d8(Elem *d, Elem *end, Flag z);

void func_ov002_021ce604(uint8_t *self, uint32_t mode, uint32_t flag, uint32_t type, List *list, Obj *obj)
{
    uint32_t i;
    uint32_t v1, v6, r4;
    uint32_t l60, l5c, l58, l54;
    Elem tmp;
    uint32_t out[2];
    Flag z;

    for (i = 0; i < obj->count; i++) {
        uint32_t *e = func_ov002_021d2aa0(obj, i);
        v1 = 0;
        v6 = 0;
        if (type == 1) {
            v1 = e[0];
            v6 = e[1];
        } else if (type == 4) {
            v1 = e[1];
            v6 = e[0];
        }
        r4 = func_ov002_02198700(*(void **)(self + 0xbc), v1);
        func_ov002_02198700(*(void **)(self + 0xbc), v6);
        v6 = 0;
        switch (mode) {
        case 0:
            func_ov002_021ac088(&l60, r4);
            v6 = l60 >> 12;
            break;
        case 1:
            func_ov002_021ac198(&l5c, r4);
            v6 = l5c >> 12;
            break;
        case 2:
            func_ov002_021ac2a8(&l58, r4);
            v6 = l58 >> 12;
            break;
        case 3:
            func_ov002_021ac39c(&l54, r4);
            v6 = l54 >> 12;
            break;
        case 4:
            v6 = func_ov002_021aa820(r4);
            v6 = func_0209a76c(100 * v6, func_ov002_021aa830(r4));
            break;
        case 5:
            v6 = func_ov002_021aaa88(r4);
            break;
        default:
            break;
        }
        tmp.key = func_ov002_021aa778(r4);
        tmp.val = v6;
        if (list->count < list->cap) {
            list->data[list->count] = tmp;
            list->count++;
        } else {
            z.v = 0;
            func_ov002_021d2c9c(list, &tmp, z);
        }
    }

    z.v = 0;
    func_ov002_021d0120(list->data, list->data + list->count, z);
    z.v = 0;
    func_ov002_021d00c8(out, list->data, list->data + list->count, z);
    z.v = 0;
    func_ov002_021d2ba0(list, (Elem *)out[0], list->data + list->count, z);

    switch (flag) {
    case 0:
        z.v = 0;
        func_ov002_021cf450(list->data, list->data + list->count, z);
        return;
    case 1:
        z.v = 0;
        func_ov002_021ce7d8(list->data, list->data + list->count, z);
        return;
    default:
        return;
    }
}
