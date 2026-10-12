#include "ffc/types.h"

typedef struct Ent { uint8_t b[12]; } Ent;
typedef struct Mgr {
    uint8_t pad0[0x14];
    int32_t count;
    Ent *ents;
    uint8_t pad1;
    uint8_t flag;
} Mgr;
typedef struct Top {
    uint8_t pad[0xc];
    Mgr *m;
} Top;
typedef struct P {
    int32_t a;
    int32_t b;
    uint8_t pad[0x86];
    uint8_t name[1];
} P;

extern Top data_ov000_0217004c;
extern int func_ov000_02154ed0(Ent *e);
extern int func_ov000_0215a638(void);
extern void func_ov000_02155498(int h, Ent *e, uint8_t *tmp);
extern int func_02092948(uint8_t *tmp, uint8_t *q);
extern int func_ov000_021553c4(Ent *e);
extern int func_ov000_02154e78(Ent *e);
extern void func_ov000_02155478(Ent *e, int v);
extern void func_ov000_02154f04(Ent *e);
extern int func_ov000_02159dd8(Ent *ents, int count, int v);
extern void func_ov000_02154f24(Ent *e, int v);
extern int func_ov000_02154e58(Ent *e);
extern void func_ov000_02154f48(Ent *e, int v);
extern void func_ov000_02159a9c(int idx);

#define M (data_ov000_0217004c.m)
void func_ov000_0215a2b4(int unused, P *p) {
    uint8_t * volatile q;
    int i;
    volatile int found = 0;
    volatile int done = 0;
    uint8_t tmp[0x18];
    if (p->a != 0) return;
    if (M->count > 0) {
        i = found;
        q = (uint8_t *)p;
        q = (uint8_t *)p + 0x8e;
        do {
            if (func_ov000_02154ed0(&M->ents[i]) == 1) {
                int h = func_ov000_0215a638();
                func_ov000_02155498(h, &M->ents[i], tmp);
                if (func_02092948(tmp, q) != 0) goto next;
            } else {
                if (func_ov000_02154ed0(&M->ents[i]) == 3 || func_ov000_02154ed0(&M->ents[i]) == 2) {
                    func_ov000_0215a638();
                    if (func_ov000_021553c4(&M->ents[i]) != p->b) goto next;
                    if (func_ov000_02154e78(&M->ents[i]) == 1) {
                        done = 1;
                        goto next;
                    }
                } else {
                    goto next;
                }
            }
            func_ov000_02155478(&M->ents[i], p->b);
            func_ov000_02154f04(&M->ents[i]);
            found = 1;
        next:
            i++;
        } while (i < M->count);
    }
    if (found != 0) {
        int idx = func_ov000_02159dd8(M->ents, M->count, p->b);
        if (done == 0) {
            func_ov000_02154f24(&M->ents[idx], 1);
            if (func_ov000_02154e58(&M->ents[idx]) != 0) func_ov000_02154f48(&M->ents[idx], 1);
            func_ov000_02159a9c(idx);
        }
        M->flag = 1;
    }
}
