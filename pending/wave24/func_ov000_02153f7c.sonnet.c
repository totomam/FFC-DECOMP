#include "ffc/types.h"

extern void func_ov000_0215355c(void);
extern uint8_t func_ov000_02154424(uint8_t v);

typedef struct { uint8_t lo : 4; uint8_t hi : 4; } NB;
typedef struct { uint8_t pad[0x14bb]; NB n; uint8_t pad2[5]; uint8_t a; uint8_t pad3[3]; uint8_t b; } S;

int func_ov000_02153f7c(S *p) {
    p->b = 0;
    p->n.hi++;
    func_ov000_0215355c();
    p->a = func_ov000_02154424(1);
    return 3;
}
