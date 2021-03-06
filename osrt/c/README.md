# C Standard Library

## Progress

### Headers Bundled with Clang

- complex.h
- float.h
- inttypes.h
- iso646.h
- limits.h
- stdalign.h
- stdarg.h
- stdatomic.h
- stdbool.h
- stddef.h
- stdint.h
- tgmath.h


### Standard Headers

* Headers with no function listed is considered less priority

- assert.h
    - [x] `assert`
	- [x] `static assert`
- ctype.h
    - [ ] `isanum`
	- [x] `isalpha`
	- [x] `isblank`
	- [x] `iscntrl`
	- [x] `isdigit`
	- [x] `isgraph`
	- [x] `islower`
	- [x] `isprint`
	- [x] `ispunct`
	- [x] `isspace`
	- [x] `isupper`
	- [x] `isxdigit`
	- [x] `tolower`
	- [x] `toupper`
- errno.h
    - [x] `EDOM`
	- [x] `ELISEQ`
	- [x] `ERANGE`
	- [x] `errno`
- fenv.h
- locale.h
- math.h
- setjmp.h
    - [ ] `setjmp`
	- [ ] `longjmp`
- signal.h
- stdio.h
    - [x] `FILE`
	- [ ] `fpos_t`
	- [x] `_IOFBF`
	- [x] `_IOLBF`
	- [x] `_IONBF`
	- [ ] `BUFSIZ`
	- [ ] `EOF`
	- [ ] `FOPEN_MAX`
	- [ ] `FILENAME_MAX`
	- [ ] `L_tmpnam`
	- [ ] `SEEK_CUR`
	- [ ] `SEEK_END`
	- [ ] `SEEK_SET`
	- [ ] `TMP_MAX`
	- [x] `stderr`
	- [ ] `stdin`
	- [x] `stdout`
	- [ ] `remove`
	- [ ] `rename`
	- [ ] `tmpfile`
	- [ ] `tmpnam`
	- [ ] `fclose`
	- [ ] `fflush`
	- [ ] `fopen`
	- [ ] `freopen`
	- [ ] `setbuf`
	- [ ] `setvbuf`
	- [x] `fprintf`
	- [x] `printf`
	- [x] `snprintf`
	- [x] `sprintf`
	- [x] `vfprintf`
	- [x] `vprintf`
	- [x] `vsnprintf`
	- [x] `vsprintf`
	- [ ] `fscanf`
	- [ ] `scanf`
	- [ ] `sscanf`
	- [ ] `vfscanf`
	- [ ] `vscanf`
	- [ ] `vsscanf`
	- [ ] `fgetc`
	- [ ] `fgets`
	- [ ] `fputc`
	- [ ] `fputs`
	- [ ] `getc`
	- [ ] `getchar`
	- [ ] `putc`
	- [ ] `putchar`
	- [ ] `puts`
	- [ ] `ungetc`
	- [ ] `fread`
	- [ ] `fwrite`
	- [ ] `fgetpos`
	- [ ] `fseek`
	- [ ] `fsetpos`
	- [ ] `ftell`
	- [ ] `rewind`
	- [ ] `clearerr`
	- [ ] `feof`
	- [ ] `ferror`
	- [x] `perror`
- stdlib.h
    - [x] `div_t`
    - [x] `ldiv_t`
	- [x] `lldiv_t`
	- [x] `EXIT_FAILURE`
	- [x] `EXIT_SUCCESS`
	- [x] `RAND_MAX`
	- [x] `MB_CUR_MAX`
    - [ ] `atof`
	- [ ] `atoi`
	- [ ] `atol`
	- [ ] `atoll`
	- [ ] `strtod`
	- [ ] `strtof`
	- [ ] `strtold`
	- [x] `rand`
	- [x] `srand`
	- [x] `aligned_alloc`
	- [x] `calloc`
	- [x] `free`
	- [x] `malloc`
	- [x] `realloc`
	- [x] `abort`
	- [x] `atexit`
	- [x] `at_quick_exit`
	- [x] `exit`
	- [x] `_Exit`
	- [x] `getenv`
	- [x] `quick_exit`
	- [x] `system`
	- [ ] `bsearch`
	- [ ] `qsort`
	- [x] `abs`
	- [x] `labs`
	- [x] `llabs`
	- [x] `div`
	- [x] `ldiv`
	- [x] `lldiv`
	- [x] `mblen`
	- [x] `mbtowc`
	- [x] `wctomb`
	- [x] `mbstowcs`
	- [x] `wcstombs`
- string.h
    - [x] `memcpy`
	- [x] `memmove`
	- [x] `strcpy`
	- [x] `strncpy`
	- [x] `strcat`
	- [x] `strncat`
	- [x] `memcmp`
	- [x] `strcmp`
	- [x] `strcoll`
	- [x] `strncmp`
	- [x] `strxfrm`
	- [x] `memchr`
	- [x] `strchr`
	- [x] `strcspn`
	- [x] `strpbrk`
	- [x] `strrchr`
	- [x] `strspn`
	- [x] `strstr`
	- [x] `strtok`
	- [x] `memset`
	- [x] `strerror`
	- [x] `strlen`
- time.h
- uchar.h
- wchar.h
- wctype.h

### Optional Headers

- [ ] threads.h
    want libos threading support
