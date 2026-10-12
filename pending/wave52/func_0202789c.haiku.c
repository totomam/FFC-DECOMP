#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Entry;
typedef struct { uint8_t pad[0x14]; Entry *base; } Tbl;
typedef struct { Tbl *tbl; uint32_t idx; } Ref;
typedef struct { uint32_t *obj; void *lock; _Bool flag; } Guard;

extern char data_021394c4[];
extern char data_021394b4[];
extern char data_021394b8[];
extern char data_02139450[];

extern void func_0208763c(void);
extern void func_02087678(void *lock);
extern void func_0202795c(Guard *out, void *a, Ref *b);
extern uint32_t func_0205816c(void *first, uint32_t second, uint32_t third, uint32_t fourth, uint32_t fifth, uint32_t sixth, uint32_t seventh);
extern void func_02052d98(void *tbl, uint32_t idx, uint32_t z, uint32_t r4, uint32_t entry, uint32_t zz);
extern uint32_t *func_02027a28(void *a, Ref *b);

uint32_t func_0202789c(Ref *p)
{
    Guard g;
    uint32_t r4;

    g.lock = data_021394c4;
    g.flag = 1;
    if (g.flag) {
        func_0208763c();
    }
    func_0202795c(&g, data_021394b4, p);
    if ((void *)g.obj == data_021394b8) {
        r4 = func_0205816c(*(void **)data_02139450, p->tbl->base[p->idx].b, 0, 4, 0, 0, 0);
        func_02052d98(p->tbl, p->idx, 0, r4, p->tbl->base[p->idx].b, 0);
        {
            uint32_t *o = func_02027a28(data_021394b4, p);
            o[3] = 1;
            o[4] = r4;
        }
        if (g.flag) {
            func_02087678(g.lock);
        }
        return r4;
    }
    g.obj[6]++;
    {
        _Bool f = g.flag;
        r4 = g.obj[7];
        if (f) {
            func_02087678(g.lock);
        }
    }
    return r4;
}
