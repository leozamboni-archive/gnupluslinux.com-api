/*
 * https://gnupluslinux.com/anime Api
 * Copyright © 2021, 2022 Leonardo Z. Nunes
 *
 * this program is free software: you can redistribute it and/or modify
 * it under the terms of the gnu general public license as published by
 * the free software foundation, either version 3 of the license, or
 * (at your option) any later version.
 *
 * this program is distributed in the hope that it will be useful,
 * but without any warranty; without even the implied warranty of
 * merchantability or fitness for a particular purpose.  see the
 * gnu general public license for more details.
 *
 * you should have received a copy of the gnu general public license
 * along with this program.  if not, see <http://www.gnu.org/licenses/>.
 */

#include <stdio.h>

#include "gnupluslinux-api.h"

int
main (int argc, char *argv[])
{
  printf ("%s", get_anime_file (argv[1], atoi (argv[2])));
  return 0;
}
