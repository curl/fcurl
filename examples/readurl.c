/***************************************************************************
 * fcurl
 *
 * Copyright (C) 2016, Daniel Stenberg, <daniel@haxx.se>
 *
 * This software is licensed as described in the file COPYING, which
 * you should have received as part of this distribution. The terms
 * are also available at https://curl.haxx.se/docs/copyright.html.
 *
 * You may opt to use, copy, modify, merge, publish, distribute and/or sell
 * copies of the Software, and permit persons to whom the Software is
 * furnished to do so, under the terms of the COPYING file.
 *
 * This software is distributed on an "AS IS" basis, WITHOUT WARRANTY OF ANY
 * KIND, either express or implied.
 *
 ***************************************************************************/
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
