include bin/ps/build.mk
include bin/shell/build.mk
include bin/ls/build.mk
include bin/export/build.mk
include bin/cat/build.mk
include bin/pwd/build.mk
include bin/mkdir/build.mk
include bin/uid/build.mk
include bin/kill/build.mk

EXTRA_CLEAN += $(PROGRAM)
