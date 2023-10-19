#include "shell.h"

/**
 * reset_info - reset info struct fields
 * @info: info struct address
 */

void reset_info(info_t *info)
{
	info->arg = NULL;
	info->argv = NULL;
	info->path = NULL;
	info->argc = 0;
}

