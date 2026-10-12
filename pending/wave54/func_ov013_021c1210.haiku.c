#include "ffc/types.h"

extern void func_0200a630(void *p);
extern void func_02051248(void *a, void *b);
extern void func_0200b65c(void *a, void *b);
extern void *func_020059cc(void *object);
extern void *func_0200a678(void *object);
extern void func_020095b8(void *a, void *b);
extern void func_ov013_021c1e94(void *a, void *b, uint32_t c);
extern void func_ov013_021c1e3c(void *a, void *b, uint32_t c);
extern void func_ov013_021c1010(uint32_t a, uint32_t b);
extern void func_ov013_021c132c(void *a);

typedef struct {
    uint32_t key;
    uint32_t val[3];
} Entry;

typedef struct {
    uint8_t pad0[0xc];
    uint32_t type;
    uint16_t id;
} Ev;

typedef struct {
    uint8_t pad0[0xe8];
    uint8_t f8;
    uint8_t f9;
    uint8_t pad1[2];
    uint32_t ec;
    Entry *arr;
    uint32_t count;
    uint32_t cap;
} Self;

void func_ov013_021c1210(void *a0, void *a1)
{
    Self *self = (Self *)a0;
    Ev *ev = (Ev *)a1;
    uint32_t i;
    void *pa;
    struct { uint8_t x; uint8_t f; } fs;
    uint8_t b2[12];
    uint8_t b1[12];
    Entry ent;

    switch (ev->type) {
    case 5:
        fs.f = 0;
        self->f9 = 0;
        self->f8 = 0;
        for (i = 0; i < 3; i++) {
            ent.val[i] = 0;
        }
        ent.key = ev->id;
        func_0200a630(b1);
        func_02051248(b2, b1);
        func_0200b65c(ent.val, b2);
        func_020059cc(b2);
        func_0200a678(b1);
        if (self->count < self->cap) {
            Entry *e = &self->arr[self->count];
            if (e != 0) {
                e->key = ent.key;
                func_020095b8(e->val, ent.val);
            }
            self->count = self->count + 1;
        } else {
            func_ov013_021c1e94(&self->arr, &ent.key, fs.f);
        }
        func_020059cc(ent.val);
        break;
    case 6:
        if (self->count > 0) {
            pa = &self->arr;
            for (i = 0; i < self->count; i++) {
                Entry *e = &self->arr[i];
                if (ev->id == e->key) {
                    fs.f = 0;
                    func_ov013_021c1e3c(pa, e, fs.f);
                    i--;
                }
            }
        }
        func_ov013_021c1010(self->ec, ev->id - 1);
        func_ov013_021c132c(self);
        break;
    default:
        break;
    }
}
