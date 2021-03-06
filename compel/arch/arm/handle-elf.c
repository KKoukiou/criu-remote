#include <string.h>

#include "piegen.h"
#include "uapi/piegen-err.h"
#include "handle-elf.h"

int handle_binary(void *mem, size_t size)
{
	if (memcmp(mem, elf_ident_32, sizeof(elf_ident_32)) == 0)
		return handle_elf_arm(mem, size);

	pr_err("Unsupported Elf format detected\n");
	return -E_NOT_ELF;
}
