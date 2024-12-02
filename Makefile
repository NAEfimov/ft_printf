NAME        = libftprintf.a

#------------------------------------------------#
#   INGREDIENTS                                  #
#------------------------------------------------#
# LIBS        libraries to be used
# LIBS_TARGET libraries to be built
#
# INCS        header file locations
#
# SRCS      source files
#
# OBJS      object files
# DEPS      dependency files
#
# CC        compiler
# CFLAGS    compiler flags
# CPPFLAGS  preprocessor flags
# LDFLAGS     linker flags
# LDLIBS      libraries name

#LIBS        := ft
#LIBS_TARGET := libft/libft.a

#INCS        := . libft

SRCS		:=		\
	ft_printf.c		\
	print_hex.c		\
	print_num.c		\
	print_p.c		\
	print_str.c		\
	print_itoa.c	\
	print_uitoa.c	\
	print_utils.c

# SRCS_B		=

OBJS		:= $(SRCS:%.c=%.o)
# OBJS_B		:= $(SRCS_B:%.c=%.o)
DEPS		:= $(OBJS:.o=.d)
# DEPS_B		:= $(OBJS_B:.o=.d)

CC			:= cc
CFLAGS		:= -Wall -Wextra -Werror
CPPFLAGS	:= -MMD -MP
# LDFLAGS     := $(addprefix -L,$(dir $(LIBS_TARGET)))
# LDLIBS      := $(addprefix -l,$(LIBS))
AR 			:= ar
ARFLAGS		:= -r -c -s

#------------------------------------------------#
#   UTENSILS                                     #
#------------------------------------------------#
# RM        force remove
# MAKEFLAGS make flags

RM			= rm -f
# MAKEFLAGS	+= --no-print-directory

#------------------------------------------------#
#   RECIPES                                      #
#------------------------------------------------#
# all       default goal
# $(NAME)   link .o -> library
# %.o       compilation .c -> .o
# clean     remove .o
# fclean    remove .o + binary
# re        remake default goal

all: $(NAME)

$(NAME): $(OBJS) # $(LIBS_TARGET)
	$(AR) $(ARFLAGS) $@ $^
	$(info CREATED $(NAME))

# bonus: $(OBJS) $(OBJS_B)
# 	$(AR) $(ARFLAGS) $(NAME) $(OBJS) $(OBJS_B)
# 	$(info CREATED $(NAME))

#$(LIBS_TARGET):
#	$(MAKE) -C $(@D)

%.o: %.c
	$(CC) $(CFLAGS) $(CPPFLAGS) -c -o $@ $<
	$(info CREATED $@)-

-include $(DEPS)

clean:
# 	for f in $(dir $(LIBS_TARGET)); do $(MAKE) -C $$f clean; done
	$(RM) $(OBJS) $(DEPS)
fclean: clean
#	for f in $(dir $(LIBS_TARGET)); do $(MAKE) -C $$f fclean; done
	$(RM) $(NAME)

re:
	$(MAKE) fclean
	$(MAKE) all
