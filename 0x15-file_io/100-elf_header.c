#include "main.h"
/**
 * print_elf - Prints elf header in the format specified.
 * header: Pointer to a structure of type Elf header.
 *
 * Return: Nothing.
 */
void print_elf(const Elf64_Ehdr *header)
{
	printf("Elf Header\n");
	printf("  Magic:   ");

	for (i = 0; i < EI_NIDENT; i++)
		printf(" %02x", header->e_ident[i]);
	printf("\n");

	printf("  Class:                             %s\n",
			(header->e_ident[EI_CLASS] == ELFCLASS64) ? "ELF64" : "ELF32");
	printf("  Data:                              %s\n",
			(header->e_ident[EI_DATA] == ELFDATA2LSB)
			? "2's complement, little endian" : "2's complement, big endian");
	printf("  Version:                           %d (current)",
			header->e_ident[EI_VERSION]);
	printf("OS/ABI:                            ");

	switch (header->e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV: printf("UNIX - System V\n"); break;
		case ELFOSABI_HPUX: printf("HP-UX\n"); break;
		case ELFOSABI_NETBSD: printf("NetBSD\n"); break;
		case ELFOSABI_LINUX: printf("Linux\n"); break;
		case ELFOSABI_SOLARIS: printf("Sun Solaris\n"); break;
		case ELFOSABI_IRIX: printf("SGI Irix\n"); break;
		case ELFOSABI_FREEBSD: printf("FreeBSD\n"); break;
		case ELFOSABI_TRU64: printf("Compaq TRU64 UNIX\n"); break;
		case ELFOSABI_ARM: printf("ARM\n"); break;
		case ELFOSABI_STANDALONE: printf("Standalone App\n"); break;
		default: printf("<unknown>\n");
	}
	printf("  ABI Version:                       %d\n",
			header->e_ident[EI_ABIVERSION]);
	printf("  Type:                              ");
	switch(header->e_type)
	{
		case ET_NONE: printf("(NONE) No file type\n"); break;
		case ET_REL: printf("REL (Relocateable file)\n"); break;
		case ET_EXEC: printf("EXEC (Executable file)\n"); break;
		case ET_DYN: printf("DYN Shared object file\n"); break;
		case ET_CORE: printf("CORE (Core file)\n"); break;
		default: printf("<unknown>\n");
	}
	printf("  Entry point address:               0x%lx\n",
			(unsigned long)header->e_entry);
}

int main(int argc, char **argv)
{
	int fd;
	ssize_t read_bytes;
	const char *elf_filename;
	Elf64_Ehdr header;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		return (98);
	}
	elf_filename = argv[1];
	fd = open(elf_filename, O_RDONLY);

	if (fd == -1)
	{
		perror("Error");
		return (98);
	}
	read_bytes = read(fd, &header, sizeof(header));
	if (read_bytes != sizeof(header))
	{
		perror("Error");
		clode(fd);
		return (98);
	}

	if (header.e_ident[EI_MAGO] != ELFMAGO ||
			header.e_ident[EI_MAG1] != ELFMAG1 ||
			header.e_ident[EI_MAG2] != ELFMAG2 ||
			header.e_ident[EI_MAG3 != ELFMAG3])
	{
		fprintf(stderr, "Error: Not an ELF file\n");
		close(fd);
		return (98);
	}
	print_elf(&header);
	close(fd);
	return (0);
}
