#include "ffc/types.h"

extern void func_02035be0(void *object);
extern void func_02035c18(void *object);

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
    uint32_t d;
    uint32_t e;
    uint8_t f;
    uint32_t g;
} FuncObj;

void *func_ov002_021bde7c(void *self) {
    FuncObj *p = (FuncObj *)self;
    uint32_t v1;
    uint32_t v2;

    p->c = 7;
    p->a = 0;
    p->b = 0;
    func_02035be0(&v1);
    p->d = v1;
    func_02035c18(&v1);
    func_02035be0(&v2);
    p->e = v2;
    func_02035c18(&v2);
    p->f = 0;
    p->g = 0;
    return self;
}
