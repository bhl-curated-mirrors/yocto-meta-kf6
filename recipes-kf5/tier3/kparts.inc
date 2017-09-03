DESCRIPTION = "KParts"
HOMEPAGE = "https://api.kde.org/frameworks/kparts/html/index.html"
LICENSE = "LGPL-2.1"
LIC_FILES_CHKSUM = "file://COPYING.LIB;md5=2d5025d4aa3495befef8f17206a5b0a1"
PR = "r0"

DEPENDS = " \
    qtbase \
    kconfig \
    kcoreaddons \
    ki18n \
    kiconthemes \
    kio \
    kjobwidgets \
    kservice \
    ktextwidgets \
    kwidgetsaddons \
    kxmlgui \
"

SRC_URI = "git://anongit.kde.org/kparts;nobranch=1"
S = "${WORKDIR}/git"

inherit cmake_kf5
inherit gettext
inherit python3native

FILES_${PN} += " \
    ${datadir}/kservicetypes5/*.desktop \
"

FILES_${PN}-dev += " \
    ${datadir}/kdevappwizard/templates/*.tar.bz2 \
"