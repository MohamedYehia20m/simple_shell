#!/bin/bash


shell_input="./hbtn_ls /var"

function check_setup()
{
		$CP "/bin/ls" "$PWD/hbtn_ls"

			return 0
		}

	function sh_setup()
	{
			return 0
		}

	function check_callback()
	{
			status=$1

				$RM -f "$PWD/hbtn_ls"

					return $status
				}

