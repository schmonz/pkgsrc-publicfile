$NetBSD: patch-prot.h,v 1.2 2023/11/16 22:55:37 schmonz Exp $

Add missing include.
Specify expected parameters.

--- prot.h.orig	1999-11-09 07:23:46.000000000 +0000
+++ prot.h
@@ -1,7 +1,8 @@
 #ifndef PROT_H
 #define PROT_H
 
-extern int prot_gid();
-extern int prot_uid();
+#include <unistd.h>
+extern int prot_gid(gid_t);
+extern int prot_uid(uid_t);
 
 #endif
