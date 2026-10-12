#include "ffc/types.h"

extern void func_0208763c(void);
extern void func_0205b7e8(uint8_t *dst, uint32_t *args, uint32_t v);
extern void func_02087678(void *p);
extern uint8_t data_0213e118[];

typedef struct {
    uint8_t x;
    void *p;
    uint8_t flag;
    uint8_t pad[3];
    uint32_t q0;
    uint32_t q1;
    uint32_t q2;
} Frame;

void func_0205b28c(uint8_t *self, uint32_t a, uint32_t b, uint32_t c, uint32_t idx)
{
    Frame f;

    f.q0 = b;
    f.q1 = a;
    f.q2 = c;
    f.p = data_0213e118;
    f.flag = 1;
    if (f.flag) {
        func_0208763c();
    }
    f.x = 0;
    func_0205b7e8(self + 0xac + idx * 0x18, &f.q0, f.x);
    if (f.flag) {
        func_02087678(f.p);
    }
}
