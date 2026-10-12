#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern int func_0206cb98(void *p);
extern void func_02056c4c(void *p);
extern void func_ov007_021a36ac(void *p);
extern void *func_02056aec(void *p);
extern void *func_02060634(void *a, int b, int c, int d, int e, int f);
extern void func_02056bc0(void *object, void *node);
extern Pair data_ov007_021c417c;
extern char *data_0213df20;

void func_ov007_021a2fb8(char *p) {
    if (func_0206cb98(*(void **)(p + 0xcc))) {
        *(Pair *)(p + 0xb8) = data_ov007_021c417c;
        return;
    }
    func_02056c4c(*(void **)(p + 0xec));
    func_ov007_021a36ac(*(void **)(p + 0xc8));
    void *r4 = func_02056aec(p);
    void *r0 = func_02060634(*(void **)(data_0213df20 + 0x20), 8, 0, 10, 0, 0);
    char *q = p + 0x14;
    func_02056bc0(q, r0);
    func_02056bc0(q, r4);
}
