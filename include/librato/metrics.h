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

/**
 * @file librato/metrics.h
 * @brief Librato C Library - Metrics Routines
 */

#ifndef LIBRATO_METRICS_H
#define LIBRATO_METRICS_H

#ifdef __cplusplus
extern "C" {
#endif

/** Opaque Librato Metrics context. */
typedef struct librato_metrics librato_metrics_t;

/**
 * @defgroup librato_metrics_new Librato Metrics Object Creation
 * Functions used to create and destroy Librato Metrics contexts.
 *
 * The librato_metrics_t object is used to establish a context to a Librato
 * account for performing metrics creation and manipulation. All metrics
 * functionality requires this context. It is thread safe, and thus, can be
 * used in threaded applications without further protection.
 * @{
 */

/**
 * Allocate a new, Librato Metrics context.
 *
 * This is used to create a new context to pass to subsequent metrics
 * routines.
 *
 * @param lm Pointer to a Librato Metrics pointer. Will be allocated on
 *           success.
 * @return 0 on success, valid errno otherwise.
 */
int librato_metrics_new(librato_metrics_t **lm);

/**
 * Free a Librato Metrics context and any other resources it is using.
 *
 * After calling, the Librato Metrics object referenced will no longer be
 * valid and its memory will be freed.
 *
 * @param lm Pointer to a Librato Metrics object previously created with
 *           librato_metrics_new().
 */
void librato_metrics_free(librato_metrics_t *lm);

/** @} */

#ifdef __cplusplus
}
#endif

#endif /* LIBRATO_METRICS_H */
