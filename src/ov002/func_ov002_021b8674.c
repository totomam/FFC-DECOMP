/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/vec124_find_check_handle_021B8674.c, externs renamed. */
/* 0x021B8674 (size 0x38) -O4 — scan vector (data@+0x120, count@+0x124): first element passing Check(020692E8) returns Handle(021B81C0); else 7 */
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

extern s32 func_020692e8(void* e);
extern s32 func_ov002_021b81c0(void* e);
s32 func_ov002_021b8674(u8* s) {
    u32 i;
    void* e;
    i = 0;
    if (i < *(u32*)(s + 0x124)) {
        do {
            e = ((void**)*(u32*)(s + 0x120))[i];
            if (func_020692e8(e) != 0) {
                return func_ov002_021b81c0(e);
            }
            i++;
        } while (i < *(u32*)(s + 0x124));
    }
    return 7;
}
