#include <stdio.h>
#include <string.h>

// Need to modify so it accepts windows paths aswell
const char* extract_filename(const char *path) {
    const char *filename = strrchr(path, '/');
    if (filename) {
        return filename + 1;  // Move past the last '/' character
    }
    return path; 
}

void uboot_log_printf(const char *const func, const char *const file, const unsigned line, const char *format, ...)
{
    va_list args;
    va_start(args, format);

    printf("%s@%s:%u ", func, extract_filename(file), line);
	vprintf(format, args);
    putc('\n');

    va_end(args);
}

void dummy_unused(void) { return; }