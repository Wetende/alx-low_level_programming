#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

#define BUF_SIZE 1024

void print_error(char *message) {
    fprintf(stderr, "Error: %s\n", message);
    exit(98);
}

int main(int argc, char **argv) {
    if (argc != 2) {
        print_error("Invalid number of arguments");
    }

    int fd = open(argv[1], O_RDONLY);
    if (fd == -1) {
        print_error("Failed to open file");
    }

    char buf[BUF_SIZE];
    int n = read(fd, buf, BUF_SIZE);
    if (n == -1) {
        print_error("Failed to read file");
    }
    if (n < sizeof(Elf64_Ehdr)) {
        print_error("File too small to contain ELF header");
    }

    Elf64_Ehdr *ehdr = (Elf64_Ehdr *) buf;
    if (ehdr->e_ident[EI_MAG0] != ELFMAG0 ||
        ehdr->e_ident[EI_MAG1] != ELFMAG1 ||
        ehdr->e_ident[EI_MAG2] != ELFMAG2 ||
        ehdr->e_ident[EI_MAG3] != ELFMAG3) {
        print_error("File is not an ELF file");
    }

    printf("Magic: ");
    for (int i = 0; i < EI_NIDENT; i++) {
        printf("%02x ", ehdr->e_ident[i]);
    }
    printf("\n");

    printf("Class: ");
    switch (ehdr->e_ident[EI_CLASS]) {
        case ELFCLASS32:
            printf("ELF32\n");
            break;
        case ELFCLASS64:
            printf("ELF64\n");
            break;
        default:
            printf("Invalid class\n");
            break;
    }

    printf("Data: ");
    switch (ehdr->e_ident[EI_DATA]) {
        case ELFDATA2LSB:
            printf("2's complement, little endian\n");
            break;
        case ELFDATA2MSB:
            printf("2's complement, big endian\n");
            break;
        default:
            printf("Invalid data encoding\n");
            break;
    }

    printf("Version: %d\n", ehdr->e_ident[EI_VERSION]);

    printf("OS/ABI: ");
    switch (ehdr->e_ident[EI_OSABI]) {
        case ELFOSABI_SYSV:
            printf("UNIX System V ABI\n");
            break;
        case ELFOSABI_HPUX:
            printf("HP-UX ABI\n");
            break;
        case ELFOSABI_NETBSD:
            printf("NetBSD ABI\n");
            break;
        case ELFOSABI_LINUX:
            printf("Linux ABI\n");
            break;
        case ELFOSABI_SOLARIS:
            printf("Solaris ABI\n");
            break;
        case ELFOSABI_IRIX:
            printf("IRIX ABI\n");
            break;
        case ELFOSABI_FREEBSD:
            printf("FreeBSD ABI\n");
            break;
        case ELFOSABI_TRU64:
            printf("Tru64 UNIX ABI\n");
            break;
        case ELFOSABI_ARM:
            printf("ARM architecture ABI\n");
            break;
        case ELFOSABI_STANDALONE:
            printf("Standalone

