/* cflags: -noO4,p -O4 */
#include "ffc/types.h"
typedef struct { uint32_t a, b, c, d; uint16_t e; uint8_t pad[0x84]; } T;
typedef struct { uint32_t a, b; } P;
extern void func_02056c9c(void *p, int x);
extern void func_0201cf34(void *g, T *t);
extern void func_ov011_021ca0fc(void *p, T *t);
extern void func_0201ce70(void *g, T *t);
extern uint32_t data_ov011_021cbdcc;
extern void *data_020b93b8;
extern P data_ov011_021cbddc;
uint8_t *func_ov011_021c9e14(uint8_t *self, uint32_t arg) {
    T t;
    uint32_t i;
    T *p = &t;
    void **gp;
    uint32_t j = 0;
    uint8_t *base = self + 0x88;
    func_02056c9c(self, 0);
    *(uint32_t*)self = (uint32_t)&data_ov011_021cbdcc;
    base = self + 0x88;
    i = 0; do { *(uint32_t*)(base + (i << 2)) = 0; i++; } while (i < 3);
    *(uint32_t*)(self + 0x98) = arg;
    gp = &data_020b93b8;
    func_0201cf34(*gp, p);
    func_ov011_021ca0fc(self + 0x88, p);
    p->a = 0; p->b = 0; p->c = 0; p->d = 0; p->e = 0;
    func_0201ce70(*gp, p);
    *(P*)(self + 0x80) = data_ov011_021cbddc;
    return self;
}
