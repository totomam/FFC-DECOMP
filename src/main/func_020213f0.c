#include "ffc/types.h"

extern void func_0208763c(void *);
extern void func_02087678(void *);
extern void func_02007c54(void *);
extern uint32_t data_020b93e0[];
extern uint32_t data_020b93d4[];

typedef struct {
    void *ptr;
    uint8_t flag;
} Local;

void func_020213f0(void *p) {
    volatile Local s;
    s.ptr = data_020b93e0;
    s.flag = 1;
    if (s.flag != 0) {
        func_0208763c(data_020b93e0);
    }
    if (data_020b93d4[2] == (uint32_t)p) {
        if (s.flag != 0) {
            func_02087678(s.ptr);
        }
        return;
    }
    data_020b93d4[2] = (uint32_t)p;
    if (p != 0) {
        func_02007c54(p);
    }
    if (s.flag != 0) {
        func_02087678(s.ptr);
    }
}
