#!/bin/bash
zz="/^1[34578]\d{9}$/"
if[[ "$1"=~$zz ]];then
	echo "1"
else
	echo "2"
fi