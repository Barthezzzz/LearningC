/*
 * =========================================================
 *             TYPICAL C APPLICATION MEMORY LAYOUT
 * =========================================================
 *
 *   High Memory Address (0xFFFFFFFF / 0x7FFFFFFFFFFF)
 *   +-------------------------------------------------------+
 *   | Command-line arguments (argv) & Environment variables |
 *   +-------------------------------------------------------+
 *   |                       STACK                           |
 *   |  - Function call frames, local variables, ret addrs   |
 *   |  - Automatically allocated and deallocated            |
 *   |  - Grows DOWNWARD (towards lower memory addresses)   |
 *   |                          |                            |
 *   |                          v                            |
 *   +-------------------------------------------------------+
 *   |                          |                            |
 *   |                          | (Unmapped / Available)     |
 *   |                          v                            |
 *   +-------------------------------------------------------+
 *   |                          ^                            |
 *   |                          |                            |
 *   |  - Dynamic memory: malloc(), calloc(), realloc()      |
 *   |  - Managed manually via free()                        |
 *   |  - Grows UPWARD (towards higher memory addresses)     |
 *   |                       HEAP                            |
 *   +-------------------------------------------------------+
 *   |                       BSS                             |
 *   |  - Uninitialized global & static variables            |
 *   |  - Zero-initialized at runtime by the C runtime (CRT) |
 *   +-------------------------------------------------------+
 *   |                  INITIALIZED DATA                     |
 *   |  - Global & static variables with explicit initializers|
 *   |  - Read/Write memory                                  |
 *   +-------------------------------------------------------+
 *   |                   TEXT (CODE) SEGMENT                 |
 *   |  - Compiled machine instructions (binary opcodes)     |
 *   |  - String literals, const data (often in .rodata)     |
 *   |  - Read-Only to prevent accidental overwrites         |
 *   +-------------------------------------------------------+
 *   Low Memory Address (0x00000000)
 */

#include <stdio.h>
#include <stdlib.h>

// 1. TEXT / RODATA SEGMENT: Read-only string literal
const char *global_message = "Hello, Memory!";

// 2. INITIALIZED DATA SEGMENT: Global initialized to a non-zero value
int global_counter = 42;

// 3. BSS SEGMENT: Uninitialized global (automatically set to 0 by runtime)
int global_uninitialized_buffer[100];

void inspect_memory(int argument_var) {
    // 4. STACK: Function arguments and local automatic variables
    int local_stack_var = 10;
    static int static_initialized_var = 5; // Resides in DATA segment, scoped locally

    // 5. HEAP: Explicit runtime allocation
    int *heap_ptr = (int *)malloc(sizeof(int));
    if (heap_ptr != NULL) {
        *heap_ptr = 99;
    }

    /*
     * Memory location mapping:
     * - &inspect_memory    -> Text Segment (lowest address)
     * - &global_counter    -> Data Segment
     * - global_uninitialized_buffer -> BSS Segment
     * - heap_ptr           -> Heap (dynamically allocated)
     * - &local_stack_var   -> Stack (highest address here)
     */

    free(heap_ptr); // Prevent memory leaks on the heap
}