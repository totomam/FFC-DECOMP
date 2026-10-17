/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/f_021C8D48.c, externs renamed. */
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


typedef struct Pair { u32 a; u32 b; } Pair;

extern void func_ov002_021be604(u32 a, u32 b);
extern void func_ov002_021be5f0(u32 a, void* b, void* c);
extern void* func_02056aec(void* p);
extern void func_02056bc0(void* p, void* q);
extern void* func_0205681c(u32 size);
extern u32 func_ov002_021be60c(u32 a);
extern void func_02056c9c(void* p, s32 flag);

void func_ov002_021c8d48(void* self)
{
    u32 q;
    func_ov002_021be604(*(u32*)((u8*)self + 0x80), *(u32*)((u8*)self + 0x88));
    func_ov002_021be5f0(*(u32*)((u8*)self + 0x80), (u8*)self + 0x84, (u8*)self + 0x88);
    q = *(u32*)((u8*)self + 0x88);
    if (q == 0) {
        void* t = func_02056aec(self);
        self = (u8*)self + 0x14;
        func_02056bc0(self, t);
        return;
    }
    if (*(u32*)((u8*)self + 0x84) != q) {
        u8* p = (u8*)func_0205681c(0x88);
        if (p != 0) {
            u32 v = func_ov002_021be60c(*(u32*)((u8*)self + 0x80));
            func_02056c9c(p, 0);
            *(u32*)p = 0x021D6D30;
            *(u32*)(p + 0x80) = *(u32*)0x0209DF04;
            *(u32*)(p + 0x84) = v;
        }
        func_02056bc0((u8*)self + 0x14, p);
        *(Pair*)((u8*)self + 0x90) = *(Pair*)0x021D7854;
    } else {
        *(u32*)((u8*)self + 0xC) = (*(u32*)((u8*)self + 0xC) & ~0xFF) | 2;
    }
}
