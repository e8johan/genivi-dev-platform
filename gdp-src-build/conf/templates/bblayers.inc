# LAYER_CONF_VERSION is increased each time build/conf/bblayers.conf
# changes incompatibly
LCONF_VERSION = "6"

BBPATH = "${TOPDIR}"
BBFILES ?= ""

BBLAYERS ?= " \
  ${TOPDIR}/../poky/meta \
  ${TOPDIR}/../poky/meta-yocto \
  ${TOPDIR}/../poky/meta-yocto-bsp \
  ${TOPDIR}/../meta-ivi/meta-ivi \
  ${TOPDIR}/../meta-ivi/meta-ivi-bsp \
  ${TOPDIR}/../meta-openembedded/meta-oe \
  ${TOPDIR}/../meta-openembedded/meta-filesystems \
  ${TOPDIR}/../meta-openembedded/meta-ruby \
  ${TOPDIR}/../meta-qt5 \
  ${TOPDIR}/../meta-genivi-dev/meta-genivi-dev \
  ${TOPDIR}/../meta-rust \
  ${TOPDIR}/../meta-oic \
  ${TOPDIR}/../meta-erlang \
  ${TOPDIR}/../meta-rvi \
  ${TOPDIR}/../meta-boot2qt \
  ${TOPDIR}/../meta-genivi-dev-qtas \
  "

BBLAYERS_NON_REMOVABLE ?= " \
  ${OEROOT}/meta \
  ${OEROOT}/meta-yocto \
  ${OEROOT}/../meta-ivi/meta-ivi \
  "
