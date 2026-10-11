#include "ffc/types.h"

extern void func_0208763c(void);
extern void func_02007c04(void *a, int b);
extern void func_02087678(void *p);
extern uint8_t data_020b93e0[];

void func_020213b8(void *p0) {
    struct {
        void *ptr;
        volatile uint8_t flag;
    } s;
    s.ptr = data_020b93e0;
    s.flag = 1;
    if (s.flag) {
        func_0208763c();
    }
    func_02007c04(p0, 0);
    if (s.flag) {
        func_02087678(s.ptr);
    }
}
