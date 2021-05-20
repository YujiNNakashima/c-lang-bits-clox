#ifndef clox_chunk_h
#define clox_chunk_h

#include "common.h"

typedef enum {
  OP_RETURN,
} OpCode;

// bytecode instruction def
typedef struct {
  uint8_t* code;
} Chunk;

#endif