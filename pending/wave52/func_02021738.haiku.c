#include "ffc/types.h"

extern void func_0208763c(void);
extern int32_t func_0205447c(void);
extern void func_02007c14(void);
extern void func_02007be4(void);
extern void func_02087678(void *p);
extern uint8_t data_020b93e0[];

typedef struct {
    uint32_t f0;
    uint32_t f4;
    uint32_t f8;
    uint32_t fc;
    uint32_t f10;
} Ring;

extern Ring data_020ad5c4;
extern uint32_t data_020ad5cc;

void func_02021738(void) {
    struct {
        uint32_t a;
        uint32_t b;
        void *p;
        uint8_t flag;
    } g;
    uint32_t r4;
    uint32_t *p;

    g.p = data_020b93e0;
    g.flag = 1;
    if (g.flag != 0) {
        func_0208763c();
    }

    r4 = data_020ad5c4.f10;
    if (func_0205447c() != 0) {
        r4 = 0;
    }

    if (data_020ad5c4.fc != r4) {
        if (data_020ad5c4.fc < r4) {
            g.b = r4 - data_020ad5c4.fc;
            p = (g.b < data_020ad5c4.f8) ? &g.b : &data_020ad5cc;
            data_020ad5c4.fc = data_020ad5c4.fc + *p;
        } else {
            g.a = data_020ad5c4.fc - r4;
            p = (g.a < data_020ad5c4.f0) ? &g.a : &data_020ad5c4.f0;
            data_020ad5c4.fc = data_020ad5c4.fc - *p;
        }
        func_02007c14();
    }

    func_02007be4();
    if (g.flag != 0) {
        func_02087678(g.p);
    }
}
