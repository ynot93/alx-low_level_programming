#include "main.h"
/**
 * check_elf - Checks if a file is an ELF file.
 * @e_ident: Pointer to an array containing the ELF magic numbers.
 *
 * Return: Nothing.
 */
void check_elf(unsigned char *e_ident)
{
	int i;

	for (i = 0; i < 4; i++)
	{
		if (e_ident[i] != 127 &&
				e_ident[i] != 'E' &&
				e_ident[i] != 'L' &&
				e_ident[i] != 'F')
		{
			fprintf(stderr, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * read_elf_header - Reads a elf header from a fd.
 * @fd: File descrptor of the elf file.
 * @header: Pointer to structure to store the header.
 *
 * Return: Nothing.
 */
void read_elf_header(int fd, Elf64_Ehdr *header)
{
	ssize_t read_bytes;

	read_bytes = read(fd, header, sizeof(Elf64_Ehdr));
	if (read_bytes != sizeof(Elf64_Ehdr))
	{
		perror("Error");
		close(fd);
		exit(98);
	}
}

/**
 * print_elf - Prints elf header in the format specified.
 * header: Pointer to a structure of type Elf header.
 *
 * Return: Nothing.
 */
void print_elf(const Elf64_Ehdr *header)
{
	int i;

	printf("Elf Header:\n");
	printf("  Magic:   ");

	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", header->e_ident[i]);
		if (i < EI_NIDENT - 1)
			printf(" ");
	}
	printf("\n");

	printf("  Class:                             %s\n",
			(header->e_ident[EI_CLASS] == ELFCLASS64) ? "ELF64" : "ELF32");
	printf("  Data:                              %s\n",
			(header->e_ident[EI_DATA] == ELFDATA2LSB)
			? "2's complement, little endian" : "2's complement, big endian");
	printf("  Version:                           %d (current)\n",
			header->e_ident[EI_VERSION]);
	printf("  OS/ABI:                            ");

	switch (header->e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		default:
			printf("<unknown>\n");
	}
	printf("  ABI Version:                       %d\n",
			header->e_ident[EI_ABIVERSION]);
	printf("  Type:                              ");
	switch(header->e_type)
	{
		case ET_NONE:
			printf("NONE (No file type)\n");
			break;
		case ET_REL:
			printf("REL (Relocateable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("<unknown>\n");
	}
	printf("  Entry point address:               0x%lx\n",
			(unsigned long)header->e_entry);
}

int main(int argc, char **argv)
{
	int fd;
	const char *elf_filename;
	Elf64_Ehdr header;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		return (98);
	}
	elf_filename = argv[1];
	printf("Attempting to open file: %s\n", elf_filename);
	fd = open(elf_filename, O_RDONLY);
	printf("File is open: %s\n", elf_filename);
	if (fd == -1)
	{
		perror("Error");
		return (98);
	}
	read_elf_header(fd, &header);
	check_elf(header.e_ident);
	print_elf(&header);
	close(fd);
	return (0);
}
