#include "ffc/types.h"
typedef struct { uint32_t a, b; } S;
typedef struct { uint8_t pad[0x12]; uint8_t f; uint8_t pad2; uint32_t x; uint8_t pad3[4]; uint8_t w[4]; } Q;
extern void func_0208763c(void *);
extern void func_02087678(void *);
extern void func_02056c4c(void *);
extern void *func_ov007_021ac2fc(void *, S, uint32_t);
extern void *func_0203b720(void);
extern void func_02056bc0(void *object, void *node);
extern S data_ov007_021c52f8;
void func_ov007_021ac294(uint8_t *p, uint32_t b) {
    Q *q = (Q *)(p + 0x14);
    uint8_t f = q->f;
    uint8_t *w = q->w;
    int z;
    void *r, *t;
    if (f) func_0208763c(w);
    z = 1;
    if (q->x != 0) z = 0;
    if (f) func_02087678(w);
    if (z == 0) func_02056c4c(q);
    r = func_ov007_021ac2fc(p, data_ov007_021c52f8, b);
    t = func_0203b720();
    func_02056bc0(q, t);
    func_02056bc0(q, r);
}
