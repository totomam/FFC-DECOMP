/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/delete_member_1adb40.c, externs renamed. */
/* Matched: 021ADB40 (0x2C). func_02056bf4 = 0x02056BF4; virtual-delete member +0x1A0. -O4. */
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

typedef void (*Fn)(void*);
extern void func_02056bf4(void*, void*);
void func_ov002_021adb40(void* s) {
    void* p;
    p = *(void**)((u8*)s + 0x1A0);
    if (p != 0) {
        func_02056bf4((u8*)s + 0x48, p);
        p = *(void**)((u8*)s + 0x1A0);
        if (p != 0) {
            if (p != 0) {
                (*(Fn**)p)[1](p);
            }
            *(u32*)((u8*)s + 0x1A0) = 0;
        }
    }
}
