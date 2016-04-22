AUTOMAKE_OPTIONS = foreign nostdinc subdir-objects

ACLOCAL_AMFLAGS = -I m4

lib_LTLIBRARIES = libfcurl.la

LIBHEADERS = include/fcurl.h

SOURCES = src/fcurl.c

EXTRA_DIST = AUTHORS README.md

# install headers in $(includedir) with subdirs
nobase_include_HEADERS = $(LIBHEADERS)

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = libfcurl.pc
pkgincludedir= $(includedir)/fcurl
pkginclude_HEADERS = 

LIBBROTLIENC_VERSION_INFO = -version-info 1:0:0
LIBBROTLIDEC_VERSION_INFO = -version-info 1:0:0
# This flag accepts an argument of the form current[:revision[:age]]. So,
# passing -version-info 3:12:1 sets current to 3, revision to 12, and age to
# 1.
#
# If either revision or age are omitted, they default to 0. Also note that age
# must be less than or equal to the current interface number.
#
# Here are a set of rules to help you update your library version information: 
#
# 1.Start with version information of 0:0:0 for each libtool library.
#
# 2.Update the version information only immediately before a public release of
# your software. More frequent updates are unnecessary, and only guarantee
# that the current interface number gets larger faster.
#
# 3.If the library source code has changed at all since the last update, then
# increment revision (c:r+1:a)
#
# 4.If any interfaces have been added, removed, or changed since the last
# update, increment current, and set revision to 0. (c+1:r=0:a)
#
# 5.If any interfaces have been added since the last public release, then
# increment age. (c:r:a+1)
#
# 6.If any interfaces have been removed since the last public release, then
# set age to 0. (c:r:a=0)
#

libfcurl_la_CPPFLAGS_EXTRA =
libfcurl_la_LDFLAGS = $(AM_LDFLAGS) $(LIBFCURL_VERSION_INFO) $(LDFLAGS)
libfcurl_la_CFLAGS = $(AM_CFLAGS)
libfcurl_la_CXXFLAGS =
libfcurl_la_CPPFLAGS = $(AM_CPPFLAGS)
libfcurl_la_SOURCES = $(SOURCES)

# where to install the brotli headers
libfcurl_ladir = $(includedir)
