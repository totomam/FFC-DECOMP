#include "ffc/types.h"

typedef struct Obj { void *p; uint16_t pad; uint16_t pad2; uint16_t pad3; uint16_t id; } Obj;
typedef struct Node { uint8_t pad[0x68]; struct Node *next; uint8_t pad2[0x38]; Obj *obj; } Node;
typedef struct G { uint8_t pad[8]; Node *head; } G;
typedef struct C { uint8_t pad[6]; uint16_t cnt; } C;
extern G data_02141510;
extern C data_ov000_0216bc60;

uint16_t func_ov000_02147704(void) {
    int found;
    Node *head;
    head = 0;
    do {
        Node *n;
        found = 0;
        data_ov000_0216bc60.cnt++;
        {
            uint16_t c = data_ov000_0216bc60.cnt;
            if (c < 1024 || c >= 5000) data_ov000_0216bc60.cnt = 1024;
        }
        n = data_02141510.head;
        if (n) {
            do {
                Obj *o = n->obj;
                if (o && o->p && o->id == data_ov000_0216bc60.cnt) { found = 1; break; }
                n = n->next;
            } while (n);
        }
    } while (found);
    return data_ov000_0216bc60.cnt;
}
