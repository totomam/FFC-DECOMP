/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/indicator_widget_show_021B62A4.c, externs renamed. */
#ifndef BATTLE_H
#define BATTLE_H

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;

typedef struct BattleState BattleState;
typedef struct Vivosaur Vivosaur;
typedef struct AttackInfo AttackInfo;

u32 rand_range(u32* rng_state, u32 max);

u32* BattleState_GetRng(BattleState* state);
s32 BattleState_GetTeamSize(BattleState* state);
Vivosaur* BattleState_GetVivosaur(BattleState* state, s32 index);

s32 Vivosaur_GetAbilityInfo(Vivosaur* vivo);
s32 Vivosaur_CheckSkill(s32 info, s32 skill_id);
s32 Vivosaur_GetType(Vivosaur* vivo);

#endif

/* Matched 021B62A4 (size 0x9E, -O4). Batch label func_021B62A4.
   Reads a Pair via 021B5E88 getter on *(self+0xa4); picks tile id 0x74/0x68/0x80 by
   flag + byte(self+0xa0) (dead flag re-test = mwcc flag-reuse idiom); optionally plays
   sfx 0x43C and calls 021B60D0; then creates a widget via 021B6340 Wrap(self,Pair,Pair,
   0xc,-1) and adds it to the list at *(self+0xac) via 02056BC0. */
typedef struct { u32 x, y; } Pair;

extern void func_ov002_021b5e88(Pair* out, void* obj);
extern void func_02021338(u32 id);
extern void func_ov002_021b60d0(void* obj, u32 v);
extern void func_02056c4c(void* p);
extern void* func_ov002_021b6340(void* self, Pair a, Pair b, u32 c, u32 d);
extern void func_02056bc0(void* p, void* q);

void func_ov002_021b62a4(void* self, u32 flag) {
    Pair pr;
    Pair q;
    func_ov002_021b5e88(&pr, *(void**)((u8*)self + 0xa4));
    if (flag != 0) {
        u32 py;
        py = pr.y;
        q.x = *((u8*)self + 0xa0) ? 0x74 : 0x68;
        q.y = py;
        func_02021338(0x43C);
    } else {
        u32 py;
        u32 t;
        t = 0x68;
        py = pr.y;
        if (flag == 0) {
            t = 0x80;
        }
        q.x = t;
        q.y = py;
    }
    if (*((u8*)self + 0xa0) == 0) {
        u32 v;
        v = 1;
        if (flag == 0) {
            v = 0;
        }
        func_ov002_021b60d0(*(void**)((u8*)self + 0xa4), v);
    }
    func_02056c4c(*(void**)((u8*)self + 0xac));
    func_02056bc0(*(void**)((u8*)self + 0xac), func_ov002_021b6340(self, pr, q, 0xc, -1));
}
