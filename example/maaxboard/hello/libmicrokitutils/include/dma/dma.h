// #include <io.h>
// #include <bus_defs.h>
#include <stdint.h>
#include <stddef.h>

#define sel4_dma_memalign(a,b) memalign(a,b)
#define sel4_dma_virt_to_phys(A) getPhys(A)
#define sel4_dma_phys_to_virt(A) getVirt(A)

void* sel4_dma_malloc(size_t);
void sel4_dma_init(uintptr_t, uintptr_t, uintptr_t);
uintptr_t* getPhys(void*);
uintptr_t* getVirt(void*);