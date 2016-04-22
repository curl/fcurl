#**************************************************************************
# fcurl
#
# Copyright (C) 2016, Daniel Stenberg, <daniel@haxx.se>
#
# This software is licensed as described in the file COPYING, which
# you should have received as part of this distribution. The terms
# are also available at https://curl.haxx.se/docs/copyright.html.
#
# You may opt to use, copy, modify, merge, publish, distribute and/or sell
# copies of the Software, and permit persons to whom the Software is
# furnished to do so, under the terms of the COPYING file.
#
# This software is distributed on an "AS IS" basis, WITHOUT WARRANTY OF ANY
# KIND, either express or implied.
#
#**************************************************************************/
AUTOMAKE_OPTIONS = foreign nostdinc

EXTRA_DIST = 

check_PROGRAMS = readurl

# Specify our include paths here, and do it relative to $(top_srcdir) and
# $(top_builddir), to ensure that these paths which belong to the library
# being currently built and tested are searched before the library which
# might possibly already be installed in the system.
#
# $(top_srcdir)/include is for libcurl's external include files

AM_CPPFLAGS = -I$(top_srcdir)/include

LIBDIR = $(top_builddir)

AM_CPPFLAGS += 

LDADD = $(LIBDIR)/libfcurl.la -lcurl

all: $(check_PROGRAMS)
