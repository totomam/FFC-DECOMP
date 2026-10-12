#include "ffc/types.h"

typedef struct Elem {
    uint32_t a, b, c;
} Elem;

typedef struct State {
    uint32_t pad0;
    void *f4;
    uint32_t pad8[4];
    Elem *f18;
    uint8_t f1c;
    uint8_t f1d;
    uint8_t f1e;
} State;

typedef struct Glob {
    uint32_t pad[3];
    State *s;
} Glob;

extern Glob data_ov000_0217004c;

extern void func_ov001_02175d40(void *f4, int *out);
extern void func_ov000_02159f34(void);
extern void func_ov001_02175d6c(void *f4, int k, int *out);
extern int func_ov000_0215999c(int j);
extern int func_ov000_02154e78(Elem *e);
extern void func_ov000_02155478(Elem *e, int v);
extern void func_ov000_02154f04(Elem *e);
extern int func_ov000_02154e58(Elem *e);
extern void func_ov000_02154f48(Elem *e, int v);
extern void func_ov001_02175f00(void *f4, int v);
extern int func_ov000_02154eb8(Elem *e);
extern int func_ov000_02159d64(Elem *e, int idx, int id);
extern void func_ov001_02175e40(void *f4, int id, int *out);
extern void func_ov000_02159ea4(int id);
extern void func_ov000_02154f6c(Elem *e, int v);
extern void *func_ov000_0215a638(void);
extern int func_ov000_021553c4(void *g, Elem *e);
extern void func_ov000_02155498(void *g, Elem *e, void *out);
extern void func_ov001_02175a20(void *f4, int a1, int a2, int a3, int a4, void *a5,
                                int a6, int a7, void *a8, int a9);
extern void func_ov000_02159f88(void);

void func_ov000_02159b6c(Elem *p, int n)
{
    int lo_[133];
    uint32_t loc[6];
    int cnt, k, j, id, off;

    if (data_ov000_0217004c.s->f1e == 0) {
        func_ov001_02175d40(data_ov000_0217004c.s->f4, &cnt);
        func_ov000_02159f34();
        k = 0;
        if (cnt > 0) {
            do {
                func_ov001_02175d6c(data_ov000_0217004c.s->f4, k, lo_);
                func_ov000_02159f34();
                for (j = 0; j < n; j++) {
                    if (lo_[0] == func_ov000_0215999c(j)) {
                        off = j * 12;
                        if (func_ov000_02154e78((Elem*)((char*)p + off)) == 0) {
                            func_ov000_02155478((Elem*)((char*)p + off), lo_[0]);
                            func_ov000_02154f04((Elem*)((char*)p + off));
                            if (func_ov000_02154e58((Elem*)((char*)data_ov000_0217004c.s->f18 + off))) {
                                func_ov000_02154f48((Elem*)((char*)data_ov000_0217004c.s->f18 + off), 1);
                            }
                            data_ov000_0217004c.s->f1d = 1;
                        }
                        break;
                    }
                }
                if (j == n) {
                    func_ov001_02175f00(data_ov000_0217004c.s->f4, lo_[0]);
                    func_ov000_02159f34();
                    cnt--;
                    k--;
                }
                k++;
            } while (k < cnt);
        }
        data_ov000_0217004c.s->f1e = 1;
    }

    while (data_ov000_0217004c.s->f1c < n) {
        if (func_ov000_02154eb8(p + data_ov000_0217004c.s->f1c) == 0) {
            id = func_ov000_0215999c(data_ov000_0217004c.s->f1c);
            if (id != 0) {
                if (func_ov000_02159d64(p, data_ov000_0217004c.s->f1c, id) == 0) {
                    func_ov001_02175e40(data_ov000_0217004c.s->f4, id, &k);
                    func_ov000_02159f34();
                    if (k == -1) {
                        func_ov000_02159ea4(id);
                        func_ov000_02154f6c(p + data_ov000_0217004c.s->f1c, 1);
                    }
                }
            } else {
                void *g = func_ov000_0215a638();
                if (func_ov000_021553c4(g, p + data_ov000_0217004c.s->f1c) == -1) {
                    g = func_ov000_0215a638();
                    func_ov000_02155498(g, p + data_ov000_0217004c.s->f1c, loc);
                    func_ov001_02175a20(data_ov000_0217004c.s->f4, 0, 0, 0, 0, loc, 0, 0,
                                        (void *)func_ov000_02159f88,
                                        data_ov000_0217004c.s->f1c);
                    data_ov000_0217004c.s->f1e = 2;
                    return;
                }
            }
        }
        data_ov000_0217004c.s->f1c++;
    }
}
