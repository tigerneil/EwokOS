#ifndef VFSCMD_H
#define VFSCMD_H

enum {
	VFS_CMD_ADD = 0,	
	VFS_CMD_DEL,
	VFS_CMD_INFO,
	VFS_CMD_NODE_BY_FD,
	VFS_CMD_NODE_BY_NAME,
	VFS_CMD_KIDS,
	VFS_CMD_MOUNT,
	VFS_CMD_UNMOUNT
};

#endif