#ifndef __COMPEL_ELF64_TYPES_H__
#define __COMPEL_ELF64_TYPES_H__

#define Ehdr_t		Elf64_Ehdr
#define Shdr_t		Elf64_Shdr
#define Sym_t		Elf64_Sym
#define Rel_t		Elf64_Rel
#define Rela_t		Elf64_Rela

#define Off_t		Elf64_Off
#define Word_t		Elf64_Word
#define Half_t		Elf64_Half

#define ELF_ST_TYPE	ELF64_ST_TYPE
#define ELF_ST_BIND	ELF64_ST_BIND

#define ELF_R_SYM	ELF64_R_SYM
#define ELF_R_TYPE	ELF64_R_TYPE

#endif /* __COMPEL_ELF64_TYPES_H__ */
