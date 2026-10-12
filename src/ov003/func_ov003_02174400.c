#include "ffc/types.h"

extern void func_02017134(void *out, uint32_t v);
extern void *func_02052d90(void *mar, uint32_t index);
extern void func_0201c220(uint32_t a, uint32_t b, uint32_t c);
extern void func_ov003_02174e74(void *obj, int32_t state);
extern void func_02052d3c(void *mar, uint32_t index);
extern void func_02052c04(void *mar);
extern void *func_02053290(void *object);
extern uint32_t data_020b8e44;
extern uint32_t data_020b93b8;
extern int32_t data_020aeb84;

typedef struct {
    int32_t x;
    void *mar;
    uint32_t idx;
    uint8_t flag;
} Loc;

typedef struct {
    uint32_t p0;
    uint32_t p1;
    int32_t count;
    int32_t arrOff;
} Mar;

typedef struct {
    uint8_t pad[0x88];
    int32_t s88;
    int32_t s8c;
    int32_t s90;
    int32_t s94;
} Obj;

typedef struct {
    int16_t key;
    int16_t a;
    int16_t val;
    uint16_t flag;
} Ent;

void func_ov003_02174400(Obj *p)
{
    Loc l;
    Mar *m;
    int32_t count;
    int32_t i;
    Ent *e;
    Loc *q;

    func_02017134(&l, data_020b8e44);
    m = (Mar *)func_02052d90(l.mar, l.idx);
    count = m->count;
    if (p->s88 == -2) {
        if (p->s94 == 0) {
            p->s88 = p->s90;
            func_0201c220(data_020b93b8, 0x4b, 0);
            data_020aeb84 = -1;
            func_ov003_02174e74(p, 1);
        } else {
            p->s88 = p->s94;
            for (i = 0; i < count; i++) {
                m = (Mar *)func_02052d90(l.mar, l.idx);
                e = (Ent *)((uint8_t *)m + m->arrOff) + i;
                if (p->s94 == e->key) {
                    p->s94 = e->val;
                    break;
                }
            }
            func_ov003_02174e74(p, 5);
        }
    } else {
        for (i = 0; i < count; i++) {
            m = (Mar *)func_02052d90(l.mar, l.idx);
            e = (Ent *)((uint8_t *)m + m->arrOff) + i;
            if (p->s88 == e->key) {
                if (e->flag != 0) {
                    func_0201c220(data_020b93b8, 0x4b, e->flag);
                    func_ov003_02174e74(p, 7);
                } else {
                    p->s94 = p->s88;
                    p->s88 = 0;
                    func_ov003_02174e74(p, 5);
                }
                break;
            }
        }
    }
    q = &l;
    if (q->mar != 0) {
        if (q->flag != 0) {
            func_02052d3c(q->mar, q->idx);
        }
        func_02052c04(q->mar);
    }
    func_02053290(q);
}
