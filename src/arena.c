#include "arena.h"
#include <assert.h>
#include <string.h>
#include <stdlib.h>

#define REALLOC_OVERHEAD 4096

void arena_init(arena_t* arena, const int32_t bytes)
{
	arena->size = 0;
	arena->cap = bytes;
	arena->allocation = malloc(bytes);
}

void arena_grow(arena_t* arena, const int32_t new_size)
{
	if (arena->cap >= new_size) return;
	uint8_t* allocation = realloc(arena->allocation, new_size + REALLOC_OVERHEAD);
	assert(allocation != NULL && "failed to grow arena!");
	arena->allocation = allocation;
	arena->cap = new_size + REALLOC_OVERHEAD;
}

void* arena_alloc(arena_t* arena, const int32_t bytes)
{
	assert(arena->size + bytes <= arena->cap && "arena_alloc(): new allocation exceeds cap!");
	void* addr = arena->allocation + arena->size;
	arena->size += bytes;
	return addr;
}

void* arena_calloc(arena_t* arena, const int32_t bytes)
{
	void* res = arena_alloc(arena, bytes);
	memset(res, 0, bytes);
	return res;
}

void* arena_push(arena_t* arena, const void* src, const int32_t bytes)
{
	assert(arena->cap >= arena->size + bytes);
	void* dest = arena->allocation + arena->size;
	/* printf("arena_push: %x from %x\n", dest, arena); */
	memcpy(dest, src, bytes);
	arena->size += bytes;
	return dest;
}
