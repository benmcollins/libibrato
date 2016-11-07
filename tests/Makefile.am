TESTS = lm_new

check_PROGRAMS = $(TESTS)

AM_CPPFLAGS = -I$(top_srcdir)/include
AM_CFLAGS = -Wall $(CHECK_CFLAGS) -D_GNU_SOURCE
AM_LDFLAGS = -L$(top_builddir)/libibrato
LDADD = -librato $(CHECK_LIBS)

@CODE_COVERAGE_RULES@
@VALGRIND_CHECK_RULES@
