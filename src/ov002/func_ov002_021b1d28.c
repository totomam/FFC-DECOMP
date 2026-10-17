/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/f_021B1D28.c, externs renamed. */
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

extern void* func_0203b6fc(void* p);
extern void* func_0203c06c(u32 id);
extern void* func_0203c080(u32 id);
extern void func_02056bc0(void* p, void* q);

void func_ov002_021b1d28(u8* self)
{
    void* r5 = func_0203b6fc(self);
    func_02056bc0(r5, func_0203c06c(0x1E));
    func_02056bc0(r5, func_0203c080(0x1E));
    func_02056bc0(self + 0x14, r5);
    *(Pair*)(self + 0x80) = *(Pair*)0x021D5890;
}
