/*
 * This file is generated by gdbus-codegen, do not modify it.
 *
 * The license of this code is the same as for the D-Bus interface description
 * it was derived from. Note that it links to GLib, so must comply with the
 * LGPL linking clauses.
 */

#ifndef __GF_ACCOUNTS_GEN_H__
#define __GF_ACCOUNTS_GEN_H__

#include <gio/gio.h>

G_BEGIN_DECLS


/* ------------------------------------------------------------------------ */
/* Declarations for org.freedesktop.Accounts */

#define GF_TYPE_ACCOUNTS_GEN (gf_accounts_gen_get_type ())
#define GF_ACCOUNTS_GEN(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), GF_TYPE_ACCOUNTS_GEN, GfAccountsGen))
#define GF_IS_ACCOUNTS_GEN(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), GF_TYPE_ACCOUNTS_GEN))
#define GF_ACCOUNTS_GEN_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), GF_TYPE_ACCOUNTS_GEN, GfAccountsGenIface))

struct _GfAccountsGen;
typedef struct _GfAccountsGen GfAccountsGen;
typedef struct _GfAccountsGenIface GfAccountsGenIface;

struct _GfAccountsGenIface
{
  GTypeInterface parent_iface;

  gboolean (*handle_find_user_by_name) (
    GfAccountsGen *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_name);

};

GType gf_accounts_gen_get_type (void) G_GNUC_CONST;

GDBusInterfaceInfo *gf_accounts_gen_interface_info (void);
guint gf_accounts_gen_override_properties (GObjectClass *klass, guint property_id_begin);


/* D-Bus method call completion functions: */
void gf_accounts_gen_complete_find_user_by_name (
    GfAccountsGen *object,
    GDBusMethodInvocation *invocation,
    const gchar *user);



/* D-Bus method calls: */
void gf_accounts_gen_call_find_user_by_name (
    GfAccountsGen *proxy,
    const gchar *arg_name,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean gf_accounts_gen_call_find_user_by_name_finish (
    GfAccountsGen *proxy,
    gchar **out_user,
    GAsyncResult *res,
    GError **error);

gboolean gf_accounts_gen_call_find_user_by_name_sync (
    GfAccountsGen *proxy,
    const gchar *arg_name,
    gchar **out_user,
    GCancellable *cancellable,
    GError **error);



/* ---- */

#define GF_TYPE_ACCOUNTS_GEN_PROXY (gf_accounts_gen_proxy_get_type ())
#define GF_ACCOUNTS_GEN_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), GF_TYPE_ACCOUNTS_GEN_PROXY, GfAccountsGenProxy))
#define GF_ACCOUNTS_GEN_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), GF_TYPE_ACCOUNTS_GEN_PROXY, GfAccountsGenProxyClass))
#define GF_ACCOUNTS_GEN_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), GF_TYPE_ACCOUNTS_GEN_PROXY, GfAccountsGenProxyClass))
#define GF_IS_ACCOUNTS_GEN_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), GF_TYPE_ACCOUNTS_GEN_PROXY))
#define GF_IS_ACCOUNTS_GEN_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), GF_TYPE_ACCOUNTS_GEN_PROXY))

typedef struct _GfAccountsGenProxy GfAccountsGenProxy;
typedef struct _GfAccountsGenProxyClass GfAccountsGenProxyClass;
typedef struct _GfAccountsGenProxyPrivate GfAccountsGenProxyPrivate;

struct _GfAccountsGenProxy
{
  /*< private >*/
  GDBusProxy parent_instance;
  GfAccountsGenProxyPrivate *priv;
};

struct _GfAccountsGenProxyClass
{
  GDBusProxyClass parent_class;
};

GType gf_accounts_gen_proxy_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (GfAccountsGenProxy, g_object_unref)
#endif

void gf_accounts_gen_proxy_new (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
GfAccountsGen *gf_accounts_gen_proxy_new_finish (
    GAsyncResult        *res,
    GError             **error);
GfAccountsGen *gf_accounts_gen_proxy_new_sync (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);

void gf_accounts_gen_proxy_new_for_bus (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
GfAccountsGen *gf_accounts_gen_proxy_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
GfAccountsGen *gf_accounts_gen_proxy_new_for_bus_sync (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);


/* ---- */

#define GF_TYPE_ACCOUNTS_GEN_SKELETON (gf_accounts_gen_skeleton_get_type ())
#define GF_ACCOUNTS_GEN_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), GF_TYPE_ACCOUNTS_GEN_SKELETON, GfAccountsGenSkeleton))
#define GF_ACCOUNTS_GEN_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), GF_TYPE_ACCOUNTS_GEN_SKELETON, GfAccountsGenSkeletonClass))
#define GF_ACCOUNTS_GEN_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), GF_TYPE_ACCOUNTS_GEN_SKELETON, GfAccountsGenSkeletonClass))
#define GF_IS_ACCOUNTS_GEN_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), GF_TYPE_ACCOUNTS_GEN_SKELETON))
#define GF_IS_ACCOUNTS_GEN_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), GF_TYPE_ACCOUNTS_GEN_SKELETON))

typedef struct _GfAccountsGenSkeleton GfAccountsGenSkeleton;
typedef struct _GfAccountsGenSkeletonClass GfAccountsGenSkeletonClass;
typedef struct _GfAccountsGenSkeletonPrivate GfAccountsGenSkeletonPrivate;

struct _GfAccountsGenSkeleton
{
  /*< private >*/
  GDBusInterfaceSkeleton parent_instance;
  GfAccountsGenSkeletonPrivate *priv;
};

struct _GfAccountsGenSkeletonClass
{
  GDBusInterfaceSkeletonClass parent_class;
};

GType gf_accounts_gen_skeleton_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (GfAccountsGenSkeleton, g_object_unref)
#endif

GfAccountsGen *gf_accounts_gen_skeleton_new (void);


G_END_DECLS

#endif /* __GF_ACCOUNTS_GEN_H__ */
