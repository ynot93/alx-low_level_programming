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
 * print_magic_header - Prints magic numbers of elf header.
 * @e_ident: Pointer to array containing Elf magic numbers.
 *
 * Return: Nothing.
 */
void print_magic_header(unsigned char *e_ident)
{
	int i;

	printf("Elf Header:\n");
	printf("  Magic:   ");

	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", e_ident[i]);
		if (i == EI_NIDENT - 1)
			printf("\n");
		else
		{
			printf(" ");
		}
	}
}

/**
 * print_elf_class - Prints the class of ELF header.
 * @e_ident: Array containing ELF class.
 */
void print_elf_class(unsigned char e_ident)
{
	const char *classes[] = {
		"none", "ELF32", "ELF64"
	};

	printf("  Class:                             %s\n", classes[e_ident]);
}

/**
 * print_elf_data - Prints the data of ELF header.
 * @e_ident: Array containing ELF data.
 */
void print_elf_data(unsigned char e_ident)
{
	const char *data_formats[] = {
		"none",
		"2's complement, little endian",
		"2's complement, big endian"
	};

	printf("  Data:                              %s\n", data_formats[e_ident]);
}

/**
 * print_elf_version - Prints the version of ELF header.
 * @e_ident: Array containing ELF version.
 */
void print_elf_version(unsigned char e_ident)
{
	printf("  Version:                           %d", e_ident);
	printf((e_ident == EV_CURRENT) ? " (current)\n" : "\n");
}

/**
 * print_osabi - Prints OS/ABI of ELF header.
 * @e_ident: Array containing ELF OS/ABI.
 */
void print_osabi(unsigned char e_ident)
{
	const char *osabis[] = {
		"UNIX - System V", "UNIX - HP-UX", "UNIX - NetBSD", "UNIX - Linux",
		"UNIX - Solaris", "UNIX - IRIX", "UNIX - FreeBSD", "UNIX - TRU64",
		"ARM", "Standalone App"
	};

	printf("  OS/ABI:                            %s\n", osabis[e_ident]);
}

/**
 * print_abi - Prints the ABI version.
 * @e_ident: Array containing ELF ABI version.
 */
void print_abi(unsigned char e_ident)
{
	printf("  ABI Version:                       %d\n", e_ident);
}

/**
 * print_elf_type - Prints the type of ELF header.
 * @e_type: The ELF type.
 */
void print_elf_type(unsigned int e_type)
{
	const char *types[] = {
		"NONE (No file type)", "REL (Relocateable file)", "EXEC (Executable file)",
		"DYN (Shared object file)", "CORE (Core file)"
	};

	printf("  Type:                              %s\n", types[e_type]);
}

/**
 * print_entry - Print entry point address.
 * @e_entry: The elf entry point.
 * @e_ident: Array containing ELF class.
 */
void print_entry(unsigned long int e_entry, unsigned char e_ident)
{
	printf("  Entry point address:               %#lx\n",
			(e_ident == ELFCLASS32) ? (unsigned int)e_entry : e_entry);
}

/**
 * main - Entry point for program.
 * @argc: Number of command line arguments.
 * @argv: Array of command line arguments.
 *
 * Return: 0 (Success).
 */
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
	fd = open(elf_filename, O_RDONLY);
	if (fd == -1)
	{
		perror("Error");
		return (98);
	}
	read_elf_header(fd, &header);
	check_elf(header.e_ident);
	print_magic_header(header.e_ident);
	print_elf_class(header.e_ident[EI_CLASS]);
	print_elf_data(header.e_ident[EI_DATA]);
	print_elf_version(header.e_ident[EI_VERSION]);
	print_osabi(header.e_ident[EI_OSABI]);
	print_abi(header.e_ident[EI_ABIVERSION]);
	print_elf_type(header.e_type);
	print_entry(header.e_entry, header.e_ident[EI_CLASS]);
	close(fd);
	return (0);
}
