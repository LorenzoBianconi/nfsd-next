/* SPDX-License-Identifier: ((GPL-2.0 WITH Linux-syscall-note) OR BSD-3-Clause) */
/* Do not edit directly, auto-generated from: */
/*	Documentation/netlink/specs/nfsd.yaml */
/* YNL-GEN kernel header */

#ifndef _LINUX_NFSD_GEN_H
#define _LINUX_NFSD_GEN_H

#include <net/netlink.h>
#include <net/genetlink.h>

#include <uapi/linux/nfsd_netlink.h>

/* Common nested types */
extern const struct nla_policy nfsd_nfs_version_nl_policy[NFSD_A_NFS_VERSION_MINOR + 1];
extern const struct nla_policy nfsd_server_instance_nl_policy[NFSD_A_SERVER_INSTANCE_INET_PROTO + 1];

int nfsd_nl_rpc_status_get_start(struct netlink_callback *cb);
int nfsd_nl_rpc_status_get_done(struct netlink_callback *cb);

int nfsd_nl_rpc_status_get_dumpit(struct sk_buff *skb,
				  struct netlink_callback *cb);
int nfsd_nl_threads_set_doit(struct sk_buff *skb, struct genl_info *info);
int nfsd_nl_threads_get_doit(struct sk_buff *skb, struct genl_info *info);
int nfsd_nl_version_set_doit(struct sk_buff *skb, struct genl_info *info);
int nfsd_nl_version_get_doit(struct sk_buff *skb, struct genl_info *info);
int nfsd_nl_listener_set_doit(struct sk_buff *skb, struct genl_info *info);
int nfsd_nl_listener_get_doit(struct sk_buff *skb, struct genl_info *info);

extern struct genl_family nfsd_nl_family;

#endif /* _LINUX_NFSD_GEN_H */
