#!/bin/sh

# Abort on error
set -e

TEMPLATECPP='#include "$CLASSNAME.hpp"

$CLASSNAME::$CLASSNAME()
{
	// TODO: Implement default contructor
}

$CLASSNAME::~$CLASSNAME()
{
	// TODO: Implement default destructor
}

$CLASSNAME::$CLASSNAME(const $CLASSNAME& src)
{
	// TODO: Implement copy contructor
}

$CLASSNAME&		$CLASSNAME::operator=(const $CLASSNAME& src)
{
	// TODO: Implement = operator
	return *this;
}

std::ostream&	operator<<(std::ostream& os, const $CLASSNAME& src)
{
	// TODO: Implement << operator
	return os;
}'

TEMPLATEHPP='#pragma once

#include <iostream>
#include <string>

class $CLASSNAME
{
private:

public:
	$CLASSNAME();
	~$CLASSNAME();

	$CLASSNAME(const $CLASSNAME& src);

	$CLASSNAME&	operator=(const $CLASSNAME& rhs);
};

std::ostream&	operator<<(std::ostream& os, const $CLASSNAME& src);
'

generate_cpp()
{
	if [ -f "$1" ]; then
		echo "generate_cpp: $1: File exists!"
	else
		cat <<-EOF | envsubst > "$1"
			$TEMPLATECPP
		EOF
	fi
}

generate_hpp()
{
	if [ -f "$1" ]; then
		echo "generate_hpp: $1: File exists!"
	else
		cat <<-EOF | envsubst > "$1"
			$TEMPLATEHPP
		EOF
	fi
}

generate_srcs()
{
	CLASSNAME=$1

	export CLASSNAME
	generate_cpp "$CLASSNAME.cpp"
	generate_hpp "$CLASSNAME.hpp"
}

if [ -z "$1" ]; then
	echo "Usage:	$0 DEST [CLASS]..." >&2
	exit 1
fi

cd "$1"; shift

while [ ! -z "$1" ]; do
	generate_srcs "$1"; shift
done
