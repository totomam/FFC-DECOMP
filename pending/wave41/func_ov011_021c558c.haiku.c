#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;

extern void *func_0203b6fc(void);
extern void *func_02062a30(void *owner);
extern void *func_ov011_021c5610(void *p, Pair v);
extern void *func_0203b708(int x);
extern void func_02056bc0(void *object, void *node);
extern Pair data_ov011_021cb618;
extern Pair data_ov011_021cb620;
extern Pair data_ov011_021cb628;

void *func_ov011_021c558c(uint8_t *p)
{
    void *s = func_0203b6fc();
    p[0x117] = p[0x116];
    void *r6 = func_02062a30(*(void **)(p + 0xec));
    void *v0 = func_ov011_021c5610(p, data_ov011_021cb618);
    void *v1 = func_ov011_021c5610(p, data_ov011_021cb620);
    void *v2 = func_ov011_021c5610(p, data_ov011_021cb628);
    void *node = func_0203b708(10);
    func_02056bc0(s, node);
    func_02056bc0(s, v2);
    func_02056bc0(s, v1);
    func_02056bc0(s, v0);
    func_02056bc0(s, r6);
    return s;
}
