#include "ffc/types.h"

extern void *func_ov000_0214e984(void);
extern void func_ov000_0214f1f4(void *a, void *b);
extern uint8_t data_ov000_0216b41c[];
extern uint8_t data_ov000_02170b24[];
extern uint8_t data_ov000_02170b10[];
extern uint8_t data_ov000_02170b00[];

typedef struct {
    uint32_t pad0;
    uint32_t pad1;
    void *a;
    void *b;
    uint16_t c;
    uint16_t d;
    void *e;
    uint32_t f;
    uint8_t pad2[0x2c - 0x1c];
    void *g;
    uint32_t h;
} S;
extern S data_ov000_02170af8;

void *func_ov000_02165744(void) {
    S *p;
    p = &data_ov000_02170af8;
    p->a = data_ov000_0216b41c;
    *(void *volatile *)&p->b = &data_ov000_02170af8;
    p->c = 2;
    p->d = 0;
    p->e = data_ov000_02170b24;
    p->f = 0;
    func_ov000_0214f1f4(func_ov000_0214e984(), data_ov000_02170b10);
    if (p->f == 0) return 0;
    p->g = data_ov000_02170b10;
    p->d = 4;
    p->h = 0;
    return data_ov000_02170b00;
}
