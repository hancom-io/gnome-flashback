dnl **************************************************************************
dnl Define version info
dnl **************************************************************************

m4_define([gf_major_version], [3])
m4_define([gf_minor_version], [38])
m4_define([gf_micro_version], [0])
m4_define([gf_version], [gf_major_version.gf_minor_version.gf_micro_version])

dnl **************************************************************************
dnl Define bugzilla address
dnl **************************************************************************

m4_define([gf_bugzilla_url],
          [https://bugzilla.gnome.org/enter_bug.cgi?product=gnome-flashback])

dnl **************************************************************************
dnl Initialize autoconf
dnl **************************************************************************

AC_INIT([gnome-flashback], gf_version, [gf_bugzilla_url])
AC_CONFIG_HEADERS([config.h])
AC_CONFIG_MACRO_DIR([m4])
AC_CONFIG_AUX_DIR([build-aux])

dnl **************************************************************************
dnl Set release policy
dnl **************************************************************************

AX_IS_RELEASE([git-directory])

dnl **************************************************************************
dnl Enable debug
dnl **************************************************************************

AX_CHECK_ENABLE_DEBUG([yes])

dnl **************************************************************************
dnl Add warning flags
dnl **************************************************************************

AX_COMPILER_FLAGS([WARN_CFLAGS], [WARN_LDFLAGS])

dnl **************************************************************************
dnl Initialize automake
dnl **************************************************************************

AM_INIT_AUTOMAKE([1.13 no-dist-gzip dist-xz subdir-objects tar-ustar -Wno-portability])
AM_MAINTAINER_MODE([enable])
AM_SILENT_RULES([yes])

dnl **************************************************************************
dnl Initialize libtool
dnl **************************************************************************

LT_INIT([disable-static])
LT_LIB_M

dnl **************************************************************************
dnl Check for required programs
dnl **************************************************************************

AC_PROG_CC
AC_PATH_PROG([GDBUS_CODEGEN], [gdbus-codegen])
AC_PATH_PROG([GLIB_COMPILE_RESOURCES], [glib-compile-resources])
AC_PATH_PROG([GLIB_MKENUMS], [glib-mkenums])

dnl **************************************************************************
dnl Internationalization
dnl **************************************************************************

AM_GNU_GETTEXT([external])
AM_GNU_GETTEXT_VERSION([0.19.6])
AM_GNU_GETTEXT_REQUIRE_VERSION([0.19.6])

GETTEXT_PACKAGE=gnome-flashback
AC_SUBST([GETTEXT_PACKAGE])
AC_DEFINE_UNQUOTED([GETTEXT_PACKAGE], ["$GETTEXT_PACKAGE"],
                   [Define the gettext package to be used])

dnl **************************************************************************
dnl Desktop settings support
dnl **************************************************************************

GLIB_GSETTINGS

dnl **************************************************************************
dnl Check for required packages
dnl **************************************************************************

GDK_PIXBUF_REQUIRED=2.32.2
GTK_REQUIRED=3.22.0
LIBGNOME_DESKTOP_REQUIRED=3.12.0
LIBGNOME_PANEL_REQUIRED=3.35.2
CANBERRA_REQUIRED=0.13
GLIB_REQUIRED=2.44.0
GSETTINGS_DESKTOP_SCHEMAS_REQUIRED=3.31.0
POLKIT_AGENT_REQUIRED=0.97
POLKIT_GOBJECT_REQUIRED=0.97
IBUS_REQUIRED=1.5.2
UPOWER_GLIB_REQUIRED=0.99.0
XRANDR_REQUIRED=1.5.0
XXF86VM_REQUIRED=1.1.4

PKG_CHECK_MODULES([DBUS], [
  gio-2.0 >= $GLIB_REQUIRED
  gio-unix-2.0 >= $GLIB_REQUIRED
])

PKG_CHECK_MODULES([BACKENDS], [
  gio-2.0 >= $GLIB_REQUIRED
  gio-unix-2.0 >= $GLIB_REQUIRED
  glib-2.0 >= $GLIB_REQUIRED
  gnome-desktop-3.0 >= $LIBGNOME_DESKTOP_REQUIRED
  upower-glib >= $UPOWER_GLIB_REQUIRED
  xcb-randr
  xrandr >= $XRANDR_REQUIRED
  x11-xcb
  x11
])

PKG_CHECK_MODULES([GNOME_FLASHBACK], [
  gtk+-3.0 >= $GTK_REQUIRED
])

PKG_CHECK_MODULES([A11Y_KEYBOARD], [
  gio-unix-2.0 >= $GLIB_REQUIRED
  gtk+-3.0
  gsettings-desktop-schemas >= $GSETTINGS_DESKTOP_SCHEMAS_REQUIRED
  x11
])

PKG_CHECK_MODULES([AUDIO_DEVICE_SELECTION], [
  gio-unix-2.0 >= $GLIB_REQUIRED
  gtk+-3.0 >= $GTK_REQUIRED
  glib-2.0 >= $GLIB_REQUIRED
])

PKG_CHECK_MODULES([AUTOMOUNT_MANAGER], [
  gdk-pixbuf-2.0 >= $GDK_PIXBUF_REQUIRED
  gtk+-3.0 >= $GTK_REQUIRED
  gsettings-desktop-schemas >= $GSETTINGS_DESKTOP_SCHEMAS_REQUIRED
])

PKG_CHECK_MODULES([CLIPBOARD], [
  glib-2.0 >= $GLIB_REQUIRED
  gtk+-3.0 >= $GTK_REQUIRED
  x11
])

PKG_CHECK_MODULES([COMMON], [
  gnome-desktop-3.0 >= $LIBGNOME_DESKTOP_REQUIRED
  gtk+-3.0 >= $GTK_REQUIRED
  x11
])

PKG_CHECK_MODULES([DESKTOP], [
  glib-2.0 >= $GLIB_REQUIRED
  gio-2.0 >= $GLIB_REQUIRED
  gio-unix-2.0 >= $GLIB_REQUIRED
  gnome-desktop-3.0 >= $LIBGNOME_DESKTOP_REQUIRED
  gtk+-3.0 >= $GTK_REQUIRED
  libsystemd
  x11
])

PKG_CHECK_MODULES([END_SESSION_DIALOG], [
  gio-unix-2.0 >= $GLIB_REQUIRED
  gtk+-3.0 >= $GTK_REQUIRED
])

PKG_CHECK_MODULES([IDLE_MONITOR], [
  gio-unix-2.0 >= $GLIB_REQUIRED
  gtk+-3.0 >= $GTK_REQUIRED
  x11
  xext
])

PKG_CHECK_MODULES([INPUT_SETTINGS], [
  gtk+-3.0 >= $GTK_REQUIRED
  gnome-desktop-3.0 >= $LIBGNOME_DESKTOP_REQUIRED
  gsettings-desktop-schemas >= $GSETTINGS_DESKTOP_SCHEMAS_REQUIRED
  xi >= 1.6.0
])

PKG_CHECK_MODULES([INPUT_SOURCES], [
  gnome-desktop-3.0 >= $LIBGNOME_DESKTOP_REQUIRED
  gtk+-3.0 >= $GTK_REQUIRED
  gsettings-desktop-schemas >= $GSETTINGS_DESKTOP_SCHEMAS_REQUIRED
  ibus-1.0 >= $IBUS_REQUIRED
  pango
  x11
  xkbfile
  xkeyboard-config
])

PKG_CHECK_MODULES([NOTIFICATIONS], [
  gdk-pixbuf-2.0 >= $GDK_PIXBUF_REQUIRED
  gio-unix-2.0 >= $GLIB_REQUIRED
  gtk+-3.0 >= $GTK_REQUIRED
  glib-2.0 >= $GLIB_REQUIRED
  gio-2.0 >= $GLIB_REQUIRED
  x11
])

PKG_CHECK_MODULES([POLKIT], [
  gdk-pixbuf-2.0 >= $GDK_PIXBUF_REQUIRED
  gtk+-3.0 >= $GTK_REQUIRED
  glib-2.0 >= $GLIB_REQUIRED
  polkit-agent-1 >= $POLKIT_AGENT_REQUIRED
  polkit-gobject-1 >= $POLKIT_GOBJECT_REQUIRED
])

PKG_CHECK_MODULES([ROOT_BACKGROUND], [
  gtk+-3.0 >= $GTK_REQUIRED
  gnome-desktop-3.0 >= $LIBGNOME_DESKTOP_REQUIRED
])

PKG_CHECK_MODULES([SCREENCAST], [
  gdk-pixbuf-2.0 >= $GDK_PIXBUF_REQUIRED
  gio-unix-2.0 >= $GLIB_REQUIRED
  gtk+-3.0 >= $GTK_REQUIRED
])

PKG_CHECK_MODULES([SCREENSAVER], [
  gdm
  gio-unix-2.0 >= $GLIB_REQUIRED
  glib-2.0 >= $GLIB_REQUIRED
  gnome-desktop-3.0 >= $LIBGNOME_DESKTOP_REQUIRED
  gtk+-3.0 >= $GTK_REQUIRED
  libsystemd
  xxf86vm >= $XXF86VM_REQUIRED
])

PKG_CHECK_MODULES([SCREENSHOT], [
  gio-unix-2.0 >= $GLIB_REQUIRED
  gtk+-3.0 >= $GTK_REQUIRED
  libcanberra-gtk3 >= $CANBERRA_REQUIRED
  x11
  xext
  xfixes
])

PKG_CHECK_MODULES([SHELL], [
  gtk+-3.0 >= $GTK_REQUIRED
  gio-unix-2.0 >= $GLIB_REQUIRED
  glib-2.0 >= $GLIB_REQUIRED
  gnome-desktop-3.0 >= $LIBGNOME_DESKTOP_REQUIRED
])

PKG_CHECK_MODULES([STATUS_NOTIFIER_WATCHER], [
  glib-2.0 >= $GLIB_REQUIRED
  gio-unix-2.0 >= $GLIB_REQUIRED
])

dnl **************************************************************************
dnl libgnome-volume-control
dnl **************************************************************************

PKG_CHECK_MODULES([GVC], [
  gio-2.0
  gobject-2.0
  libpulse
  libpulse-mainloop-glib
])

PKG_CHECK_EXISTS([alsa], [found_alsa="yes"], [found_alsa="no"])

AS_IF([test "x$found_alsa" = "xyes"], [
  AC_DEFINE([HAVE_ALSA], [1], [Define to 1 if alsa is available])
  PKG_CHECK_MODULES([ALSA], [alsa])
])

AM_CONDITIONAL(HAVE_ALSA, [test "x$found_alsa" = "xyes"])

dnl **************************************************************************
dnl Define XKB base directory
dnl **************************************************************************

AC_DEFINE_UNQUOTED([XKB_BASE],
                   ["`$PKG_CONFIG --variable xkb_base xkeyboard-config`"],
                   [Define XKB base directory])

dnl **************************************************************************
dnl Check if we have Pango 1.44.0 or newer
dnl **************************************************************************

PKG_CHECK_EXISTS([pango >= 1.44.0],
                 AC_DEFINE([HAVE_PANGO144], [1],
                           [Define if Pango is 1.44.0 or newer]))

dnl **************************************************************************
dnl Check if we have gnome-desktop 3.35.4 or newer
dnl **************************************************************************

PKG_CHECK_EXISTS([gnome-desktop-3.0 >= 3.35.4],
                 AC_DEFINE([HAVE_GNOME_DESKTOP_3_35_4], [1],
                           [Define if gnome-desktop is 3.35.4 or newer]))

dnl **************************************************************************
dnl Systemd session
dnl **************************************************************************

AC_ARG_ENABLE([systemd-session],
              [AS_HELP_STRING([--enable-systemd-session], [enable systemd session support])],
              [enable_systemd_session="$enableval"], [enable_systemd_session="yes"])

HIDDEN_UNDER_SYSTEMD="false"
AS_IF([test "x$enable_systemd_session" = "xyes"], [
  HIDDEN_UNDER_SYSTEMD="true"
])

AM_CONDITIONAL([ENABLE_SYSTEMD_SESSION], [test "x$enable_systemd_session" = "xyes"])
AC_SUBST([HIDDEN_UNDER_SYSTEMD])

dnl **************************************************************************
dnl System indicators
dnl **************************************************************************

GNOME_PANEL_LAYOUTS_DIR=`$PKG_CONFIG --variable=layoutsdir libgnome-panel`
AC_SUBST([GNOME_PANEL_LAYOUTS_DIR], [$GNOME_PANEL_LAYOUTS_DIR])

GNOME_PANEL_MODULES_DIR=`$PKG_CONFIG --variable=modulesdir libgnome-panel`
AC_SUBST([GNOME_PANEL_MODULES_DIR], [$GNOME_PANEL_MODULES_DIR])

PKG_CHECK_MODULES([SYSTEM_INDICATORS], [
  gio-unix-2.0 >= $GLIB_REQUIRED
  gnome-bluetooth-1.0
  libcanberra-gtk3 >= $CANBERRA_REQUIRED
  libgnome-panel >= $LIBGNOME_PANEL_REQUIRED
  upower-glib
])

dnl **************************************************************************
dnl Compiz session
dnl **************************************************************************

AC_ARG_WITH([compiz-session],
            [AS_HELP_STRING([--with-compiz-session], [build with Compiz session support])],
            [with_compiz_session="$withval"], [with_compiz_session="auto"])

AS_IF([test "x$with_compiz_session" != "xno"], [
  PKG_CHECK_EXISTS([libcompizconfig >= 0.9.14.0],
                   [found_compiz="yes"], [found_compiz="no"])

  AS_IF([test "x$found_compiz" = "xyes"], [
    AC_DEFINE([HAVE_COMPIZ_SESSION], [1], [Define if built with compiz session support])

    COMPIZCONFIG_CONFIG_DIR=`$PKG_CONFIG --variable=configdir libcompizconfig`
    AC_SUBST([COMPIZCONFIG_CONFIG_DIR], [$COMPIZCONFIG_CONFIG_DIR])

    COMPIZCONFIG_UPGRADES_DIR=`$PKG_CONFIG --variable=upgradesdir libcompizconfig`
    AC_SUBST([COMPIZCONFIG_UPGRADES_DIR], [$COMPIZCONFIG_UPGRADES_DIR])
  ], [
    AS_IF([test "x$with_compiz_session" = "xyes"], [
      AC_MSG_ERROR([Compiz session requested but libcompizconfig not found])
    ])
  ])
], [found_compiz=no])

AM_CONDITIONAL(WITH_COMPIZ_SESSION, [test "x$found_compiz" = "xyes"])

dnl **************************************************************************
dnl PAM
dnl **************************************************************************

AC_CHECK_HEADERS([security/pam_appl.h], [], [
  AC_MSG_ERROR([PAM development files not found])
])

AC_SEARCH_LIBS([pam_start], [pam], [], [
  AC_MSG_ERROR([PAM library not found])
])

dnl **************************************************************************
dnl Required components from GNOME Settings Daemon
dnl **************************************************************************

AC_SUBST([REQUIRED_COMPNENTS_GSD], [" \
  org.gnome.SettingsDaemon.A11ySettings \
  org.gnome.SettingsDaemon.Color \
  org.gnome.SettingsDaemon.Datetime \
  org.gnome.SettingsDaemon.Housekeeping \
  org.gnome.SettingsDaemon.Keyboard \
  org.gnome.SettingsDaemon.MediaKeys \
  org.gnome.SettingsDaemon.Power \
  org.gnome.SettingsDaemon.PrintNotifications \
  org.gnome.SettingsDaemon.Rfkill \
  org.gnome.SettingsDaemon.ScreensaverProxy \
  org.gnome.SettingsDaemon.Sharing \
  org.gnome.SettingsDaemon.Smartcard \
  org.gnome.SettingsDaemon.Sound \
  org.gnome.SettingsDaemon.UsbProtection \
  org.gnome.SettingsDaemon.Wacom \
  org.gnome.SettingsDaemon.XSettings \
"])

dnl **************************************************************************
dnl Process .in files
dnl **************************************************************************

AC_CONFIG_FILES([
  Makefile

  backends/Makefile

  data/Makefile
  data/applications/Makefile
  data/autostart/Makefile
  data/compizconfig/Makefile
  data/directories/Makefile
  data/gnome-panel/Makefile
  data/menus/Makefile
  data/schemas/Makefile
  data/sessions/Makefile
  data/systemd/Makefile
  data/theme/Makefile
  data/theme/Adwaita/Makefile
  data/theme/HighContrast/Makefile
  data/theme/Yaru/Makefile
  data/ui/Makefile
  data/xsessions/Makefile

  dbus/Makefile

  daemons/Makefile
  daemons/clipboard/Makefile

  gnome-flashback/Makefile
  gnome-flashback/liba11y-keyboard/Makefile
  gnome-flashback/libaudio-device-selection/Makefile
  gnome-flashback/libautomount-manager/Makefile
  gnome-flashback/libcommon/Makefile
  gnome-flashback/libdesktop/Makefile
  gnome-flashback/libend-session-dialog/Makefile
  gnome-flashback/libidle-monitor/Makefile
  gnome-flashback/libinput-settings/Makefile
  gnome-flashback/libinput-sources/Makefile
  gnome-flashback/libnotifications/Makefile
  gnome-flashback/libpolkit/Makefile
  gnome-flashback/libroot-background/Makefile
  gnome-flashback/libscreencast/Makefile
  gnome-flashback/libscreensaver/Makefile
  gnome-flashback/libscreenshot/Makefile
  gnome-flashback/libshell/Makefile
  gnome-flashback/libstatus-notifier-watcher/Makefile

  gvc/Makefile

  system-indicators/Makefile

  po/Makefile.in
])

AC_OUTPUT

dnl **************************************************************************
dnl Show summary
dnl **************************************************************************

echo ""
echo "  GNOME Flashback $VERSION"
echo "  `echo GNOME Flashback $VERSION | sed "s/./=/g"`"
echo ""
echo "  srcdir ......................: ${srcdir}"
echo ""
echo "  compiler ....................: ${CC}"
echo "  cflags ......................: ${CFLAGS}"
echo ""
echo "  prefix ......................: ${prefix}"
echo "  exec_prefix .................: ${exec_prefix}"
echo "  libdir ......................: ${libdir}"
echo "  sysconfdir ..................: ${sysconfdir}"
echo "  libexecdir ..................: ${libexecdir}"
echo ""
echo "  Compiz session ..............: ${found_compiz}"
echo ""
