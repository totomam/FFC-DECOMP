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
        struct { Flag za[4]; Flag zc[4]; uint32_t pad[9]; uint32_t out[2]; uint32_t p2; Elem tmp; int32_t l54, l58, l5c, l60; } L;

    for (i = 0; i < obj->count; i++) {
        uint32_t *e = func_ov002_021d2aa0(obj, i);
        v1 = 0;
        v6 = 0;
        switch (type) {
        case 1: v1 = e[0]; v6 = e[1]; break;
        case 4: v1 = e[1]; v6 = e[0]; break;
        default: break;
        }
        r4 = func_ov002_02198700(*(void **)(self + 0xbc), v1);
        func_ov002_02198700(*(void **)(self + 0xbc), v6);
        v6 = 0;
        switch (mode) {
        case 1:
            func_ov002_021ac088(&L.l60, r4);
            v6 = L.l60 >> 12;
            break;
        case 2:
            func_ov002_021ac198(&L.l5c, r4);
            v6 = L.l5c >> 12;
            break;
        case 3:
            func_ov002_021ac2a8(&L.l58, r4);
            v6 = L.l58 >> 12;
            break;
        case 4:
            func_ov002_021ac39c(&L.l54, r4);
            v6 = L.l54 >> 12;
            break;
        case 5:
            v6 = func_ov002_021aa820(r4);
            v6 = func_0209a76c(100 * v6, func_ov002_021aa830(r4));
            break;
        case 6:
            v6 = func_ov002_021aaa88(r4);
            break;
        default:
            break;
        }
        L.tmp.key = func_ov002_021aa778(r4);
        L.tmp.val = v6;
        if (list->count < list->cap) {
            list->count++;
            {
                Elem *src = &L.tmp;
                Elem *d = list->data + (list->count - 1);
                d->key = src->key;
                d->val = src->val;
            }
        } else {
            L.za[1].v = 0;
            func_ov002_021d2c9c(list, &L.tmp, L.za[1]);
        }
    }

    L.zc[2].v = 0;
    func_ov002_021d0120(list->data, list->data + list->count, L.zc[2]);
    Elem *end = list->data + list->count;
    L.zc[1].v = 0;
    func_ov002_021d00c8(L.out, list->data, end, L.zc[1]);
    L.za[0].v = 0;
    func_ov002_021d2ba0(list, (Elem *)L.out[0], end, L.za[0]);

    switch (flag) {
    case 0:
        L.zc[0].v = 0;
        func_ov002_021cf450(list->data, list->data + list->count, L.zc[0]);
        return;
    case 1:
        L.za[3].v = 0;
        func_ov002_021ce7d8(list->data, list->data + list->count, L.za[3]);
        return;
    default:
        return;
    }
}
