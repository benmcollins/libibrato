lib_LTLIBRARIES = libibrato.la

libibrato_la_SOURCES = metrics.c

# http://www.gnu.org/software/libtool/manual/html_node/Updating-version-info.html
# XXX Update this in CMakeLists.txt as well
libibrato_la_LDFLAGS = -version-info 0:0:0 $(CURL_LDFLAGS) $(JANSSON_LDFLAGS)
libibrato_la_CPPFLAGS = -I$(top_srcdir)/include $(CURL_INCLUDES) $(CODE_COVERAGE_CPPFLAGS) -Wall
libibrato_la_CFLAGS = $(JANSSON_CFLAGS) $(CURL_CFLAGS) $(CODE_COVERAGE_CFLAGS) $(PTHREAD_CFLAGS)
libibrato_la_LIBADD = $(JANSSON_LIBS) $(CURL_LIBS) $(CODE_COVERAGE_LDFLAGS) $(PTHREAD_LIBS)

pkgconfiglibdir = $(libdir)/pkgconfig
pkgconfiglib_DATA = libibrato.pc
