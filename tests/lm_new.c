/* Public domain, no copyright. Use at your own risk. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <time.h>

#include <check.h>

#include <librato/metrics.h>

START_TEST(test_lm_new)
{
	librato_metrics_t *lm = NULL;
	int ret = 0;

	ret = librato_metrics_new(NULL);
	ck_assert_int_eq(ret, EINVAL);

	ret = librato_metrics_new(&lm);
	ck_assert_int_eq(ret, 0);
	ck_assert(lm != NULL);

	librato_metrics_free(lm);
}
END_TEST

static Suite *librato_suite(void)
{
	Suite *s;
	TCase *tc_core;

	s = suite_create("Librato Metrics New");

	tc_core = tcase_create("librato_metrics_new");
	tcase_add_test(tc_core, test_lm_new);

	tcase_set_timeout(tc_core, 30);

	suite_add_tcase(s, tc_core);

	return s;
}

int main(int argc, char *argv[])
{
	int number_failed;
	Suite *s;
	SRunner *sr;

	s = librato_suite();
	sr = srunner_create(s);

	srunner_run_all(sr, CK_VERBOSE);
	number_failed = srunner_ntests_failed(sr);
	srunner_free(sr);

	return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
