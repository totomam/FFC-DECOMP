#include "ffc/types.h"

extern void *func_02015ba4(void *unused, uint32_t index);
extern void func_0201762c(void *object, void *arg);
extern void *func_02052d90(void *mar, uint32_t index);
extern void func_02052d3c(void *mar, uint32_t index);
extern void func_02052c04(void *mar);
extern void *func_02053290(void *object);

typedef struct {
    uint16_t id;
    uint16_t v[5];
} Entry;

typedef struct {
    uint32_t pad;
    uint32_t count;
    uint32_t off;
} Table;

typedef struct {
    uint32_t pad;
    void *mar;
    uint32_t idx;
    uint8_t flag;
} Obj;

#define FIN(o) do { void *m_ = (o).mar; Obj *q_ = &(o); if (m_ != 0) { if (q_->flag != 0) { func_02052d3c(q_->mar, q_->idx); } func_02052c04(q_->mar); } func_02053290(q_); } while (0)
void func_02015aa4(Entry *out, void *ctx, uint32_t index, uint32_t sel)
{
    uint16_t key = 0;
    uint8_t *p;
    Obj obj;
    Entry def;
    uint32_t i;
    Entry *e;

    p = func_02015ba4(ctx, index);
    if (p != 0) {
        switch (sel) {
        case 0: break;
        case 1: key = *(uint16_t *)(p + 0x46); break;
        case 2: key = *(uint16_t *)(p + 0x48); break;
        case 3: key = *(uint16_t *)(p + 0x4a); break;
        case 4: key = *(uint16_t *)(p + 0x4c); break;
        default: break;
        }
    }

    func_0201762c(&obj, ctx);

    for (i = 0; i < ((Table *)func_02052d90(obj.mar, obj.idx))->count; i++) {
        Table *t = (Table *)func_02052d90(obj.mar, obj.idx);
        e = (Entry *)((uint8_t *)t + t->off) + i;
        if (key == e->id) {
            *out = *e;
            FIN(obj);
            return;
        }
    }

    *out = def;
    FIN(obj);
}
