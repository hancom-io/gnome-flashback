/*
 * This file is generated by gdbus-codegen, do not modify it.
 *
 * The license of this code is the same as for the D-Bus interface description
 * it was derived from. Note that it links to GLib, so must comply with the
 * LGPL linking clauses.
 */

#ifndef __GF_SHELL_INTROSPECT_GEN_H__
#define __GF_SHELL_INTROSPECT_GEN_H__

#include <gio/gio.h>

G_BEGIN_DECLS


/* ------------------------------------------------------------------------ */
/* Declarations for org.gnome.Shell.Introspect */

#define GF_TYPE_SHELL_INTROSPECT_GEN (gf_shell_introspect_gen_get_type ())
#define GF_SHELL_INTROSPECT_GEN(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), GF_TYPE_SHELL_INTROSPECT_GEN, GfShellIntrospectGen))
#define GF_IS_SHELL_INTROSPECT_GEN(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), GF_TYPE_SHELL_INTROSPECT_GEN))
#define GF_SHELL_INTROSPECT_GEN_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), GF_TYPE_SHELL_INTROSPECT_GEN, GfShellIntrospectGenIface))

struct _GfShellIntrospectGen;
typedef struct _GfShellIntrospectGen GfShellIntrospectGen;
typedef struct _GfShellIntrospectGenIface GfShellIntrospectGenIface;

struct _GfShellIntrospectGenIface
{
  GTypeInterface parent_iface;



  gboolean (*handle_get_running_applications) (
    GfShellIntrospectGen *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_get_windows) (
    GfShellIntrospectGen *object,
    GDBusMethodInvocation *invocation);

  gboolean  (*get_animations_enabled) (GfShellIntrospectGen *object);

  guint  (*get_version) (GfShellIntrospectGen *object);

  void (*running_applications_changed) (
    GfShellIntrospectGen *object);

};

GType gf_shell_introspect_gen_get_type (void) G_GNUC_CONST;

GDBusInterfaceInfo *gf_shell_introspect_gen_interface_info (void);
guint gf_shell_introspect_gen_override_properties (GObjectClass *klass, guint property_id_begin);


/* D-Bus method call completion functions: */
void gf_shell_introspect_gen_complete_get_running_applications (
    GfShellIntrospectGen *object,
    GDBusMethodInvocation *invocation,
    GVariant *apps);

void gf_shell_introspect_gen_complete_get_windows (
    GfShellIntrospectGen *object,
    GDBusMethodInvocation *invocation,
    GVariant *windows);



/* D-Bus signal emissions functions: */
void gf_shell_introspect_gen_emit_running_applications_changed (
    GfShellIntrospectGen *object);



