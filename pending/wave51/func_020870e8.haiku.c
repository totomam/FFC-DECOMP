#include "ffc/types.h"

struct Node {
    uint8_t pad[0x68];
    struct Node *next;
    uint8_t pad2[4];
    uint32_t key;
};

struct Global {
    uint8_t pad[0x20];
    struct Node *cur;
    struct Node *head;
};

extern struct Global data_021414f4;
extern uint32_t func_02088978(void);
extern void func_0208898c(uint32_t);
extern void func_02086c78(void);

void func_020870e8(void)
{
    struct Node *r5 = data_021414f4.cur;
    struct Node *r7 = 0;
    struct Node *r6 = 0;
    struct Node *prev = 0;
    struct Node *p;
    int r4 = 0;
    uint32_t saved = func_02088978();

    p = data_021414f4.head;
    if (p != 0) {
        do {
            if (p == r5) {
                r7 = prev;
            }
            if (r5->key == p->key) {
                r6 = p;
                r4++;
            }
            prev = p;
            p = p->next;
        } while (p != 0);
    }

    if (r4 > 1 && r6 != r5) {
        if (r7 == 0) {
            data_021414f4.head = r5->next;
        } else {
            r7->next = r5->next;
        }
        r5->next = r6->next;
        r6->next = r5;
        func_02086c78();
    }
    func_0208898c(saved);
}
