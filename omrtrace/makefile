###############################################################################
#
# (c) Copyright IBM Corp. 2015, 2016
#
#  This program and the accompanying materials are made available
#  under the terms of the Eclipse Public License v1.0 and
#  Apache License v2.0 which accompanies this distribution.
#
#      The Eclipse Public License is available at
#      http://www.eclipse.org/legal/epl-v10.html
#
#      The Apache License v2.0 is available at
#      http://www.opensource.org/licenses/apache2.0.php
#
# Contributors:
#    Multiple authors (IBM Corp.) - initial implementation and documentation
###############################################################################

top_srcdir := ..
include $(top_srcdir)/omrmakefiles/configure.mk

MODULE_NAME := omrtrace
ARTIFACT_TYPE := archive

OBJECTS := $(patsubst %.cpp,%$(OBJEXT),$(wildcard *.cpp))
OBJECTS += $(patsubst %.c,%$(OBJEXT),$(wildcard *.c))

ifeq (gcc,$(OMR_TOOLCHAIN))
# disable builtin strncpy buffer length check for optimized builds (_FORTIFY_SOURCE=1 requires -O3)
  ifeq ($(OMR_OPTIMIZE),1)
    MODULE_CXXFLAGS+=-U_FORTIFY_SOURCE -D_FORTIFY_SOURCE=1
  endif
endif

include $(top_srcdir)/omrmakefiles/rules.mk

