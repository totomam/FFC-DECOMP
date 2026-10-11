#include "ffc/types.h"

extern void func_0208763c(void);
extern void func_02007bec(void);
extern void func_02087678(void *p);
extern uint8_t data_020b93e0[];

typedef struct {
    void *p;
    volatile uint8_t f;
} Local;

void func_02021704(void) {
    Local s;
    s.p = data_020b93e0;
    s.f = 1;
    if (s.f != 0) {
        func_0208763c();
    }
    func_02007bec();
    if (s.f != 0) {
        func_02087678(s.p);
    }
}
