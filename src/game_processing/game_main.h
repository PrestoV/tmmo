#include "map.h"
#include "../map&builds_gen/buildgen.h"
#include "character.h"

#ifndef GAME_MAIN_H
#define GAME_MAIN_H

#define tick_delay 10000 //1000 = 1ms

#define BUILDING_TYPE_OFFSET 10
typedef enum building_type
{
    barrack = 0,
    smithy,
    market,
    tavern,
    academy

} building_type_t;

typedef struct union_buildings
{
    building_t *buildings;
    size_t buildings_cnt;
} union_buildings_t;

void game_start(bool *is_stopped);
bool game_init(char *map_name);

characters_t* game_get_characters();
int* game_get_character_index_tick();
size_t game_get_msize_x();
size_t game_get_msize_y();
map_point_t* game_get_map();

#endif //GAME_MAIN_H
