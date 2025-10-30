#ifndef ARENA_H
#define ARENA_H

#include <stdint.h>

typedef struct arena_t
{
	uint8_t* allocation;
	int32_t cap;
	int32_t size;
} arena_t;

void arena_init(arena_t* arena, const int32_t bytes);

void arena_grow(arena_t* arena, const int32_t new_size);

void* arena_alloc(arena_t* arena, const int32_t bytes);

void* arena_calloc(arena_t* arena, const int32_t bytes);

void* arena_push(arena_t* arena, const void* src, const int32_t bytes);

#endif /* End ARENA_H */
