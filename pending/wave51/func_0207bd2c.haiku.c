#include "ffc/types.h"

typedef struct Gl {
    uint32_t a;
    uint8_t *b;
} Gl;

typedef struct Flags {
    int f0 : 1;
    int f1 : 1;
} Flags;

extern void func_0208763c(void *p);
extern void func_02087678(void *p);
extern void func_0207a23c(void *p);
extern void func_0207bd98(void *p);
extern uint8_t data_02140738[];
extern Gl data_0213ecd0;

void func_0207bd2c(uint8_t *p)
{
    func_0208763c(data_02140738);
    if (data_0213ecd0.b != 0) {
        func_0208763c(data_0213ecd0.b + 0x10c8);
    }
    if (((Flags *)(p + 0x118))->f1) {
        func_0207a23c(p);
    }
    if (((Flags *)(p + 0x118))->f0) {
        void (*fn)(uint8_t *) = (void (*)(uint8_t *))*(uint32_t *)(p + 0x178);
        fn(p);
    }
    func_0207bd98(p);
    func_02087678(data_02140738);
    if (data_0213ecd0.b != 0) {
        func_02087678(data_0213ecd0.b + 0x10c8);
    }
}
