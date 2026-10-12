#include "ffc/types.h"

extern void func_02035be0(void *object);
extern void func_02035c18(void *object);
extern void func_0209cf5c(void *p, uint32_t a, uint32_t b, void *c, void *d);
extern void *func_02035e10(void *object);
extern void func_02035d6c(void);
extern void func_02035d50(void);

typedef struct {
    uint32_t a : 8;
    uint32_t b : 11;
    uint32_t c : 1;
    uint32_t d : 8;
    uint32_t e : 3;
    uint32_t f : 1;
} W58;

typedef struct {
    uint32_t a : 9;
    uint32_t b : 1;
} W5c;

void *func_02035f58(void *object) {
    uint32_t *p = (uint32_t *)object;
    uint32_t tmp;

    func_02035be0(&tmp);
    p[0] = tmp;
    func_02035c18(&tmp);
    func_0209cf5c((uint8_t *)object + 4, 4, 8, (void *)func_02035d50, (void *)func_02035d6c);
    func_02035e10((uint8_t *)object + 0x24);
    p[0x54 / 4] = 0;

    ((W58 *)&p[0x58 / 4])->a = 0;
    ((W58 *)&p[0x58 / 4])->b = 0;
    ((W58 *)&p[0x58 / 4])->d = 0xff;
    ((W58 *)&p[0x58 / 4])->e = 0;

    ((W5c *)&p[0x5c / 4])->a = 0;
    ((W5c *)&p[0x5c / 4])->b = 0;

    return object;
}
