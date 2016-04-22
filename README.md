# fcurl

The fopen, fread, fwrite et all functions are common and a standard "idiom" in
many C programs.

By providing fcurl* functions with the same general behavior as the file based
versions, but instead allowing URLs where file names are otherwise used, this
is an attempt to allow existing file-based applications to switch over to read
and write files over common internet protocols instead.

## API

Maybe something like this?

    FCURL *fcurl_open(const char *path, const char *mode);

    size_t fcurl_read(void *ptr, size_t size, size_t nmemb, FCURL *stream);

    size_t fcurl_write(const void *ptr, size_t size, size_t nmemb,
                       FCURL *stream);

    int fcurl_flush(FCURL *stream);

    int fcurl_close(FCURL *stream);

    int fcurl_getc(FCURL *stream);

    char *fcurl_gets(char *s, int size, FCURL *stream);

    int fcurl_ungetc(int c, FCURL *stream);
