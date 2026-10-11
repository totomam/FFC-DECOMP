#include "ffc/types.h"

typedef struct Node {
    uint8_t pad[0x20];
    struct Node *next;
} Node;

extern Node *data_02139d6c;

int func_0204dca8(void) {
    Node *p;
    int n;
    p = data_02139d6c;
    n = 0;
    while (p) {
        p = p->next;
        n = n + 1;
    }
    return n;
}
