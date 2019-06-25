/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntom <ntom@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/16 18:04:05 by ntom              #+#    #+#             */
/*   Updated: 2019/06/25 13:56:01 by ntom             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LS_H
# define FT_LS_H

/*
** LIBRARIES
*/

# include "../libft/libft.h"
# include <errno.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <pwd.h>
# include <dirent.h>
# include <time.h>
# include <grp.h>
# include <sys/acl.h>
# include <sys/xattr.h>
# include <stdio.h>
# include <uuid/uuid.h>

/*
** MACRO
*/

# define ON 1
# define OFF 0
# define OPT_L 0
# define OPT_UR 1
# define OPT_A 2
# define OPT_R 3
# define OPT_T 4

/*
** TYPES MACRO
*/

# define WHITEOUT 57344
# define SOCKLNK 49152
# define SYMBLNK 40960
# define REGULAR 32768
# define BLOCKSPE 24576
# define DIRECTOR 16384
# define CHARSPE 8192

/*
** STRUCTURES
*/

typedef struct		s_info
{
	char			*path;
	char			*name;
	unsigned char	type;
	struct stat		stats;
	int				status;
	struct s_info	*left;
	struct s_info	*right;
}					t_info;

/*
** MAIN.C
*/

/*
** PARSING.C
*/

int					parsing(char **argv, int *flags);

/*
** OPTION_L.C
*/

void				file_type(int value, char ftr[12]);

#endif
