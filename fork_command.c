#include "shell.h"

/**
 * fork_command - finds a command in PATH
 * @info: the parameter & return info struct
 *
 * Return: void
*/
void fork_command(info_t *info)
{
	pid_t child_pid;

	child_pid = fork();
	if (child_pid == -1)
	{
		perror("Error:");
		return;
	}
	if (child_pid == 0)
	{
		if (execve(info->path, info->argv, get_environ(info)) == -1)
		{
			deallocate_info(info, 1);
			if (errno == EACCES)
				exit(PERMISSION_DENIED);
			exit(1);
		}
	}
	else
	{
		wait(&(info->status));
		if (WIFEXITED(info->status))
		{
			info->status = WEXITSTATUS(info->status);
			if (info->status == PERMISSION_DENIED)
				print_error(info, "Permission denied\n");
		}
	}
}
