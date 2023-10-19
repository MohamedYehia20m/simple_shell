#include "shell.h"

/**
 * deallocate_info - frees info struct fields
 * @info: info struct address
 * @all: true if freeing all fields
 */

void deallocate_info(info_t *info, int all)
{
	string_free(info->argv);
	info->argv = NULL;
	nfo->path = NULL;
	if (all)	
	{		
		if (!info->command_buffer)	
			free(info->arg);					
		if (info->env)					
			free_list(&(info->env));			
		if (info->alias)						
			free_list(&(info->alias));				
		string_free(info->environ);						
			info->environ = NULL;			
		pointer_free((void **)info->command_buffer);		
		if (info->file_descriptor > 2)							
			close(info->file_descriptor);					
		_putchar(BUFFER_FLUSH);						
	}
}
