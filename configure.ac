AC_PREREQ([2.61])
AC_INIT([libibrato], [0.0.0], [https://github.com/benmcollins/libibrato/issues])
AM_INIT_AUTOMAKE
LT_PREREQ([2.2])
LT_INIT([])
AC_CONFIG_MACRO_DIR([m4])
AC_CONFIG_HEADERS([libibrato/config.h])

AC_SUBST([AM_CFLAGS], [-Wall])

PKG_CHECK_MODULES([CURL], [libcurl >= 7.0.0])
PKG_CHECK_MODULES([JANSSON], [jansson >= 2.0])
PKG_CHECK_MODULES([CHECK], [check >= 0.9.4], [true], [true])

AX_VALGRIND_CHECK
AX_CODE_COVERAGE
AX_PTHREAD

DX_MAN_FEATURE(ON)
DX_HTML_FEATURE(ON)
DX_CHM_FEATURE(OFF)
DX_CHI_FEATURE(OFF)
DX_RTF_FEATURE(OFF)
DX_XML_FEATURE(OFF)
DX_PDF_FEATURE(OFF)
DX_PS_FEATURE(OFF)
DX_INIT_DOXYGEN($PACKAGE_NAME, doxygen.cfg)

AC_CONFIG_FILES([
	Makefile
	include/Makefile
	libibrato/Makefile
	tests/Makefile
	libibrato/libibrato.pc
])

AC_OUTPUT
