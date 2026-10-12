#include "ffc/types.h"

typedef struct {
    uint32_t id;      /* +0x00 */
    uint32_t f4;      /* +0x04 */
    uint32_t f8;      /* +0x08 */
    uint16_t fc;      /* +0x0c */
    uint8_t pad[0x16 - 0x0e];
    uint8_t cls;      /* +0x16 */
} Ent;

extern int func_ov000_02163408(void);
extern Ent *func_ov000_02163634(int idx);
extern int func_ov000_0216376c(void);
extern uint8_t *func_ov000_02163350(void);
extern Ent *func_ov000_02163654(uint32_t id);
extern void func_ov000_0215eb30(int a, uint32_t id, uint32_t f4, uint32_t fc, uint32_t *list, int n);
extern int func_ov000_0215fed0(void);
extern void func_ov000_0215b900(int v);
extern void func_ov000_02163758(void);
extern int func_ov000_02161948(uint32_t id, int idx);

int func_ov000_02160f48(uint32_t mask)
{
    int flag = 0;
    int nU = 0;
    int nM = 0;
    int result = 1;
    int i = 1;
    uint32_t listU[32];
    uint32_t listM[32];
    int k;
    Ent *e;
    uint8_t *base;

    for (; i < func_ov000_02163408(); i++) {
        e = func_ov000_02163634(i);
        if (e != 0) {
            if (mask & (1u << e->cls)) {
                listM[nM] = e->id;
nM++;
            } else {
                listU[nU] = e->id;
nU++;
            }
        }
    }

    if (func_ov000_0216376c() != 0) {
        e = (Ent *)(func_ov000_02163350() + 0x554);
        if (mask & (1u << e->cls)) {
            listM[nM] = e->id;
nM++;
        } else {
            listU[nU] = e->id;
nU++;
            flag = 1;
        }
    }

    for (k = 0; k < nM; k++) {
        uint32_t v = listM[k];
        e = func_ov000_02163654(v);
        if (func_ov000_0216376c() != 0 && e == 0) {
            if (v == *(uint32_t *)(func_ov000_02163350() + 0x554)) {
                e = (Ent *)(func_ov000_02163350() + 0x554);
            }
        }
        if (e != 0) {
            func_ov000_0215eb30(0x10, v, e->f4, e->fc, listU, nU);
            if (func_ov000_0215fed0() != 0) {
                result = 0;
            }
        }
    }

    base = func_ov000_02163350();
    base[0x629] = 1;
    if (flag != 0) {
        base = func_ov000_02163350();
        func_ov000_0215b900(base[0x56a]);
        func_ov000_02163758();
    }

    for (k = 0; k < nU; k++) {
        int r = func_ov000_02161948(listU[k], (uint8_t)k);
        if (r != 0xff) {
            func_ov000_0215b900(r);
        }
    }

    base = func_ov000_02163350();
    base[0x629] = 0;
    return result;
}
