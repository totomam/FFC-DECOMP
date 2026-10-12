#include "ffc/types.h"

extern int32_t func_ov009_021a5cdc(void *ctx, uint32_t *b, uint32_t *a);

typedef struct {
    uint32_t *dst;
    void *list;
} Out;

typedef struct {
    uint32_t *unk0;
    int32_t count;
    uint32_t *base;
} ListHdr;

void func_ov009_021a59ac(Out *out, uint32_t *a, uint32_t *aend, uint32_t *b,
                         uint32_t *bend, uint32_t *dst, ListHdr *list, void *ctx)
{
    while (a != aend && b != bend) {
        if (func_ov009_021a5cdc(ctx, b, a)) {
            Out t;
            Out *p = &t;
            p->dst = dst;
            p->list = list;
            if (p->dst - ((ListHdr *)p->list)->base < ((ListHdr *)p->list)->count) {
                *p->dst = *b;
            } else {
                if (p->dst != 0) {
                    *p->dst = *b;
                }
                ((ListHdr *)p->list)->count++;
            }
            b++;
        } else {
            Out t;
            Out *p = &t;
            p->dst = dst;
            p->list = list;
            if (p->dst - ((ListHdr *)p->list)->base < ((ListHdr *)p->list)->count) {
                *p->dst = *a;
            } else {
                if (p->dst != 0) {
                    *p->dst = *a;
                }
                ((ListHdr *)p->list)->count++;
            }
            a++;
        }
        dst++;
    }

    if (a != aend) {
        while (a != aend) {
            if (dst - list->base < list->count) {
                *dst = *a;
            } else {
                if (dst != 0) {
                    *dst = *a;
                }
                list->count++;
            }
            a++;
            dst++;
        }
    } else {
        while (b != bend) {
            if (dst - list->base < list->count) {
                *dst = *b;
            } else {
                if (dst != 0) {
                    *dst = *b;
                }
                list->count++;
            }
            b++;
            dst++;
        }
    }

    out->dst = dst;
    out->list = list;
}
