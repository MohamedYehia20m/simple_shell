#!/bin/bash

shell_input="/bin/ls -l"
function check_setup()
{
	return 0
}
function sh_setup()
{
	return 0
}
function check_callback()
{
	status=$1

	return $status
}


