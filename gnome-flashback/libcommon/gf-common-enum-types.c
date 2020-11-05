
/* This file is generated by glib-mkenums, do not modify it. This code is licensed under the same license as the containing project. Note that it links to GLib, so must comply with the LGPL linking clauses. */

#include "config.h"
#include "gf-common-enum-types.h"
#include "gf-keybindings.h"

GType
gf_keybinding_type_get_type (void)
{
  static volatile gsize g_enum_type_id;
  static const GEnumValue values[] =
    {
      { GF_KEYBINDING_NONE, "GF_KEYBINDING_NONE", "none" },
      { GF_KEYBINDING_ISO_NEXT_GROUP, "GF_KEYBINDING_ISO_NEXT_GROUP", "iso-next-group" },
      { GF_KEYBINDING_ISO_FIRST_GROUP, "GF_KEYBINDING_ISO_FIRST_GROUP", "iso-first-group" },
      { GF_KEYBINDING_ISO_LAST_GROUP, "GF_KEYBINDING_ISO_LAST_GROUP", "iso-last-group" },
      { 0, NULL, NULL }
    };

  if (g_once_init_enter (&g_enum_type_id))
    {
      const gchar *string;
      GType id;

      string = g_intern_static_string ("GfKeybindingType");
      id = g_enum_register_static (string, values);

      g_once_init_leave (&g_enum_type_id, id);
    }

  return g_enum_type_id;
}

/* Generated data ends here */

