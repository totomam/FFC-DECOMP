#include "ffc/types.h"

extern void func_02052be0(void *a);
extern void func_02052d10(void *a, uint32_t b);
extern void func_02052c94(void *a, uint32_t b);
extern void func_02052d3c(void *a, uint32_t b);
extern void func_02052c04(void *a);
extern void *func_02052d90(const void *a, uint32_t b);

typedef struct {
    void *a;
    uint32_t b;
    uint8_t f;
} Ent;

typedef struct {
    uint8_t pad[0x1c];
    Ent *ents;
} Tbl;

void *func_020635a0(Tbl **h, uint32_t idx, Ent *out)
{
    Tbl *t;
    Ent *e;
    Ent tmp;
    void *ret;

    if (out != 0) {
        t = *h;
        e = &t->ents[idx];
        tmp.a = e->a;
        tmp.b = e->b;
        tmp.f = e->f;
        if (tmp.a != 0) {
            func_02052be0(tmp.a);
            if (tmp.f) {
                func_02052d10(tmp.a, tmp.b);
            }
        }
        if (tmp.a != 0 && !tmp.f) {
            tmp.f = 1;
            func_02052c94(tmp.a, tmp.b);
        }

        if (&tmp != out) {
            if (out->a != 0) {
                if (out->f) {
                    func_02052d3c(out->a, out->b);
                }
                func_02052c04(out->a);
            }
            void *q = tmp.a;
            out->a = q;
            out->b = tmp.b;
            out->f = tmp.f;
            if (q != 0) {
                func_02052be0(q);
                if (out->f) {
                    func_02052d10(out->a, out->b);
                }
            }
        }

        ret = func_02052d90(tmp.a, tmp.b);
        if (tmp.a != 0) {
            if (tmp.f) {
                func_02052d3c(tmp.a, tmp.b);
            }
            func_02052c04(tmp.a);
        }
        return ret;
    } else {
        t = *h;
        e = &t->ents[idx];
        if (e->a != 0 && !e->f) {
            e->f = 1;
            func_02052c94(e->a, e->b);
        }
        return func_02052d90(e->a, e->b);
    }
}
