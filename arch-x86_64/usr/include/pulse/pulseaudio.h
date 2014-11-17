#ifndef foopulseaudiohfoo
#define foopulseaudiohfoo

/***
  This file is part of PulseAudio.

  Copyright 2004-2006 Lennart Poettering
  Copyright 2006 Pierre Ossman <ossman@cendio.se> for Cendio AB

  PulseAudio is free software; you can redistribute it and/or modify
  it under the terms of the GNU Lesser General Public License as
  published by the Free Software Foundation; either version 2.1 of the
  License, or (at your option) any later version.

  PulseAudio is distributed in the hope that it will be useful, but
  WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with PulseAudio; if not, write to the Free Software
  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
  USA.
***/

#include <pulse/mainloop-api.h>
#include <pulse/sample.h>
#include <pulse/def.h>
#include <pulse/context.h>
#include <pulse/stream.h>
#include <pulse/introspect.h>
#include <pulse/subscribe.h>
#include <pulse/scache.h>
#include <pulse/version.h>
#include <pulse/error.h>
#include <pulse/operation.h>
#include <pulse/channelmap.h>
#include <pulse/volume.h>
#include <pulse/xmalloc.h>
#include <pulse/utf8.h>
#include <pulse/thread-mainloop.h>
#include <pulse/mainloop.h>
#include <pulse/mainloop-signal.h>
#include <pulse/util.h>
#include <pulse/timeval.h>
#include <pulse/proplist.h>
#include <pulse/rtclock.h>

/** \file
 * Include all libpulse header files at once. The following files are
 * included: \ref mainloop-api.h, \ref sample.h, \ref def.h, \ref
 * context.h, \ref stream.h, \ref introspect.h, \ref subscribe.h, \ref
 * scache.h, \ref version.h, \ref error.h, \ref channelmap.h, \ref
 * operation.h,\ref volume.h, \ref xmalloc.h, \ref utf8.h, \ref
 * thread-mainloop.h, \ref mainloop.h, \ref util.h, \ref proplist.h,
 * \ref timeval.h, \ref rtclock.h and \ref mainloop-signal.h at
 * once */

/** \mainpage
 *
 * \section intro_sec Introduction
 *
 * This document describes the client API for the PulseAudio sound
 * server. The API comes in two flavours to accommodate different styles
 * of applications and different needs in complexity:
 *
 * \li The complete but somewhat complicated to use asynchronous API
 * \li The simplified, easy to use, but limited synchronous API
 *
 * All strings in PulseAudio are in the UTF-8 encoding, regardless of current
 * locale. Some functions will filter invalid sequences from the string, some
 * will simply fail. To ensure reliable behaviour, make sure everything you
 * pass to the API is already in UTF-8.

 * \section simple_sec Simple API
 *
 * Use this if you develop your program in synchronous style and just
 * need a way to play or record data on the sound server. See
 * \subpage simple for more details.
 *
 * \section async_sec Asynchronous API
 *
 * Use this if you develop your programs in asynchronous, event loop
 * based style or if you want to use the advanced features of the
 * PulseAudio API. A guide can be found in \subpage async.
 *
 * By using the built-in threaded main loop, it is possible to acheive a
 * pseudo-synchronous API, which can be useful in synchronous applications
 * where the simple API is insufficient. See the \ref async page for
 * details.
 *
 * \section thread_sec Threads
 *
 * The PulseAudio client libraries are not designed to be directly
 * thread-safe. They are however designed to be reentrant and
 * threads-aware.
 *
 * To use the libraries in a threaded environment, you must assure that
 * all objects are only used in one thread at a time. Normally, this means
 * that all objects belonging to a single context must be accessed from the
 * same thread.
 *
 * The included main loop implementation is also not thread safe. Take care
 * to make sure event objects are not manipulated when any other code is
 * using the main loop.
 *
 * \section pkgconfig pkg-config
 *
 * The PulseAudio libraries provide pkg-config snippets for the different
 * modules:
 *
 * \li libpulse - The asynchronous API and the internal main loop implementation.
 * \li libpulse-mainloop-glib - GLIB 2.x main loop bindings.
 * \li libpulse-simple - The simple PulseAudio API.
 */

#endif
