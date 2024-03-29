$NetBSD: patch-alloc.c,v 1.2 2023/11/16 22:55:37 schmonz Exp $

Add missing include.

--- alloc.c.orig	1999-11-09 07:23:46.000000000 +0000
+++ alloc.c
@@ -1,7 +1,6 @@
 #include "alloc.h"
 #include "error.h"
-extern char *malloc();
-extern void free();
+#include <stdlib.h>
 
 #define ALIGNMENT 16 /* XXX: assuming that this alignment is enough */
 #define SPACE 4096 /* must be multiple of ALIGNMENT */
