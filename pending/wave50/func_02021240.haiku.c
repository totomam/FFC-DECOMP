#include "ffc/types.h"

typedef struct {
    uint32_t *p;
    uint8_t f;
} Loc;

extern uint32_t data_020b93e0;
extern uint32_t data_020ad5c4[];
extern void func_0208763c(void);
extern void func_02087678(uint32_t *p);
extern void func_02007bfc(int a, int b);

void func_02021240(int a, int b)
{
    volatile Loc l;

    l.p = &data_020b93e0;
    l.f = 1;
    if (l.f) {
        func_0208763c();
    }
    if (a == -1) {
        a = data_020ad5c4[1];
        data_020ad5c4[1] = (uint32_t)-1;
        if (a == -1) {
            if (l.f) {
                func_02087678(l.p);
            }
            return;
        }
    }
    func_02007bfc(a, b);
    if (l.f) {
        func_02087678(l.p);
    }
}
