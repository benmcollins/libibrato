/* Copyright (C) 2016 Ben Collins <ben@cyphre.com>
   This file is part of the Librato C Library

   This library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   This library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <pthread.h>

#include <jansson.h>

#include <librato/metrics.h>

#include "config.h"

struct librato_metrics {
	pthread_mutex_t mutex;
};

int librato_metrics_new(librato_metrics_t **__lm)
{
	librato_metrics_t *lm;

	if (!__lm)
		return EINVAL;

	lm = calloc(1, sizeof(librato_metrics_t));
	if (!lm)
		return ENOMEM; // LCOV_EXCL_LINE

	pthread_mutex_init(&lm->mutex, NULL);

	*__lm = lm;

	return 0;
}

void librato_metrics_free(librato_metrics_t *lm)
{
	if (!lm)
		return;

	/* TODO: Check for EBUSY? */
	pthread_mutex_destroy(&lm->mutex);

	free(lm);
}
