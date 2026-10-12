/* cflags: -lang c++ */
#include "ffc/types.h"
extern "C" void func_0208763c(void *p);
extern "C" void func_02087678(void *p);
struct Node { uint32_t key; Node *next; };
struct Owner {
    uint8_t pad[0x12];
    uint8_t flag;
    uint8_t pad2;
    Node *head;
    Node **tail;
    uint32_t lock;
};
struct Guard {
    void *l; int f;
    Guard(Owner *o) { f = o->flag; l = &o->lock; if (f) func_0208763c(l); }
    ~Guard() { if (f) func_02087678(l); }
};
extern "C" void func_02056bf4(Owner *self, Node *item)
{
    Guard g(self);
    Node **prev = &self->head;
    Node *node = self->head;
    while (node != 0) {
        if (node == item) {
            Node **link = &node->next;
            *prev = node->next;
            if (link == self->tail) self->tail = prev;
            return;
        }
        prev = &node->next;
        node = node->next;
    }
}
