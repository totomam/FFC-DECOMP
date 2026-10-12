#include "ffc/types.h"

extern uint8_t data_021394c4[];
extern uint8_t data_02139494[];
extern uint8_t data_02139498[];
extern uint8_t data_02139450[];

extern void func_0208763c(void *lock);
extern void func_0202795c(void *out, void *a, void *b);
extern void func_02087678(void *lock);
extern uint32_t func_0205816c(void *first, uint32_t second, uint32_t third, uint32_t fourth, uint32_t fifth, uint32_t sixth, uint32_t seventh);
extern void func_02052d98(void *a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern uint32_t *func_02027a28(void *a, void *b);

typedef struct Entry {
    uint32_t a;
    uint32_t b;
} Entry;

typedef struct Table {
    uint8_t pad[0x14];
    Entry *entries;
} Table;

typedef struct Ref {
    Table *tbl;
    uint32_t idx;
} Ref;

typedef struct Scope {
    uint32_t *node;
    void *lock;
    uint8_t active;
} Scope;

uint32_t func_02027bdc(Ref *p) {
    Scope s;
    uint32_t r;

    s.lock = data_021394c4;
    s.active = 1;
    if (s.active) {
        func_0208763c(s.lock);
    }
    func_0202795c(&s.node, data_02139494, p);
    if (s.node != (uint32_t *)data_02139498) {
        s.node[6]++;
        r = s.node[7];
        if (s.active) {
            func_02087678(s.lock);
        }
        return r;
    } else {
        uint32_t *n;
        r = func_0205816c(*(void **)data_02139450, p->tbl->entries[p->idx].b, 0, 4, 0, 0, 0);
        func_02052d98(p->tbl, p->idx, 0, r, p->tbl->entries[p->idx].b, 0);
        n = func_02027a28(data_02139494, p);
        n[3] = 1;
        n[4] = r;
        if (s.active) {
            func_02087678(s.lock);
        }
        return r;
    }
}