/* D-Bus method calls: */
void gf_shell_introspect_gen_call_get_running_applications (
    GfShellIntrospectGen *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean gf_shell_introspect_gen_call_get_running_applications_finish (
    GfShellIntrospectGen *proxy,
    GVariant **out_apps,
    GAsyncResult *res,
    GError **error);

gboolean gf_shell_introspect_gen_call_get_running_applications_sync (
    GfShellIntrospectGen *proxy,
    GVariant **out_apps,
    GCancellable *cancellable,
    GError **error);

void gf_shell_introspect_gen_call_get_windows (
    GfShellIntrospectGen *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean gf_shell_introspect_gen_call_get_windows_finish (
    GfShellIntrospectGen *proxy,
    GVariant **out_windows,
    GAsyncResult *res,
    GError **error);

gboolean gf_shell_introspect_gen_call_get_windows_sync (
    GfShellIntrospectGen *proxy,
    GVariant **out_windows,
    GCancellable *cancellable,
    GError **error);



/* D-Bus property accessors: */
gboolean gf_shell_introspect_gen_get_animations_enabled (GfShellIntrospectGen *object);
void gf_shell_introspect_gen_set_animations_enabled (GfShellIntrospectGen *object, gboolean value);

guint gf_shell_introspect_gen_get_version (GfShellIntrospectGen *object);
void gf_shell_introspect_gen_set_version (GfShellIntrospectGen *object, guint value);


/* ---- */

#define GF_TYPE_SHELL_INTROSPECT_GEN_PROXY (gf_shell_introspect_gen_proxy_get_type ())
#define GF_SHELL_INTROSPECT_GEN_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), GF_TYPE_SHELL_INTROSPECT_GEN_PROXY, GfShellIntrospectGenProxy))
#define GF_SHELL_INTROSPECT_GEN_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), GF_TYPE_SHELL_INTROSPECT_GEN_PROXY, GfShellIntrospectGenProxyClass))
#define GF_SHELL_INTROSPECT_GEN_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), GF_TYPE_SHELL_INTROSPECT_GEN_PROXY, GfShellIntrospectGenProxyClass))
#define GF_IS_SHELL_INTROSPECT_GEN_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), GF_TYPE_SHELL_INTROSPECT_GEN_PROXY))
#define GF_IS_SHELL_INTROSPECT_GEN_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), GF_TYPE_SHELL_INTROSPECT_GEN_PROXY))

typedef struct _GfShellIntrospectGenProxy GfShellIntrospectGenProxy;
typedef struct _GfShellIntrospectGenProxyClass GfShellIntrospectGenProxyClass;
typedef struct _GfShellIntrospectGenProxyPrivate GfShellIntrospectGenProxyPrivate;

struct _GfShellIntrospectGenProxy
{
  /*< private >*/
  GDBusProxy parent_instance;
  GfShellIntrospectGenProxyPrivate *priv;
};

struct _GfShellIntrospectGenProxyClass
{
  GDBusProxyClass parent_class;
};

GType gf_shell_introspect_gen_proxy_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (GfShellIntrospectGenProxy, g_object_unref)
#endif

void gf_shell_introspect_gen_proxy_new (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
GfShellIntrospectGen *gf_shell_introspect_gen_proxy_new_finish (
    GAsyncResult        *res,
    GError             **error);
GfShellIntrospectGen *gf_shell_introspect_gen_proxy_new_sync (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);

void gf_shell_introspect_gen_proxy_new_for_bus (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
GfShellIntrospectGen *gf_shell_introspect_gen_proxy_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
GfShellIntrospectGen *gf_shell_introspect_gen_proxy_new_for_bus_sync (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);


/* ---- */

#define GF_TYPE_SHELL_INTROSPECT_GEN_SKELETON (gf_shell_introspect_gen_skeleton_get_type ())
#define GF_SHELL_INTROSPECT_GEN_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), GF_TYPE_SHELL_INTROSPECT_GEN_SKELETON, GfShellIntrospectGenSkeleton))
#define GF_SHELL_INTROSPECT_GEN_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), GF_TYPE_SHELL_INTROSPECT_GEN_SKELETON, GfShellIntrospectGenSkeletonClass))
#define GF_SHELL_INTROSPECT_GEN_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), GF_TYPE_SHELL_INTROSPECT_GEN_SKELETON, GfShellIntrospectGenSkeletonClass))
#define GF_IS_SHELL_INTROSPECT_GEN_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), GF_TYPE_SHELL_INTROSPECT_GEN_SKELETON))
#define GF_IS_SHELL_INTROSPECT_GEN_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), GF_TYPE_SHELL_INTROSPECT_GEN_SKELETON))

typedef struct _GfShellIntrospectGenSkeleton GfShellIntrospectGenSkeleton;
typedef struct _GfShellIntrospectGenSkeletonClass GfShellIntrospectGenSkeletonClass;
typedef struct _GfShellIntrospectGenSkeletonPrivate GfShellIntrospectGenSkeletonPrivate;

struct _GfShellIntrospectGenSkeleton
{
  /*< private >*/
  GDBusInterfaceSkeleton parent_instance;
  GfShellIntrospectGenSkeletonPrivate *priv;
};

struct _GfShellIntrospectGenSkeletonClass
{
  GDBusInterfaceSkeletonClass parent_class;
};

GType gf_shell_introspect_gen_skeleton_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (GfShellIntrospectGenSkeleton, g_object_unref)
#endif

GfShellIntrospectGen *gf_shell_introspect_gen_skeleton_new (void);


G_END_DECLS

#endif /* __GF_SHELL_INTROSPECT_GEN_H__ */
