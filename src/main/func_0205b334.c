#include "ffc/types.h"

extern void func_0208763c(void *p);
extern void func_02058048(void *p, uint32_t a, uint32_t b);
extern void func_02087678(void *p);
extern uint8_t data_0213e118[];

typedef struct {
    void *ptr;
    volatile uint8_t flag;
} Local;

void func_0205b334(uint8_t *self, uint32_t arg) {
    Local s;
    s.ptr = data_0213e118;
    s.flag = 1;
    if (s.flag) {
        func_0208763c(s.ptr);
    }
    func_02058048(self + 0x34, arg, 0);
    if (s.flag) {
        func_02087678(s.ptr);
    }
}
