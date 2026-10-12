#include "ffc/types.h"

typedef struct Ref {
    uint32_t unused;
    void *ptr;
    uint32_t extra;
    uint8_t owned;
} Ref;

typedef struct Span {
    uint32_t pad0;
    uint32_t count;
    uint32_t off;
} Span;

extern uint32_t data_020b93b8;
extern uint32_t data_020b8e44;
extern uint32_t func_0201c9ac(uint32_t a, uint32_t b);
extern void func_02053234(void *object);
extern void func_02019ac8(void *dst, uint32_t v);
extern void func_020532a4(void *dst, void *src);
extern void func_02052d3c(void *ptr, uint32_t extra);
extern void func_02052c04(void *ptr);
extern void func_02052be0(void);
extern void func_02052d10(void *ptr, uint32_t extra);
extern void *func_02053290(void *object);
extern Span *func_02052d90(void *mar, uint32_t index);

uint32_t func_02047f14(Ref *p, uint8_t **out) {
    Ref obj;
    Ref holder;
    uint32_t v1;
    uint32_t key;
    uint8_t *best;
    uint8_t *e;
    uint32_t i;
    Span *m;
    Ref *h;

    v1 = func_0201c9ac(data_020b93b8, 1);
    key = func_0201c9ac(data_020b93b8, 2);
    func_02053234(&obj);
    obj.ptr = 0;
    obj.owned = 0;
    if (p == 0) {
        p = &obj;
    }
    func_02019ac8(&holder, data_020b8e44);
    func_020532a4(p, &holder);
    if (&holder.ptr != &p->ptr) {
        if (p->ptr != 0) {
            if (p->owned) {
                func_02052d3c(p->ptr, p->extra);
            }
            func_02052c04(p->ptr);
        }
        p->ptr = holder.ptr;
        p->extra = holder.extra;
        p->owned = holder.owned;
        if (p->ptr != 0) {
            func_02052be0();
            if (p->owned) {
                func_02052d10(p->ptr, p->extra);
            }
        }
    }
    h = &holder;
    if (h->ptr != 0) {
        if (h->owned) {
            func_02052d3c(h->ptr, h->extra);
        }
        func_02052c04(h->ptr);
    }
    func_02053290(h);
    m = func_02052d90(p->ptr, p->extra);
    best = (uint8_t *)m + m->off;
    i = 1;
    if (func_02052d90(p->ptr, p->extra)->count > 1) {
        do {
            m = func_02052d90(p->ptr, p->extra);
            e = (uint8_t *)m + m->off + (i << 4);
            if (key < *(uint16_t *)(e + 0xc)) {
                break;
            }
            best = e;
            i++;
        } while (i < func_02052d90(p->ptr, p->extra)->count);
    }
    if (out != 0) {
        *out = best;
    }
    if (v1 < *(uint16_t *)best) {
        if (obj.ptr != 0) {
            if (obj.owned) {
                func_02052d3c(obj.ptr, obj.extra);
            }
            func_02052c04(obj.ptr);
        }
        func_02053290(&obj);
        return 1;
    }
    if (obj.ptr != 0) {
        if (obj.owned) {
            func_02052d3c(obj.ptr, obj.extra);
        }
        func_02052c04(obj.ptr);
    }
    func_02053290(&obj);
    return 0;
}
