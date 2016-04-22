#include <stdio.h>
#include <fcurl.h>

int main(int argc, char **argv)
{
  FCURL *file;

  file = fcurl_open("https://daniel.haxx.se/", "r");
  if(file) {
    char buffer [256];
    while(1) {
      size_t rc = fcurl_read(buffer, sizeof(buffer), 1, file);
      if(rc > 0)
        /* send the received data to stdout */
        fwrite(buffer, rc, 1, stdout);
    }
    fcurl_close(file);
  }
  else {
    fprintf(stderr, "Failed to open URL\n");
  }
  return 1;
}
