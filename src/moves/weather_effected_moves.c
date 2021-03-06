#include <pokeagb/pokeagb.h>
#include "../battle_data/pkmn_bank.h"
#include "../battle_data/pkmn_bank_stats.h"
#include "../battle_data/battle_state.h"

extern void dprintf(const char * str, ...);
extern bool enqueue_message(u16 move, u8 bank, enum battle_string_ids id, u16 effect);
extern enum WeatherTypes get_weather(void);

// hurricane
u8 hurricane_on_before_move(u8 user, u8 src, u16 move, struct anonymous_callback* acb)
{
    if (user != src) return true;
    if ((battle_master->field_state.is_raining) || (battle_master->field_state.is_primordial_sea)) {
        B_MOVE_ACCURACY(user) = 101;
    } else if ((battle_master->field_state.is_sunny) || (battle_master->field_state.is_desolate_land)) {
        B_MOVE_ACCURACY(user) = 50;
    }
    return true;
}

u8 hurricane_on_tryhit_inv(u8 user, u8 src, u16 move, struct anonymous_callback* acb)
{
    if (user != src) return true;
    u8 defender = TARGET_OF(user);
    if ((CURRENT_MOVE(defender) == MOVE_BOUNCE) || (CURRENT_MOVE(defender) == MOVE_FLY) ||
         (CURRENT_MOVE(defender) == MOVE_SKY_DROP)) {
         return true;
     }
     return false;
}

// Thunder
/* Literal clone of hurricane callbacks. Those are copied over in move_data.c */


// Weather ball
u8 weather_ball_on_modify_move(u8 user, u8 src, u16 move, struct anonymous_callback* acb)
{
    if (user != src) return true;
    switch(get_weather()) {
        case WEATHER_RAIN:
            B_MOVE_TYPE(user, 0) = MTYPE_WATER;
            B_MOVE_POWER(user) *= 2;
            break;
        case WEATHER_SUN:
            B_MOVE_TYPE(user, 0) = MTYPE_FIRE;
            B_MOVE_POWER(user) *= 2;
            break;
        case WEATHER_SANDSTORM:
            B_MOVE_TYPE(user, 0) = MTYPE_ROCK;
            B_MOVE_POWER(user) *= 2;
            break;
        case WEATHER_HAIL:
            B_MOVE_TYPE(user, 0) = MTYPE_ICE;
            B_MOVE_POWER(user) *= 2;
            break;
        case WEATHER_HARSH_SUN:
            B_MOVE_TYPE(user, 0) = MTYPE_FIRE;
            B_MOVE_POWER(user) *= 2;
            break;
        case WEATHER_HARSH_RAIN:
            B_MOVE_TYPE(user, 0) = MTYPE_WATER;
            B_MOVE_POWER(user) *= 2;
            break;
        default:
            break;
    };
    return true;
}
