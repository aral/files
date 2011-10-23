/* 
 * Copyright (C) 1999, 2000, 2001 Eazel, Inc.
 *
 * The Gnome Library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public License as
 * published by the Free Software Foundation; either version 2 of the
 * License, or (at your option) any later version.
 *
 * The Gnome Library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with the Gnome Library; see the file COPYING.LIB.  If not,
 * write to the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 *
 * Authors: John Sullivan <sullivan@eazel.com>
 *          Darin Adler <darin@bentspoon.com>
 */

#include <glib-object.h>

char    *eel_strdup_strftime (const char *format, struct tm *time_pieces);
GDate   *eel_g_date_new_tm (struct tm *time_pieces);
char    *eel_get_date_as_string (guint64 d, gchar *date_format);
GList   *eel_get_user_names (void);
GList   *eel_get_group_names_for_user (void);
GList   *eel_get_all_group_names (void);
