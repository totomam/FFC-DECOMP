#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void *func_0203b6fc(void);
extern uint32_t func_02062a54(uint32_t x);
extern uint32_t func_ov011_021c5610(void *self, Pair v);
extern void func_02056bc0(void *object, void *node);
extern uint32_t func_0203b708(uint32_t x);
extern void func_02021338(uint32_t x);
extern const Pair data_ov011_021cb630;
extern const Pair data_ov011_021cb638;
extern const Pair data_ov011_021cb640;

void func_ov011_021c5650(uint8_t *p)
{
    void *o = func_0203b6fc();
    uint32_t a = func_02062a54(*(uint32_t *)(p + 0xec));
    uint32_t s = func_ov011_021c5610(p, data_ov011_021cb630);
    uint32_t t = func_ov011_021c5610(p, data_ov011_021cb638);
    uint32_t u = func_ov011_021c5610(p, data_ov011_021cb640);
    func_02056bc0(o, (void *)u);
    func_02056bc0(o, (void *)t);
    func_02056bc0(o, (void *)s);
    func_02056bc0(o, (void *)a);
    uint32_t v = func_0203b708(10);
    uint8_t *q = p + 0x14;
    func_02056bc0(q, (void *)v);
    func_02056bc0(q, o);
    func_02021338(0xb9);
}
